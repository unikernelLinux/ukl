
#define _GNU_SOURCE
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/resource.h>
#include <sys/epoll.h>
#include <sys/eventfd.h>

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <netdb.h>
#include <unistd.h>
#include <getopt.h>
#include <errno.h>
#include <pthread.h>
#include <poll.h>
#include <fcntl.h>
#include <stdint.h>

#include <arpa/inet.h>

#define UKL_USER
#include "tsc_logger.h"
#undef UKL_USER

#include "echo_defs.h"

#ifndef CLIENTS_PER_THREAD
#define CLIENTS_PER_THREAD 1
#endif

#ifndef BATCH_SIZE
#define BATCH_SIZE 1
#endif

#ifndef TXN_COUNT
#define TXN_COUNT 1000
#endif

#ifndef EVENT_BACKLOG
#define EVENT_BACKLOG 20
#endif

#ifndef OUT_FILE
#define OUT_FILE "timers.tsv"
#endif

#ifndef PERF_FILE
#define PERF_FILE "perf-stats.tsv"
#endif

#define CONNECT_START		0
#define CONNECT_DONE		1
#define SEND_START		2
#define SEND_DONE		3
#define RECV_START		4
#define RECV_DONE		5

static size_t msg_size;
static size_t nr_cpus;
static size_t nr_threads;
static size_t batch_size;
static size_t transaction_count;
static size_t clients_per_thread;
static size_t hdr_size;
static size_t entry_size;
static struct worker *threads;

static size_t init_count;
static pthread_mutex_t worker_hang_lock = PTHREAD_MUTEX_INITIALIZER;
static pthread_mutex_t init_lock = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t init_cond = PTHREAD_COND_INITIALIZER;

enum state {
	INIT,
	CONNECTING,
	NEW,
	READY,
	SENT,
	DONE
};

struct client {
	int sock;
	uint8_t *buf;
	size_t cursor;
	enum state state;
	size_t buf_size;
	size_t txn_remaining;
	size_t batch_remaining;
};

struct worker {
	pthread_t id;
	uint64_t index;
	int epoll_fd;
	int dying;
	struct TscLog *log;
	struct client *clients;
};

#define OPTION(opts, text)      fprintf(stderr, " %-30s  %s\n", opts, text)
#define CONT(text)              fprintf(stderr, " %-30s  %s\n", "", text)

static void usage(void)
{
        fprintf(stderr, "tcp_client [options] host-ip tsc-khz\n");
	fprintf(stderr, "host-ip is required and is an IPv4 dotted quad\n");
	fprintf(stderr, "tsc-khz is required and is the TSC frequency for this machine in KHz\n");
        fprintf(stderr, "options:\n");
        OPTION("--help,-h", "Print this message");
        OPTION("--port,-p [port]", "Use the requested port instead of 1072");
        OPTION("--stats-port,-s [port]", "Use the requested port to fetch perf stats instead of 1073");
        OPTION("--msg-size,-m [size]", "Use the requested message size instead of 32");
	OPTION("--batch-size,-b [size]", "Send [size] transactions before reconnecting. Default is 1");
	OPTION("--txn-count,-t [count]", "Have each client send [count] requests. Default is 1000");
	OPTION("--clients,-c [count]", "Start [count] clients per thread. Default is 1");
	OPTION("--thread-count,-T [count]", "Use [count] threads. Default is 1 per online CPU");
	CONT("The client will start at max 1 thread per online CPU.");
	OPTION("--output,-o [name]", "Use [name] for the timer tab separated value file.");
	CONT("Default is timers.tsv");
	OPTION("--perf-stats,-S [name]", "Use [name] for the perf stats tab seperated value file.");
	CONT("Default is perf-stats.tsv");
}

extern int errno;
extern int optind;
extern char *optarg;

static struct addrinfo *server;

static void set_dying(void)
{
	size_t i;
	for (i = 0; i < nr_threads; i++)
		threads[i].dying = 1;
}

static void client_send(int sock, uint8_t *buf, size_t len)
{
	ssize_t ret;
	size_t cursor = 0;

	do {
		ret = send(sock, &(buf[cursor]), len - cursor, 0);
		if (ret < 0) {
			perror("client send():");
			set_dying();
			return;
		}

		cursor += ret;
	} while (cursor < len);

}

