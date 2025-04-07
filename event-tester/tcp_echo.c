
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

#include <sys/types.h>
#include <sys/socket.h>
#include <sys/resource.h>
#include <sys/epoll.h>
#include <sys/eventfd.h>
#include <sys/ioctl.h>
#include<sys/syscall.h>

#include <arpa/inet.h>

#include <linux/perf_event.h>

#ifndef DEFAULT_PORT
#define DEFAULT_PORT 7272
#endif

#ifndef DEFAULT_STATS
#define DEFAULT_STATS 8383
#endif

#ifndef PAYLOAD_SIZE
#define PAYLOAD_SIZE 32
#endif

#ifndef BACKLOG
#define BACKLOG 20
#endif

#ifndef MAX_CONNS
#define MAX_CONNS 1024
#endif

#define TOTAL_EVENTS 5
#define CONN_EVENT (uint64_t)(1)
#define CONN_MASK (uint64_t)(0xFFFFFFFF)
#define STATS_EVENT (CONN_EVENT << 32)
#define STATS_MASK (CONN_MASK << 32)

#define OPTION(opts, text)	fprintf(stderr, " %-25s  %s\n", opts, text)
#define CONT(text) 		fprintf(stderr, " %-25s  %s\n", "", text)

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

struct connection {
	int fd;
	size_t cursor;
	unsigned char *buffer;
};

struct waiting_conn {
	int fd;
	struct waiting_conn *next;
};

struct conn_queue {
	pthread_mutex_t lock;
	struct waiting_conn *list;
};

struct worker_thread {
	pthread_t thread_id;
	struct conn_queue incoming;
	int event_fd;
	int epoll_fd;
	int index;
	int perf_fds[TOTAL_EVENTS];
	int perf_ids[TOTAL_EVENTS];
	char perf_line[23 + 21 * TOTAL_EVENTS];
};
static struct worker_thread *threads;

struct read_format {
	uint64_t nr;
	struct {
		uint64_t value;
		uint64_t id;
	} values[TOTAL_EVENTS];
};

/*
 * Number of worker threads that have finished setting themselves up.
 */
static size_t init_count;
static pthread_mutex_t worker_hang_lock = PTHREAD_MUTEX_INITIALIZER;
static pthread_mutex_t init_lock = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t init_cond = PTHREAD_COND_INITIALIZER;

static struct connection **conns;

static size_t msg_size;

static size_t nr_cpus;

#define SUCCESS 0
#define CLOSED  1

static void init_conns(void)
{
	struct rlimit rl;

	int fd = dup(1);
	if (fd < 0) {
		perror("dup():");
		exit(-1);
	}

	/* Calculate the biggest possible fd we will see */
	int max_fd = fd + MAX_CONNS + 10;
	if (getrlimit(RLIMIT_NOFILE, &rl) == 0) {
		max_fd = rl.rlim_max;
	}

	close(fd);

	if ((conns = calloc(max_fd, sizeof(struct connection *))) == NULL) {
		perror("calloc(): ");
		exit(-1);
	}
}

static struct connection *new_conn(int fd)
{
	struct connection *conn = calloc(1, sizeof(struct connection));
	if (!conn) {
		perror("calloc()");
		return conn;
	}

	conn->fd = fd;
	return conn;
}

static int on_read(struct connection *conn)
{
	ssize_t ret;
	size_t cursor;

	if (!conn->buffer) {
		conn->buffer = (unsigned char *)malloc(msg_size);
		if (!conn->buffer) {
			perror("Malloc on read");
			exit(1);
		}
	}

		cursor = conn->cursor;

	do {
		if ((ret = read(conn->fd, &(conn->buffer[cursor]), msg_size - cursor)) <= 0) {
			if (ret == 0) {
				return CLOSED;
			} else if (errno == EAGAIN || errno == EWOULDBLOCK) {
				// Nothing to do here, just return. We need to wait for thre remainder of the message
				conn->cursor = cursor;
				return SUCCESS;
			}
			// Any other problem is a real one
			perror("read from client:");
			exit(1);
		}
		cursor += ret;
	} while (cursor < msg_size);

	conn->cursor = cursor = 0;

	do {
		if ((ret = write(conn->fd, &(conn->buffer[cursor]), msg_size - cursor)) <= 0) {
			if (ret == 0) {
				return CLOSED;
			} else if (errno == EAGAIN || errno == EWOULDBLOCK) {
				continue;
			}
			perror("write to client:");
			exit(1);
		}
		cursor += ret;
	} while (cursor < msg_size);

	return SUCCESS;
}

