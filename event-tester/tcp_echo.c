
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <netdb.h>
#include <unistd.h>
#include <getopt.h>
#include <sched.h>
#include <errno.h>
#include <pthread.h> 
#include <stdbool.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <sys/resource.h>
#include <sys/eventfd.h>
#include <sys/ioctl.h>
#include <sys/syscall.h>
#include <sys/epoll.h>

#include <arpa/inet.h>

#include <linux/perf_event.h>

#include "tcp_echo.h"

#define OPTION(opts, text)	fprintf(stderr, " %-25s  %s\n", opts, text)
#define CONT(text) 		fprintf(stderr, " %-25s  %s\n", "", text)

static char *err_str[] = {  
        "CONNECTING",
        "WAITING",
        "READING",
        "WRITING",
        "CLOSING"
};

static void usage(void)
{
	fprintf(stderr, "Setup a TCP echo server prioritizing data locality. RSS needs to be enabled.\n\n");
	fprintf(stderr, "tcp_echo [options]\n");
	fprintf(stderr, "options:\n");
	OPTION("--help,-h", "Print this message");
	OPTION("--port,-p [port]", "Use the requested port instead of 7272");
	OPTION("--msg-size,-m [size]", "Use the requested message size instead of 32");
	OPTION("--stats-port,-s [port]", "Listen on this port instead of 8383 for stats connections");
}

struct worker_thread **threads;

/*
 * Number of worker threads that have finished setting themselves up.
 */
size_t init_count;
pthread_mutex_t worker_hang_lock = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t init_lock = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t init_cond = PTHREAD_COND_INITIALIZER;

struct connection **conns;

size_t msg_size;

size_t nr_cpus;

__thread struct worker_thread *me;

int max_fd;

/* Per Thread object caches to try and avoid round trips to malloc */
__thread struct buffer_cache *msg_cache;
__thread struct buffer_cache *conn_cache;

struct buffer_cache* init_cache(size_t entry_sz, size_t init_count, int cpu)
{
	struct buffer_cache *cache;
	struct buffer_entry *entry;
	cache = calloc(1, sizeof(struct buffer_cache));
	if (!cache)
		return NULL;

	cache->entry_sz = entry_sz;

	for (size_t i = 0; i < init_count; i++) {
		entry = calloc(1, sizeof(struct buffer_entry) + entry_sz);
		cache_free(cache, &(entry->buffer[0]), cpu);
	}

	return cache;
}

void *cache_alloc(struct buffer_cache *cache, int cpu)
{
	struct buffer_entry *entry;

	if (cache->head) {
		entry = cache->head;
		cache->head = entry->next;
		if (!cache->head)
			cache->tail = NULL;
		entry->next = NULL;
	} else {
		// We've exhausted the cache and need to allocate new
		entry = calloc(1, sizeof(struct buffer_entry) + cache->entry_sz);
		entry->alloc_cpu = cpu;
	}

	memset(entry->buffer, 0, cache->entry_sz);
	return &(entry->buffer[0]);
}

void cache_free(struct buffer_cache *cache, void *buff, int cpu)
{
	struct buffer_entry *entry;

	entry = (struct buffer_entry *)((unsigned long)buff - sizeof(struct buffer_entry));

	if (entry->alloc_cpu != cpu) {
		// We should probably do something here, but not sure what
		//printf("Buffer handed from CPU %d to CPU %d.\n", entry->alloc_cpu, cpu);
	}

	if (cache->tail)
		cache->tail->next = entry;
	else
		cache->head = entry;
	cache->tail = entry;
}

static void init_conns(void)
{
	struct rlimit rl;

	int fd = dup(1);
	if (fd < 0) {
		perror("dup():");
		exit(-1);
	}

	/* Calculate the biggest possible fd we will see */
	max_fd = fd + MAX_CONNS + 10;
	if (getrlimit(RLIMIT_NOFILE, &rl) == 0) {
		max_fd = rl.rlim_max;
	}

	close(fd);

	if ((conns = calloc(max_fd, sizeof(struct connection *))) == NULL) {
		perror("calloc(): ");
		exit(-1);
	}
}

struct connection *new_conn(int fd)
{
	struct connection *conn = (struct connection *)cache_alloc(conn_cache, me->index);
	if (!conn) {
		perror("calloc()");
		return conn;
	}

	conn->fd = fd;
	return conn;
}