static size_t client_recv(int sock, uint8_t *buf, size_t len)
{
	ssize_t ret;
	size_t cursor = 0;

	do {
		ret = recv(sock, &(buf[cursor]), len - cursor, 0);
		if (ret < 0) {
			if (errno == EAGAIN || errno == EWOULDBLOCK) {
				// We need to come back when more data arrives
				return cursor;
			}

			perror("client recv():");
			set_dying();
			return 0;
		}

		cursor += ret;
	} while (cursor < len);

	return cursor;
}

static enum state do_connect(int sock, const struct sockaddr *addr, socklen_t len)
{
	if (connect(sock, addr, len) < 0) {
		if (errno != EINPROGRESS) {
			perror("client connect():");
			set_dying();
			return DONE;
		}
		return CONNECTING;
	}

	return READY;
}

/*
 * This function is called when we can transition a client to a new state.
 * It will recursively call itself until the client is in a state where we
 * need to wait on input from epoll to proceed further.
 */
static int do_state_transition(struct worker *me, uint32_t j)
{
	struct client *clients = me->clients;
	int epoll_fd = me->epoll_fd;
	int so_err;
	int optval = 1;
	socklen_t len = sizeof(so_err);
	struct epoll_event config;

	switch (clients[j].state) {
	case INIT:
		/*
		 * The specified client does not have a socket, set it up and try to connect.
		 *
		 * Valid state transitions from here are CONNECTING or READY.
		 */
		clients[j].batch_remaining = batch_size;

		clients[j].sock = socket(AF_INET, SOCK_STREAM | SOCK_NONBLOCK, 0);
		if (clients[j].sock < 0) {
			perror("socket():");
			set_dying();
			return 0;
		}
		if (setsockopt(clients[j].sock, SOL_SOCKET, SO_REUSEPORT, &optval, sizeof(optval)) < 0) {
			perror("setsockopt(SO_REUSEPORT):");
			set_dying();
			return 0;
		}
		if (setsockopt(clients[j].sock, SOL_SOCKET, SO_REUSEADDR, &optval, sizeof(optval)) < 0) {
			perror("setsockopt(SO_REUSEPORT):");
			set_dying();
			return 0;
		}

		tsclog_4(me->log, me->index, j, transaction_count - clients[j].txn_remaining, CONNECT_START);
		clients[j].state = do_connect(clients[j].sock, server->ai_addr, server->ai_addrlen);
		if (clients[j].state != READY) {
			// INIT -> CONNECTING
			config.events = EPOLLOUT | EPOLLONESHOT;
			config.data.u32 = j;
			if (epoll_ctl(epoll_fd, EPOLL_CTL_ADD, clients[j].sock, &config) < 0) {
				perror("epoll_ctl add client:");
				set_dying();
				return 0;
			}
			return 0;
		}

		// INIT -> READY
		tsclog_4(me->log, me->index, j, transaction_count - clients[j].txn_remaining, CONNECT_DONE);
		return do_state_transition(me, j);

	case CONNECTING:
		/*
		 * The specified client did not complete connecting and now has or has failed.
		 *
		 * Valid state transitions from here are: NEW
		 */
		tsclog_4(me->log, me->index, j, transaction_count - clients[j].txn_remaining, CONNECT_DONE);

		if (epoll_ctl(epoll_fd, EPOLL_CTL_DEL, clients[j].sock, NULL) < 0) {
			perror("epoll_ctl del client:");
			set_dying();
			return 0;
		}

		if (getsockopt(clients[j].sock, SOL_SOCKET, SO_ERROR, &so_err, &len) < 0) {
			perror("getsockopt(SO_ERROR):");
			set_dying();
			return 0;
		}

		if (so_err != 0) {
			errno = so_err;
			perror("Connection failed:");
			set_dying();
			return 0;
		}

		clients[j].state = NEW;

		return do_state_transition(me, j);

	case NEW:
		/*
		 * The specified client is connected and needs the fd added to epoll.
		 *
		 * Valid state transitions from here are: READY
		 */
		config.events = EPOLLIN;
		config.data.u32 = j;
		if (epoll_ctl(epoll_fd, EPOLL_CTL_ADD, clients[j].sock, &config) < 0) {
			perror("epoll_ctl add client:");
			set_dying();
			return 0;
		}

		clients[j].state = READY;
		return do_state_transition(me, j);

	case READY:
		/*
		 * The specified client is ready to send a request.
		 *
		 * Valid state transitions from here are: SENT
		 */
		tsclog_4(me->log, me->index, j, transaction_count - clients[j].txn_remaining, SEND_START);
		client_send(clients[j].sock, clients[j].buf, clients[j].buf_size);
		tsclog_4(me->log, me->index, j, transaction_count - clients[j].txn_remaining, SEND_DONE);

		clients[j].state = SENT;
		return 0;

	case SENT:
		/*
		 * The specified client is ready to receive a response.
		 *
		 * Valid state transitions from here are: INIT, READY, SENT, DONE
		 */
		tsclog_4(me->log, me->index, j, transaction_count - clients[j].txn_remaining, RECV_START);
		clients[j].cursor += client_recv(clients[j].sock,
				&clients[j].buf[clients[j].cursor], clients[j].buf_size - clients[j].cursor);
		tsclog_4(me->log, me->index, j, transaction_count - clients[j].txn_remaining, RECV_DONE);
		if (clients[j].cursor < clients[j].buf_size) {
			// We didn't get the entire response and need to come back here
			// SENT -> SENT
			return 0;
		}

		clients[j].cursor = 0;
		clients[j].txn_remaining--;
		if (clients[j].txn_remaining == 0) {
			// SENT -> DONE
			clients[j].state = DONE;
			return 1 + do_state_transition(me, j);
		}

		clients[j].batch_remaining--;
		if (clients[j].batch_remaining == 0) {
			// SENT -> INIT
			epoll_ctl(epoll_fd, EPOLL_CTL_DEL, clients[j].sock, NULL);
			close(clients[j].sock);
			clients[j].state = INIT;
			return 1 + do_state_transition(me, j);
		}

		// SENT -> READY
		clients[j].state = READY;
		return 1 + do_state_transition(me, j);

	case DONE:
		/*
		 * The specified client is done and needs to be cleaned up.
		 *
		 * There are no valid state transitions from here.
		 */
		epoll_ctl(epoll_fd, EPOLL_CTL_DEL, clients[j].sock, NULL);
		shutdown(clients[j].sock, SHUT_RDWR);
		close(clients[j].sock);
		clients[j].sock = -1;
		return 0;

	default:
		fprintf(stderr, "Invalid client state %d.\n", clients[j].state);
		set_dying();
		return 0;
	}
}