static void on_accept(int listen_sock)
{
	int cpu;
	uint64_t u = 1;
	struct worker_thread *owner;
	struct waiting_conn *newbie;
	socklen_t size = sizeof(cpu);

	while (1) {
		newbie = malloc(sizeof(struct waiting_conn));

		if (!newbie) {
			perror("malloc:");
			exit(1);
		}

		if ((newbie->fd = accept4(listen_sock, NULL, NULL, SOCK_NONBLOCK)) < 0) {
			if (errno == EAGAIN || errno == EWOULDBLOCK) {
				free(newbie);
				return;
			}
			perror("accept4:");
			exit(1);
		}

		if (getsockopt(newbie->fd, SOL_SOCKET, SO_INCOMING_CPU, &cpu, &size) < 0) {
			perror("getsockopt:");
			exit(1);
		}

		owner = &(threads[cpu]);
		pthread_mutex_lock(&owner->incoming.lock);
		newbie->next = owner->incoming.list;
		owner->incoming.list = newbie;
		pthread_mutex_unlock(&owner->incoming.lock);

		if (write(owner->event_fd, &u, sizeof(u)) != sizeof(u)) {
			perror("write to event_fd:");
			exit(1);
		}
	}
}

static void handle_new_conns(struct worker_thread *me)
{
	struct waiting_conn *newbie;
	struct connection *conn;
	struct epoll_event cfg;
	cfg.events = EPOLLIN;

	pthread_mutex_lock(&me->incoming.lock);
	while (me->incoming.list != NULL) {
		newbie = me->incoming.list;
		me->incoming.list = newbie->next;
		pthread_mutex_unlock(&me->incoming.lock);

		conns[newbie->fd] = conn = new_conn(newbie->fd);
		if (!conn) {
			perror("calloc new connection:");
			exit(1);
		}

		free(newbie);

		cfg.data.fd = conn->fd;
		if (epoll_ctl(me->epoll_fd, EPOLL_CTL_ADD, conn->fd, &cfg)) {
			perror("epoll_ctl client fd:");
			exit(1);
		}
		pthread_mutex_lock(&me->incoming.lock);
	}
	pthread_mutex_unlock(&me->incoming.lock);
}

static void write_perf_stats(struct worker_thread *me)
{
	uint64_t perf_values[TOTAL_EVENTS] = {0};
	struct read_format perf_stats;

	ioctl(me->perf_fds[0], PERF_EVENT_IOC_DISABLE, 0);

	if (read(me->perf_fds[0], &perf_stats, sizeof(struct read_format)) <= 0) {
		perror("perf event read:");
		exit(1);
	}

	for (int i = 0; i < perf_stats.nr; i++) {
		for (int j = 0; j < TOTAL_EVENTS; j++) {
			if (perf_stats.values[i].id == me->perf_ids[j]) {
				perf_values[j] = perf_stats.values[i].value;
				break;
			}
		}
	}

	snprintf(me->perf_line, 23 + 21 * TOTAL_EVENTS, "%d\t%lu\t%lu\t%lu\t%lu\t%lu\n",
			me->index, perf_values[0], perf_values[1], perf_values[2],
			perf_values[3], perf_values[4]);

	pthread_mutex_lock(&init_lock);
	init_count++;
	pthread_cond_signal(&init_cond);
	pthread_mutex_unlock(&init_lock);
}

static void on_event(struct worker_thread *me)
{
	uint64_t cause;

	if (read(me->event_fd, &cause, sizeof(cause)) != sizeof(cause)) {
		if (errno == EAGAIN || errno == EWOULDBLOCK) {
			return;
		}
		perror("read from event fd:");
		exit(1);
	}

	if (cause & CONN_MASK)
		handle_new_conns(me);

	if (cause & STATS_MASK)
		write_perf_stats(me);
}