void on_read(void *arg)
{
	struct connection *conn = (struct connection*)arg;
	ssize_t ret;
	size_t cursor;

	if (conn->fd < 0)
		return;

	if (!conn->buffer) {
		conn->buffer = cache_alloc(msg_cache, me->index);
		if (!conn->buffer) {
			perror("Malloc on read");
			exit(1);
		}
	}

	cursor = conn->cursor;

	do {
		if ((ret = read(conn->fd, &(conn->buffer[cursor]), msg_size - cursor)) <= 0) {
			if (ret == 0) {
				// Note that this is required because epoll adds EPOLLHUP to any event subscription
				// so we might be woken up and try to read because of a hang up event. This function
				// call is a noop for upcalls.
				close_from_io(conn);
				return;
			}

			if (cursor && cursor < msg_size) {
				// Nothing to do here, just return. We need to wait for the remainder of the message
				conn->cursor = cursor;
			}
			return;

		}
		cursor += ret;
	} while (cursor < msg_size);

	conn->cursor = cursor = 0;
	conn->state = WRITING;

	do {
		if ((ret = write(conn->fd, &(conn->buffer[cursor]), msg_size - cursor)) <= 0) {
			if (ret == 0) {
				close_from_io(conn);
				return;
			}

			if (errno == EAGAIN || errno == EWOULDBLOCK) {
				continue;
			}
			perror("write to client");
			continue;
		}
		cursor += ret;
	} while (cursor < msg_size);
	conn->state = READING;
}

void write_perf_stats(void)
{
	uint64_t perf_values[TOTAL_EVENTS] = {0};
	struct read_format perf_stats;
	struct worker_thread *t;
	
	for (size_t i = 0; i < nr_cpus; i++)
		ioctl(threads[i]->perf_fds[0], PERF_EVENT_IOC_DISABLE, 0);

	for (size_t i = 0; i < nr_cpus; i++) {
		t = threads[i];
		if (read(t->perf_fds[0], &perf_stats, sizeof(struct read_format)) <= 0) {
			perror("perf event read:");
			exit(1);
		}

		for (int i = 0; i < perf_stats.nr; i++) {
			for (int j = 0; j < TOTAL_EVENTS; j++) {
				if (perf_stats.values[i].id == t->perf_ids[j]) {
					perf_values[j] = perf_stats.values[i].value;
					break;
				}
			}
		}

		// We use TOTAL_EVENTS + 2 because we emit two per thread counters here as well (accept and connection count)
		snprintf(t->perf_line, 23 + 21 * (TOTAL_EVENTS + 2), "%d\t%lu\t%lu\t%lu\t%lu\t%lu\t%lu\t%lu\n",
				t->index, perf_values[0], perf_values[1], perf_values[2],
				perf_values[3], perf_values[4], t->accept_count, t->conn_count);
	}
}

static inline int open_perf(struct perf_event_attr *attr, pid_t pid, int cpu, int group_fd, unsigned long flags)
{
	return syscall(SYS_perf_event_open, attr, pid, cpu, group_fd, flags);
}

static void config_event(struct perf_event_attr *pe, uint32_t type, uint64_t config, int disabled)
{
	pe->type = type;
	pe->size = sizeof(struct perf_event_attr);
	pe->config = config;
	pe->disabled = !!(disabled);
	pe->read_format = PERF_FORMAT_GROUP | PERF_FORMAT_ID;
}

void setup_perf(int *fds, int *ids, int cpu)
{
	struct perf_event_attr pe[TOTAL_EVENTS];

	memset(pe, 0, sizeof(struct perf_event_attr) * TOTAL_EVENTS);
	config_event(&pe[0], PERF_TYPE_HARDWARE, PERF_COUNT_HW_CPU_CYCLES, 1);
	config_event(&pe[1], PERF_TYPE_HARDWARE, PERF_COUNT_HW_INSTRUCTIONS, 0);
	config_event(&pe[2], PERF_TYPE_HARDWARE, PERF_COUNT_HW_CACHE_REFERENCES, 0);
	config_event(&pe[3], PERF_TYPE_HARDWARE, PERF_COUNT_HW_CACHE_MISSES, 0);
	config_event(&pe[4], PERF_TYPE_HW_CACHE,
			PERF_COUNT_HW_CACHE_L1I |
			(PERF_COUNT_HW_CACHE_OP_READ << 8) |
			(PERF_COUNT_HW_CACHE_RESULT_MISS << 16), 0);

	fds[0] = open_perf(&pe[0], 0, cpu, -1, 0);
	if (fds[0] < 0) {
		perror("perf_event_open:");
		exit(1);
	}
	ioctl(fds[0], PERF_EVENT_IOC_ID, &ids[0]);
	for (int i = 1; i < TOTAL_EVENTS; i++) {
		fds[i] = open_perf(&pe[i], 0, cpu, fds[0], 0);
		if (fds[i] < 0) {
			perror("perf_event_open:");
			exit(1);
		}
		ioctl(fds[i], PERF_EVENT_IOC_ID, &ids[i]);
	}
}