static void cleanup(struct worker *me)
{
	size_t i;

	for (i = 0; i < clients_per_thread; i++) {
		if (me->clients[i].sock >= 0) {
			close(me->clients[i].sock);
			me->clients[i].sock = -1;
		}

		if (me->clients[i].buf) {
			free(me->clients[i].buf);
			me->clients[i].buf = NULL;
		}
	}

	if (me->clients) {
		free(me->clients);
		me->clients = NULL;
	}

	if (me->epoll_fd >= 0) {
		close(me->epoll_fd);
		me->epoll_fd = -1;
	}
}

static void *worker_func(void *arg)
{
	size_t i, j;
	size_t complete = 0;
	size_t total = transaction_count * clients_per_thread;
	int rdy;
	struct epoll_event *events;
	struct worker *me = (struct worker*)arg;

	/*
	 * Include an extra cache line size to ensure that we can align the beginning
	 * of the allocation.
	 */
	me->log = calloc(hdr_size + entry_size + L1_CACHE_BYTES, 1);
	if (!me->log) {
		perror("OOM:");
		exit(1);
	}

	// Align the timer log
	if ((uint64_t)me->log & (L1_CACHE_BYTES - 1))
		me->log = (struct TscLog*)(((uint64_t)me->log + L1_CACHE_BYTES) &
				~((uint64_t)L1_CACHE_BYTES - 1));

	me->log->hdr.info.cur = &(me->log->entries[0]);
	me->log->hdr.info.end = (void *)((uint64_t)me->log->hdr.info.cur + entry_size);
	me->log->hdr.info.overflow = 0;
	me->log->hdr.info.valperentry = 4;

	me->epoll_fd = epoll_create1(0);
	if (me->epoll_fd < 0) {
		perror("epoll_create1():");
		exit(1);
	}
	
	me->clients = calloc(clients_per_thread, sizeof(struct client));
	if (!me->clients) {
		perror("OOM");
		exit(1);
	}

	events = calloc(EVENT_BACKLOG, sizeof(struct epoll_event));
	if (!events) {
		perror("OOM");
		exit(1);
	}

	for (i = 0; i < clients_per_thread; i++) {
		me->clients[i].buf = malloc(msg_size);
		if (!me->clients[i].buf) {
			perror("OOM");
			exit(1);
		}

		me->clients[i].buf_size = msg_size;

		// Fill our buffers with random values
		for (j = 0; j < msg_size; j++) {
			me->clients[i].buf[j] = (uint8_t)random();
		}

		me->clients[i].txn_remaining = transaction_count;
		me->clients[i].batch_remaining = batch_size;
	}

	// Setup Complete
	pthread_mutex_lock(&init_lock);
	init_count++;
	pthread_cond_signal(&init_cond);
	pthread_mutex_unlock(&init_lock);
	pthread_mutex_lock(&worker_hang_lock);
	pthread_mutex_unlock(&worker_hang_lock);

	// Run Experiment
	for (i = 0; i < clients_per_thread; i++) {
		/*
		 * Initialize all our clients, when this funciton returns here we know that all our clients 
		 * need epoll to tell us that there is work to do. We don't expect any completed
		 * transactions here, but for completeness
		 */
		complete += do_state_transition(me, i);
	}

	while (!me->dying && complete < total)
	{
		rdy = epoll_wait(me->epoll_fd, events, EVENT_BACKLOG, 10000);

		if (rdy == 0) {
			fprintf(stderr, "Nothing happened in 10 seconds after %lu transactions, is the server alive?\n", complete);
			goto out_err;
		}

		if (rdy < 0) {
			perror("epoll_wait():");
			goto out_err;
		}

		for (i = 0; i < rdy; i++) {
			j = events[i].data.u32;
			complete += do_state_transition(me, j);
		}
		memset(events, 0, sizeof(struct epoll_event) * rdy);
	}

	// We want to dump state if we died so only cleanup if we finished successfully.
	if (!me->dying)
		cleanup(me);

	// Finished
	return NULL;

out_err:
	set_dying();
	return NULL;
}