static void on_close(struct worker_thread *me, int closed_fd)
{
	struct connection *conn = conns[closed_fd];

	conns[closed_fd] = NULL;

	if (epoll_ctl(me->epoll_fd, EPOLL_CTL_DEL, closed_fd, NULL)) {
		perror("epoll_ctl remove closed:");
		exit(1);
	}

	close(closed_fd);

	free(conn);
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

static void setup_perf(int *fds, int *ids, int cpu)
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

/*
 * The coordinator thread will fill this information in and then the workers
 * will all use it to setup their local listen sockets.
 */
static struct addrinfo *res;

static void *worker_func(void *arg)
{
	struct worker_thread *me = (struct worker_thread *)arg;
	struct epoll_event cfg;
	int epoll_fd;
	int ret;
	int listen_sock;
	int i = 1;
	struct epoll_event events[BACKLOG];

	memset(events, 0, sizeof(struct epoll_event) * BACKLOG);

	// Do our setup
	listen_sock = socket(res->ai_family, res->ai_socktype | SOCK_NONBLOCK, res->ai_protocol);
	if (listen_sock < 0) {
		perror("socket():");
		exit(1);
	}

	if (setsockopt(listen_sock, SOL_SOCKET, SO_REUSEPORT, &i, sizeof(i))) {
		perror("setsockopt():");
		exit(1);
	}

	if (setsockopt(listen_sock, SOL_SOCKET, SO_REUSEADDR, &i, sizeof(i))) {
		perror("setsockopt():");
		exit(1);
	}

	if (bind(listen_sock, res->ai_addr, res->ai_addrlen)) {
		perror("bind():");
		exit(1);
	}

	if (listen(listen_sock, BACKLOG)) {
		perror("listen():");
		exit(1);
	}

	epoll_fd = epoll_create(1);
	if (epoll_fd < 0) {
		perror("epoll_create1():");
		exit(1);
	}
	me->epoll_fd = epoll_fd;

	cfg.events = EPOLLIN;
	cfg.data.fd = me->event_fd;
	if (epoll_ctl(epoll_fd, EPOLL_CTL_ADD, me->event_fd, &cfg)) {
		perror("epoll_ctl event_fd:");
		exit(1);
	}

	cfg.data.fd = listen_sock;
	if (epoll_ctl(epoll_fd, EPOLL_CTL_ADD, listen_sock, &cfg)) {
		perror("epoll_ctl listen_sock:");
		exit(1);
	}
	
	setup_perf(me->perf_fds, me->perf_ids, me->index);

	// Notify that setup is done
	pthread_mutex_lock(&init_lock);
	init_count++;
	pthread_cond_signal(&init_cond);
	pthread_mutex_unlock(&init_lock);
	pthread_mutex_lock(&worker_hang_lock);
	pthread_mutex_unlock(&worker_hang_lock);

	ioctl(me->perf_fds[0], PERF_EVENT_IOC_RESET, 0);
	ioctl(me->perf_fds[0], PERF_EVENT_IOC_ENABLE, 0);

	/* Worker Event Loop */
	while((ret = epoll_wait(epoll_fd, events, BACKLOG, -1)) > 0) {
		for (i = 0; i < ret; i++) {
			int closed;
			if ((events[i].events & EPOLLERR) || (events[i].events & EPOLLHUP)) {
				// Not much to do but clean up this connection and close the fd
				if (events[i].data.fd == listen_sock || events[i].data.fd == me->event_fd) {
					// Yikes
					printf("Error on listen_sock or event_fd, exitting\n");
					exit(1);
				}
				on_close(me, events[i].data.fd);
			}

			if (events[i].data.fd == listen_sock) {
				on_accept(listen_sock);
			} else if (events[i].data.fd == me->event_fd) {
				on_event(me);
			} else {
				closed = on_read(conns[events[i].data.fd]);
				if (closed == CLOSED)
					on_close(me, events[i].data.fd);
			}
		}
		memset(events, 0, sizeof(struct epoll_event) * BACKLOG);
	}
	// If we get here, epoll_wait returned an error
	perror("epoll_wait():");
	exit(1);
}

/**
 * TODO MASSIVE HAX
 */
static void *dummy_worker(void *arg)
{
	sleep(900000000);
	return NULL;
}

static void init_threads(void)
{
	pthread_attr_t attrs;
	pthread_t dummy;
	cpu_set_t *worker_cpu;

	threads = calloc(nr_cpus, sizeof(struct worker_thread));
	if (threads == NULL) {
		perror("calloc():");
		exit(1);
	}

	worker_cpu = CPU_ALLOC(nr_cpus);

	if (pthread_attr_init(&attrs)) {
		perror("Failed to initialize pthread_attrs");
		exit(1);
	}

	if (pthread_attr_setdetachstate(&attrs, PTHREAD_CREATE_DETACHED)) {
		perror("Cannot set detatched state attr");
		exit(1);
	}

	pthread_mutex_lock(&worker_hang_lock);

	/*
	 * TODO MASSIVE HAX
	 */
	pthread_create(&dummy, &attrs, dummy_worker, NULL);

	for (int i = 0; i < nr_cpus; i++) {
		threads[i].event_fd = eventfd(0, EFD_NONBLOCK);
		if (threads[i].event_fd < 0) {
			perror("eventfd():");
			exit(1);
		}

		threads[i].index = i;

		pthread_mutex_init(&threads[i].incoming.lock, NULL);

		CPU_ZERO_S(CPU_ALLOC_SIZE(nr_cpus), worker_cpu);
		CPU_SET_S(i, CPU_ALLOC_SIZE(nr_cpus), worker_cpu);
		if (pthread_attr_setaffinity_np(&attrs, CPU_ALLOC_SIZE(nr_cpus), worker_cpu)) {
			perror("Cannot set affinity in attr");
			exit(1);
		}

		if (pthread_create(&dummy, &attrs, worker_func, &threads[i])) {
			perror("pthread_create():");
			exit(1);
		}
	}

	CPU_FREE(worker_cpu);

	pthread_mutex_lock(&init_lock);
	while (init_count < nr_cpus) {
		pthread_cond_wait(&init_cond, &init_lock);
	}
	pthread_mutex_unlock(&init_lock);
	pthread_mutex_unlock(&worker_hang_lock);
}

extern int errno;
extern int optind;
extern char *optarg;

int main(int argc, char **argv)
{
	int status;
	struct addrinfo hints;
	int ret = 0;
	int index = 0;
	unsigned int port, stats;
	int stats_fd;
	int epoll_fd;
	int out;
	char prt_str[6], stats_str[6];
	char addr_str[INET6_ADDRSTRLEN];
	struct addrinfo *statsaddr;
	struct epoll_event evt;

	char opt_str[] = "hp:m:s:";
	struct option long_opts[] = {
		{"help",	no_argument, NULL, 'h'},
		{"port",	required_argument, NULL, 'p'},
		{"msg-size",	required_argument, NULL, 'm'},
		{"stats-port",	required_argument, NULL, 's'},
		{0}
	};

	port = DEFAULT_PORT;
	stats = DEFAULT_STATS;
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

	snprintf(prt_str, 6, "%u", port);
	snprintf(stats_str, 6, "%u", stats);

	if ((status = getaddrinfo(NULL, prt_str, &hints, &res))) {
		fprintf(stderr, "getaddrinfo failed: %s\n", gai_strerror(status));
		goto out_ret;
	}

	if ((status = getaddrinfo(NULL, stats_str, &hints, &statsaddr))) {
		fprintf(stderr, "getaddrinfo failed: %s\n", gai_strerror(status));
		goto out_ret;
	}

	stats_fd = socket(statsaddr->ai_family, statsaddr->ai_socktype, statsaddr->ai_protocol);
	if (stats_fd < 0) {
		perror("stats socket:");
		goto out_ret;
	}

	if (bind(stats_fd, statsaddr->ai_addr, statsaddr->ai_addrlen)) {
		perror("stats bind:");
		goto out_ret;
	}

	if (listen(stats_fd, BACKLOG)) {
		perror("stats listen");
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

	nr_cpus = sysconf(_SC_NPROCESSORS_ONLN);

	printf("Setting up connection structures\n");

	init_conns();

	printf("Starting %lu worker threads\n", nr_cpus);

	init_threads();

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
			}
			epoll_ctl(epoll_fd, EPOLL_CTL_DEL, evt.data.fd, NULL);
			close(evt.data.fd);
		} else if (evt.data.fd == stats_fd) {
			char header[] = "CPU\tCYCLES\tINSTRUCTIONS\tCACHE_READS\tCACHE_MISSES\tICACHE_MISSES\n";
			uint64_t ev = STATS_EVENT;
			uint64_t size = 0;
			size_t cursor = 0;

			out = accept(stats_fd, NULL, NULL);
			if (out < 0) {
				perror("stats accept:");
				goto out_ret;
			}

			evt.events = EPOLLERR | EPOLLHUP;
			evt.data.fd = out;
			epoll_ctl(epoll_fd, EPOLL_CTL_ADD, out, &evt);
			shutdown(out, SHUT_RD);

			init_count = 0;

			for (int i = 0; i < nr_cpus; i++)
				write(threads[i].event_fd, &ev, sizeof(ev));

			pthread_mutex_lock(&init_lock);
			while (init_count < nr_cpus)
				pthread_cond_wait(&init_cond, &init_lock);
			pthread_mutex_unlock(&init_lock);

			size = strlen(header);
			for (int i = 0; i < nr_cpus; i++)
				size += strlen(threads[i].perf_line);

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
				size = strlen(threads[i].perf_line);
				cursor = 0;
				do {
					index = write(out, &threads[i].perf_line[cursor], size - cursor);
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
		memset(&evt, 0, sizeof(evt));
	}
	perror("stats epoll_wait:");

out_ret:
	return ret;
}