void on_stats(int stats_fd, int epoll_fd)
{
	char header[] = "CPU\tCYCLES\tINSTRUCTIONS\tCACHE_READS\tCACHE_MISSES\tICACHE_MISSES\tACCEPT_COUNT\tCONNECTION_COUNT\n";
	uint64_t size = 0;
	size_t cursor = 0;
	struct epoll_event evt;
	int out;
	int index;

	out = accept(stats_fd, NULL, NULL);
	if (out < 0) {
		perror("stats accept:");
		exit(1);
	}

	evt.events = EPOLLERR | EPOLLHUP;
	evt.data.fd = out;
	epoll_ctl(epoll_fd, EPOLL_CTL_ADD, out, &evt);
	shutdown(out, SHUT_RD);

	init_count = 0;

	write_perf_stats();

	size = strlen(header);
	for (int i = 0; i < nr_cpus; i++)
		size += strlen(threads[i]->perf_line);

	write(out, &size, sizeof(size));

	size = strlen(header);
	do {
		index = write(out, &header[cursor], size - cursor);
		if (index <= 0) {
			perror("perf write:");
			close(out);
			exit(1);
		}
		cursor += index;
	} while (cursor < size);

	for (int i = 0; i < nr_cpus; i++) {
		size = strlen(threads[i]->perf_line);
		cursor = 0;
		do {
			index = write(out, &threads[i]->perf_line[cursor], size - cursor);
			if (index <= 0) {
				perror("perf write:");
				close(out);
				exit(1);
			}
			cursor += index;
		} while (cursor < size);
	}
	shutdown(out, SHUT_WR);
}

#define ERR_BUF_SZ 8192
void on_error(int error_fd, int epoll_fd)
{
	uint64_t size = 0;
	size_t cursor = 0;
	struct epoll_event evt;
	char output[ERR_BUF_SZ] = {0};
	int ret;
	int dangling = 0;
	struct connection *conn;
	int out;

	out = accept(error_fd, NULL, NULL);
	if (out < 0) {
		perror("stats accept:");
		return;
	}

	evt.events = EPOLLERR | EPOLLHUP;
	evt.data.fd = out;
	shutdown(out, SHUT_RD);
	
	for (int i = 3; i < max_fd; i++) {
		conn = conns[i];
		if (!conn)
			continue;

		if (!dangling) {
			dangling = 1;
			cursor = snprintf(output, ERR_BUF_SZ, "FD\tSTATE\tCURSOR\n");
		}

		ret = snprintf(&output[cursor], ERR_BUF_SZ - cursor, "%d\t%s\t%lu\n", i, err_str[conn->state], conn->cursor);
		cursor += ret;
		if (cursor > ERR_BUF_SZ - 32)
			// We're out of buffer space, there is enough info to diagnose some problem
			break;
	}

	if (!dangling) {
		close(out);
		return;
	}

	epoll_ctl(epoll_fd, EPOLL_CTL_ADD, out, &evt);
	size = cursor + 1;
	cursor = 0;
	write(out, &size, sizeof(uint64_t));
	do {
		ret = write(out, &output[cursor], size - cursor);
		if (ret <= 0) {
			printf("Error writing to error_fd connection, exitting\n");
			exit(1);
		}
		cursor += ret;
	} while (cursor < size);
	shutdown(out, SHUT_WR);
}

/*
 * The coordinator thread will fill this information in and then the workers
 * will all use it to setup their local listen sockets.
 */
struct addrinfo *res;

extern int errno;
extern int optind;
extern char *optarg;