static void do_error_report(char *host)
{
	struct addrinfo *err_server;
	char err_str[6];
	struct addrinfo hints;
	int ret, err_fd;
	uint64_t size, cursor = 0;
	char *buf;
	int optval = 1;
	struct sockaddr_in sock_addr;
	socklen_t len;

	snprintf(err_str, 6, "%d", DEFAULT_ERROR);
	memset(&hints, 0, sizeof(struct addrinfo));
	hints.ai_family = AF_INET;
	hints.ai_socktype = SOCK_STREAM;
	getaddrinfo(host, err_str, &hints, &err_server);

	err_fd = socket(AF_INET, SOCK_STREAM, 0);
	if (setsockopt(err_fd, SOL_SOCKET, SO_REUSEPORT, &optval, sizeof(optval)) < 0) {
		perror("error_report setsockopt");
		goto local;
	}

	if (do_connect(err_fd, err_server->ai_addr, err_server->ai_addrlen) != READY) {
		perror("error_report connect");
		goto local;
	}

	if (read(err_fd, &size, sizeof(uint64_t)) < sizeof(uint64_t)) {
		perror("error_report read");
		goto local;
	}

	buf = calloc(size, 1);
	do {
		ret = read(err_fd, &buf[cursor], size - cursor);
		if (ret <= 0) {
			perror("error_report read");
			goto local;
		}
		cursor += ret;
	} while (cursor < size);

	printf("%s\n\n", buf);
local:
	printf("THREAD\tCLIENT\tPORT\tSTATE\tCURSOR\tTXN_REMAIN\tBATCH_REMAIN\n");
	for (size_t i = 0; i < nr_threads; i++) {
		for (size_t j = 0; j < clients_per_thread; j++) {
			if (!threads[i].clients || threads[i].clients[j].state == INIT ||
					threads[i].clients[j].state == DONE ||
					threads[i].clients[j].txn_remaining == 0)
				continue;


			len = sizeof(sock_addr);
			memset(&sock_addr, 0, len);
			getsockname(threads[i].clients[j].sock, &sock_addr, &len);
			printf("%lu\t%lu\t%d\t", i, j, ntohs(sock_addr.sin_port));
			switch (threads[i].clients[j].state) {
			case CONNECTING:
				printf("CONNECTING\t");
				break;

			case NEW:
				printf("NEW\t");
				break;

			case READY:
				printf("READY\t");
				break;

			case SENT:
				printf("SENT\t");
				break;
			default:
				break;
			}
			printf("%lu\t%lu\t%lu\n", threads[i].clients[j].cursor, threads[i].clients[j].txn_remaining,
					threads[i].clients[j].batch_remaining);
		}
	}

	exit(1);
}

int main(int argc, char **argv)
{
	int port;
	int stats;
	int ret;
	int fd;
	int stat_sock;
	int optval = 1;
	int index = 0;
	char port_str[6];
	char stat_str[6];
	char *host;
	char *out_file;
	char *stat_file;
	size_t i;
	size_t max_events;
	size_t min_io;
	size_t tsc_khz;
	struct TscLogEntry *cursor, *end;
	struct addrinfo hints;
	pthread_attr_t attrs;
	cpu_set_t *worker_cpu;
	struct addrinfo *stats_server;
	uint64_t perf_sz = 0;
	char *perf_buf;

	char opt_str[] = "hp:m:c:b:t:T:o:s:S:";
	struct option long_opts[] = {
		{"help",		no_argument,       NULL, 'h'},
		{"port",		required_argument, NULL, 'p'},
		{"stats-port",		required_argument, NULL, 's'},
		{"msg-size",		required_argument, NULL, 'm'},
		{"clients",		required_argument, NULL, 'c'},
		{"batch-size",		required_argument, NULL, 'b'},
		{"txn-count",		required_argument, NULL, 't'},
		{"thread-count",	required_argument, NULL, 'T'},
		{"output",		required_argument, NULL, 'o'},
		{"perf-stats",		required_argument, NULL, 'S'},
		{0}
	};

	port = DEFAULT_PORT;
	stats = DEFAULT_STATS;
	msg_size = PAYLOAD_SIZE;
	clients_per_thread = CLIENTS_PER_THREAD;
	batch_size = BATCH_SIZE;
	transaction_count = TXN_COUNT;
	out_file = OUT_FILE;
	stat_file = PERF_FILE;

	while ((ret = getopt_long(argc, argv, opt_str, long_opts, NULL)) != -1) {
		switch (ret) {
		case '?':
		case 'h':
			usage();
			return 0;

		case 'p':
			port = (int)strtol(optarg, NULL, 10);
			break;

		case 's':
			stats = (int)strtol(optarg, NULL, 10);
			break;

		case 'm':
			msg_size = strtol(optarg, NULL, 10);
			break;

		case 'c':
			clients_per_thread = strtol(optarg, NULL, 10);
			break;

		case 'b':
			batch_size = strtol(optarg, NULL, 10);
			break;

		case 't':
			transaction_count = strtol(optarg, NULL, 10);
			break;

		case 'T':
			nr_threads = strtol(optarg, NULL, 10);
			break;

		case 'o':
			out_file = optarg;
			break;

		case 'S':
			stat_file = optarg;
			break;

		default:
			usage();
			return -1;
		}
	}

	if (port <= 0 || port > 65536) {
		fprintf(stderr, "Invalid port selected.\n");
		exit(1);
	}

	if (stats <= 0 || stats > 65536) {
		fprintf(stderr, "Invalid port selected.\n");
		exit(1);
	}

	if (optind > argc - 2) {
		fprintf(stderr, "Missing required arguments\n");
		usage();
		exit(1);
	}

	host = argv[optind];
	tsc_khz = strtol(argv[optind + 1], NULL, 10);

	nr_cpus = sysconf(_SC_NPROCESSORS_ONLN);
	if (nr_threads == 0 || nr_threads > nr_cpus)
		nr_threads = nr_cpus;

	/*
	 * Calculate the minumum number of sends and receives needed per transaction.
	 * Assume a standard MTU of 1500 - max header sizes of 120
	 */
	min_io = 1 + (msg_size / 1380);

	/*
	 * Each transaction will have min_io sends and min_io recvs and each send or
	 * recv has a start and stop event
	 */
	max_events = 4 * min_io * transaction_count;

	/*
	 * Count the connection events, each has connect start and stop
	 * we have at least 1 connect pair at start and then 1 per batch_size. So
	 * that is 2 events per connect attempt with 1 initial attempt + 1 attempt
	 * per batch.
	 */
	max_events += 2 * (1 + transaction_count / batch_size);

	/*
	 * max_events is per client but we manage event list per thread so scale for
	 * number of clients per thread
	 */
	max_events *= clients_per_thread;
	
	hdr_size = sizeof(struct TscLog);
	entry_size = TscLogEntrySize(4) * max_events;

	srandom(time(NULL));

	snprintf(port_str, 6, "%d", port);
	snprintf(stat_str, 6, "%d", stats);

	memset(&hints, 0, sizeof(struct addrinfo));

	hints.ai_family = AF_INET;
	hints.ai_socktype = SOCK_STREAM;

	getaddrinfo(host, port_str, &hints, &server);
	getaddrinfo(host, stat_str, &hints, &stats_server);

	char ipstr[INET6_ADDRSTRLEN];

	// We are expecting ipv4 and anything else is incorrect
	struct sockaddr_in *ipv4 = (struct sockaddr_in *)server->ai_addr;
	inet_ntop(server->ai_family, &ipv4->sin_addr, ipstr, sizeof(ipstr));

	fprintf(stderr, "Connecting to %s:%s\n", ipstr, port_str);

	my_pid.pid = getpid();

	threads = calloc(nr_threads, sizeof(struct worker));

	// Start threads
	pthread_mutex_lock(&worker_hang_lock);
	worker_cpu = CPU_ALLOC(nr_cpus);
	if (pthread_attr_init(&attrs)) {
		perror("Failed to initialize pthread_attrs");
		exit(1);
	}

	for (i = 0; i < nr_threads; i++) {
		threads[i].index = i;
		CPU_ZERO_S(CPU_ALLOC_SIZE(nr_cpus), worker_cpu);
		CPU_SET_S(i, CPU_ALLOC_SIZE(nr_cpus), worker_cpu);
		if (pthread_attr_setaffinity_np(&attrs, CPU_ALLOC_SIZE(nr_cpus), worker_cpu)) {
			perror("Cannot set affinity in attr");
			exit(1);
		}

		if (pthread_create(&(threads[i].id), &attrs, worker_func, &(threads[i]))) {
			perror("pthread_create():");
			exit(1);
		}
	}

	CPU_FREE(worker_cpu);

	pthread_mutex_lock(&init_lock);
	while (init_count < nr_threads) {
		pthread_cond_wait(&init_cond, &init_lock);
	}
	pthread_mutex_unlock(&init_lock);
	pthread_mutex_unlock(&worker_hang_lock);

	for (i = 0; i < nr_threads; i++) {
		pthread_join(threads[i].id, NULL);
	}

	for (i = 0; i < nr_threads; i++) {
		if (threads[i].dying) {
			fprintf(stderr, "Worker threads failed, skipping stats output.\n");
			do_error_report(host);
			exit(1);
		}
	}

	fd = open(out_file, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd < 0) {
		perror("open():");
		exit(1);
	}

	dprintf(fd, "WORKER\tCLIENT\tTRANSACTION ID\tEVENT ID\tTSC\tTSC_KHZ\n");

	for (i = 0; i < nr_threads; i++) {
		cursor = (struct TscLogEntry *)&(threads[i].log->entries[0]);
		end = threads[i].log->hdr.info.cur;
		while (cursor != end) {
			dprintf(fd, "%lu\t%lu\t%lu\t%lu\t%lu\t%lu\n",
					cursor->values[0], cursor->values[1], cursor->values[2],
					cursor->values[3], cursor->tsc, tsc_khz);
			cursor = (struct TscLogEntry *)((uint8_t*)cursor + TscLogEntrySize(4));
		}
	}

	close(fd);

	fd = open(stat_file, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd < 0) {
		perror("open():");
		exit(1);
	}

	stat_sock = socket(AF_INET, SOCK_STREAM, 0);
	if (stat_sock < 0) {
		perror("socket():");
		close(fd);
		exit(1);
	}

	if (setsockopt(stat_sock, SOL_SOCKET, SO_REUSEPORT, &optval, sizeof(optval)) < 0) {
		perror("setsockopt():");
		close(fd);
		close(stat_sock);
		exit(1);
	}

	if (do_connect(stat_sock, stats_server->ai_addr, stats_server->ai_addrlen) != READY) {
		close(fd);
		close(stat_sock);
		exit(1);
	}

	if (read(stat_sock, &perf_sz, sizeof(uint64_t)) <= 0) {
		perror("read buf size:");
		printf("Failed to get buffer size for perf events, aborting\n");
		close(fd);
		close(stat_sock);
		exit(1);
	}

	perf_buf = calloc(perf_sz, 1);
	if (!perf_buf) {
		perror("OOM:");
		close(fd);
		close(stat_sock);
		exit(1);
	}

	do {
		optval = read(stat_sock, &perf_buf[index], perf_sz - index);
		if (optval < 0) {
			perror("perf stat read:");
			close(fd);
			close(stat_sock);
			exit(1);
		}
		index += optval;
	} while (optval > 0 && index < perf_sz);

	shutdown(stat_sock, SHUT_WR);

	dprintf(fd, "%s", perf_buf);

	close(stat_sock);

	close(fd);

	fprintf(stderr, "%lu threads with %lu clients each sent %lu transactions\n",
			nr_threads, clients_per_thread, transaction_count);

	return 0;
}