int main(int argc, char **argv)
{
	int status;
	struct addrinfo hints;
	int ret = 0;
	int index = 0;
	unsigned int port, stats, error;
	int stats_fd, error_fd;
	int epoll_fd;
	char prt_str[6], stats_str[6], error_str[6];
	char addr_str[INET6_ADDRSTRLEN];
	struct addrinfo *statsaddr, *erroraddr;
	struct epoll_event evt;

	char opt_str[] = "hp:m:s:e:";
	struct option long_opts[] = {
		{"help",	no_argument, NULL, 'h'},
		{"port",	required_argument, NULL, 'p'},
		{"msg-size",	required_argument, NULL, 'm'},
		{"stats-port",	required_argument, NULL, 's'},
		{"error-port",	required_argument, NULL, 'e'},
		{0}
	};

	port = DEFAULT_PORT;
	stats = DEFAULT_STATS;
	error = DEFAULT_ERROR;
	msg_size = PAYLOAD_SIZE;

	while ((ret = getopt_long(argc, argv, opt_str, long_opts, &index)) != -1) {
		switch (ret) {
		case '?':
		case 'h':
			usage();
			return 0;

		case 'p':
			port = (int)strtol(optarg, NULL, 10);
			break;

		case 'm':
			msg_size = strtol(optarg, NULL, 10);
			break;

		case 's':
			stats = strtol(optarg, NULL, 10);
			break;

		case 'e':
			error = strtol(optarg, NULL, 10);
			break;

		default:
			usage();
			return -1;
		}
	}
	ret = -1;

	memset(&hints, 0, sizeof(hints));
	hints.ai_family = AF_INET;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_flags = AI_PASSIVE | AI_NUMERICHOST | AI_NUMERICSERV;

	if (port > 65535) {
		fprintf(stderr, "Invalid port number\n");
		goto out_ret;
	}

	if (stats > 65535) {
		fprintf(stderr, "Invalid stats port number\n");
		goto out_ret;
	}

	if (error > 65535) {
		fprintf(stderr, "Invalid error port number\n");
		goto out_ret;
	}

	snprintf(prt_str, 6, "%u", port);
	snprintf(stats_str, 6, "%u", stats);
	snprintf(error_str, 6, "%u", error);

	if ((status = getaddrinfo(NULL, prt_str, &hints, &res))) {
		fprintf(stderr, "getaddrinfo failed: %s\n", gai_strerror(status));
		goto out_ret;
	}

	if ((status = getaddrinfo(NULL, stats_str, &hints, &statsaddr))) {
		fprintf(stderr, "getaddrinfo failed: %s\n", gai_strerror(status));
		goto out_ret;
	}

	if ((status = getaddrinfo(NULL, error_str, &hints, &erroraddr))) {
		fprintf(stderr, "getaddrinfo failed: %s\n", gai_strerror(status));
		goto out_ret;
	}

	stats_fd = socket(statsaddr->ai_family, statsaddr->ai_socktype, statsaddr->ai_protocol);
	if (stats_fd < 0) {
		perror("stats socket:");
		goto out_ret;
	}

	error_fd = socket(erroraddr->ai_family, erroraddr->ai_socktype, erroraddr->ai_protocol);
	if (error_fd < 0) {
		perror("error socket:");
		goto out_ret;
	}

	if (bind(stats_fd, statsaddr->ai_addr, statsaddr->ai_addrlen)) {
		perror("stats bind:");
		goto out_ret;
	}

	if (bind(error_fd, erroraddr->ai_addr, erroraddr->ai_addrlen)) {
		perror("error bind:");
		goto out_ret;
	}

	if (listen(stats_fd, BACKLOG)) {
		perror("stats listen");
		goto out_ret;
	}

	if (listen(error_fd, BACKLOG)) {
		perror("error listen");
		goto out_ret;
	}

	epoll_fd = epoll_create(1);
	if (epoll_fd < 0) {
		perror("stats epoll_create:");
		goto out_ret;
	}

	evt.events = EPOLLIN;
	evt.data.fd = stats_fd;
	if (epoll_ctl(epoll_fd, EPOLL_CTL_ADD, stats_fd, &evt)) {
		perror("stats epoll_ctl:");
		goto out_ret;
	}

	evt.data.fd = error_fd;
	if (epoll_ctl(epoll_fd, EPOLL_CTL_ADD, error_fd, &evt)) {
		perror("error epoll_ctl:");
		goto out_ret;
	}

	nr_cpus = sysconf(_SC_NPROCESSORS_ONLN);

	printf("Setting up connection structures\n");

	init_conns();

	printf("Starting %lu worker threads\n", nr_cpus);

	threads = calloc(nr_cpus, sizeof(struct worker_thread*));
	if (!threads) {
		perror("calloc():");
		exit(1);
	}

	init_threads(nr_cpus);

	if (!inet_ntop(AF_INET, &(((struct sockaddr_in*)res->ai_addr)->sin_addr),
				addr_str, INET6_ADDRSTRLEN)) {
		perror("inet_ntop():");
		exit(1);
	}

	printf("Listening on %s:%s\n", addr_str, prt_str);

	printf("Started %lu threads\n!! Server is ready. !!\n", nr_cpus);

	evt.events = 0;
	evt.data.fd = 0;
	while(epoll_wait(epoll_fd, &evt, 1, -1) > 0) {
		if (evt.events & (EPOLLERR | EPOLLHUP)) {
			if (evt.data.fd == stats_fd) {
				printf("Epoll error on stats port, exitting.\n");
				goto out_ret;
			} else if (evt.data.fd == error_fd) {
				printf("Epoll error on error port, exitting.\n");
				goto out_ret;
			}
			epoll_ctl(epoll_fd, EPOLL_CTL_DEL, evt.data.fd, NULL);
			close(evt.data.fd);
		} else if (evt.data.fd == stats_fd) {
			on_stats(stats_fd, epoll_fd);
		} else if (evt.data.fd == error_fd) {
			on_error(error_fd, epoll_fd);
		}
		memset(&evt, 0, sizeof(evt));
	}
	perror("control epoll_wait:");

out_ret:
	return ret;
}

