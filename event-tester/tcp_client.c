
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

#include <arpa/inet.h>

#define UKL_USER
#include "tsc_logger.h"
#undef UKL_USER

#ifndef DEFAULT_PORT
#define DEFAULT_PORT 7272
#endif

#ifndef PAYLOAD_SIZE
#define PAYLOAD_SIZE 32
#endif

#ifndef CLIENTS_PER_THREAD
#define CLIENTS_PER_THREAD 4
#endif

#ifndef BATCH_SIZE
#define BATCH_SIZE 1
#endif

#ifndef TXN_COUNT
#define TXN_COUNT 1000
#endif

#ifndef OUT_FILE
#define OUT_FILE "timers.tsv"
#endif

#define SOCKET_START		0
#define SOCKET_DONE		1
#define CONNECT_START	2
#define CONNECT_DONE		3
#define SEND_START		4
#define SEND_DONE		5
#define RECV_START		6
#define RECV_DONE		7

static size_t msg_size;
static size_t nr_cpus;
static size_t nr_threads;
static size_t batch_size;
static size_t transaction_count;
static size_t clients_per_thread;
static size_t hdr_size;
static size_t entry_size;

static size_t init_count;
static pthread_mutex_t worker_hang_lock = PTHREAD_MUTEX_INITIALIZER;
static pthread_mutex_t init_lock = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t init_cond = PTHREAD_COND_INITIALIZER;

struct worker {
	pthread_t id;
	uint64_t index;
	struct stats *stats;
	struct TscLog *log;
};

struct client {
	int sock;
	uint8_t *buf;
	size_t buf_size;
	size_t txn_remaining;
	size_t batch_remaining;
};

#define OPTION(opts, text)      fprintf(stderr, " %-30s  %s\n", opts, text)
#define CONT(text)              fprintf(stderr, " %-30s  %s\n", "", text)

static void usage(void)
{
        fprintf(stderr, "tcp_client [options] host-ip tsc-khz\n");
	fprintf(stderr, "host-ip is required and is an IPv4 dotted quad\n");
	fprintf(stderr, "tsc-khz is required and is the TSC frequency for this machine in KHz");
        fprintf(stderr, "options:\n");
        OPTION("--help,-h", "Print this message");
        OPTION("--port,-p [port]", "Use the requested port instead of 7272");
        OPTION("--msg-size,-m [size]", "Use the requested message size instead of 32");
	OPTION("--batch-size,-b [size]", "Send [size] transactions before reconnecting. Default is 1");
	OPTION("--txn-count,-t [count]", "Have each client send [count] requests. Default is 1000");
	OPTION("--clients,-c [count]", "Start [count] clients per thread. Default is 4");
	OPTION("--thread-count,-T [count]", "Use [count] threads. Default is 1 per online CPU");
	CONT("The client will start at max 1 thread per online CPU.");
	OPTION("--output,-o [name]", "Use [name] for the timer tab separated value file.");
	CONT("Default is timers.tsv");
}

extern int errno;
extern int optind;
extern char *optarg;

static struct addrinfo *server;

static void client_send(int sock, uint8_t *buf, size_t len)
{
	ssize_t ret;
	size_t cursor = 0;

	do {
		ret = send(sock, &(buf[cursor]), len - cursor, 0);
		if (ret < 0) {
			perror("client send():");
			exit(1);
		}

		cursor += ret;
	} while (cursor < len);

}

static void client_recv(int sock, uint8_t *buf, size_t len)
{
	ssize_t ret;
	size_t cursor = 0;

	do {
		ret = recv(sock, &(buf[cursor]), len - cursor, 0);
		if (ret < 0) {
			perror("client recv():");
			exit(1);
		}

		cursor += ret;
	} while (cursor < len);
}

static void wait_for_connect(int sock, const struct sockaddr *addr, socklen_t len)
{
	int so_error;
	socklen_t optlen = sizeof(int);
	struct pollfd list[1];
	int ret;

	if (connect(sock, addr, len) < 0) {
		if (errno != EINPROGRESS) {
			perror("client connect():");
			exit(1);
		}

		so_error = errno;

		list[0].fd = sock;
		list[0].events = POLLOUT;
		if ((ret = poll(list, 1, 1000)) == -1 ) {
			perror("poll():");
			exit(1);
		} else if (ret == 0) {
			fprintf(stderr, "Timed out waiting for connection\n");
			exit(1);
		}

		while (so_error == EINPROGRESS) {
			if (getsockopt(sock, SOL_SOCKET, SO_ERROR, &so_error, &optlen) != 0) {
				perror("connect getsockopt():");
				exit(1);
			}
		}

		if (so_error && so_error != EISCONN) {
			fprintf(stderr, "Non blocking connect failed: %d\n", so_error);
			exit(1);
		}
	}
}

static void *worker_func(void *arg)
{
	struct client *clients;
	size_t i, j;
	size_t complete = 0;
	size_t total = transaction_count * clients_per_thread;
	int epoll_fd;
	int rdy;
	struct epoll_event *events;
	struct epoll_event config;
	struct worker *me = (struct worker*)arg;

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

	epoll_fd = epoll_create1(0);
	if (epoll_fd < 0) {
		perror("epoll_create1():");
		exit(1);
	}
	
	clients = calloc(clients_per_thread, sizeof(struct client));
	if (!clients) {
		perror("OOM");
		exit(1);
	}

	events = calloc(clients_per_thread, sizeof(struct epoll_event));
	if (!events) {
		perror("OOM");
		exit(1);
	}

	config.events = EPOLLIN;

	for (i = 0; i < clients_per_thread; i++) {
		clients[i].buf = malloc(msg_size);
		if (!clients[i].buf) {
			perror("OOM");
			exit(1);
		}

		clients[i].buf_size = msg_size;

		// Fill our buffers with random values
		for (j = 0; j < msg_size; j++) {
			clients[i].buf[j] = (uint8_t)random();
		}

		clients[i].txn_remaining = transaction_count;
		clients[i].batch_remaining = batch_size;
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
		tsclog_4(me->log, me->index, i, transaction_count - clients[i].txn_remaining, SOCKET_START);
		clients[i].sock = socket(AF_INET, SOCK_STREAM | SOCK_NONBLOCK, 0);
		if (clients[i].sock < 0) {
			perror("client socket():");
			exit(1);
		}
		tsclog_4(me->log, me->index, i, transaction_count - clients[i].txn_remaining, SOCKET_DONE);

		config.data.u32 = i;
		if (epoll_ctl(epoll_fd, EPOLL_CTL_ADD, clients[i].sock, &config) < 0) {
			perror("epoll_ctl add client:");
			exit(1);
		}

		tsclog_4(me->log, me->index, i, transaction_count - clients[i].txn_remaining, CONNECT_START);
		wait_for_connect(clients[i].sock, server->ai_addr, server->ai_addrlen);
		tsclog_4(me->log, me->index, i, transaction_count - clients[i].txn_remaining, CONNECT_DONE);
	
		tsclog_4(me->log, me->index, i, transaction_count - clients[i].txn_remaining, SEND_START);
		client_send(clients[i].sock, clients[i].buf, clients[i].buf_size);
		tsclog_4(me->log, me->index, i, transaction_count - clients[i].txn_remaining, SEND_DONE);
	}

	while (complete < total)
	{
		rdy = epoll_wait(epoll_fd, events, clients_per_thread, -1);
		if (rdy < 0) {
			perror("epoll_wait():");
			exit(1);
		}

		for (i = 0; i < rdy; i++) {
			j = events[i].data.u32;
			tsclog_4(me->log, me->index, j, transaction_count - clients[j].txn_remaining, RECV_START);
			client_recv(clients[j].sock, clients[j].buf, clients[j].buf_size);
			tsclog_4(me->log, me->index, j, transaction_count - clients[j].txn_remaining, RECV_DONE);

			complete++;
			clients[j].txn_remaining--;
			if (clients[j].txn_remaining == 0) {
				epoll_ctl(epoll_fd, EPOLL_CTL_DEL, clients[j].sock, NULL);
				close(clients[j].sock);
				continue;
			}

			clients[j].batch_remaining--;
			if (clients[j].batch_remaining == 0) {
				epoll_ctl(epoll_fd, EPOLL_CTL_DEL, clients[j].sock, NULL);
				close(clients[j].sock);

				clients[j].batch_remaining = batch_size;

				tsclog_4(me->log, me->index, j, transaction_count - clients[j].txn_remaining, SOCKET_START);
				clients[j].sock = socket(AF_INET, SOCK_STREAM | SOCK_NONBLOCK, 0);
				if (clients[j].sock < 0) {
					perror("socket():");
					exit(1);
				}
				tsclog_4(me->log, me->index, j, transaction_count - clients[j].txn_remaining, SOCKET_DONE);

				tsclog_4(me->log, me->index, j, transaction_count - clients[j].txn_remaining, CONNECT_START);
				wait_for_connect(clients[j].sock, server->ai_addr, server->ai_addrlen); 
				tsclog_4(me->log, me->index, j, transaction_count - clients[j].txn_remaining, CONNECT_DONE);

				config.data.u32 = j;
				if (epoll_ctl(epoll_fd, EPOLL_CTL_ADD, clients[j].sock, &config) < 0) {
					perror("epoll_ctl add client:");
					exit(1);
				}
			}

			tsclog_4(me->log, me->index, j, transaction_count - clients[j].txn_remaining, SEND_START);
			client_send(clients[j].sock, clients[j].buf, clients[j].buf_size);
			tsclog_4(me->log, me->index, j, transaction_count - clients[j].txn_remaining, SEND_DONE);
		}
		memset(events, 0, sizeof(struct epoll_event) * clients_per_thread);
	}

	// Finished
	return NULL;
}


int main(int argc, char **argv)
{
	int port;
	int ret;
	int fd;
	char port_str[6];
	char *host;
	char *out_file;
	size_t i;
	size_t max_events;
	size_t tsc_khz;
	struct TscLogEntry *cursor, *end;
	struct worker *threads;
	struct addrinfo hints;
	pthread_attr_t attrs;
	cpu_set_t *worker_cpu;

	char opt_str[] = "hp:m:c:b:t:T:o:";
	struct option long_opts[] = {
		{"help",		no_argument,       NULL, 'h'},
		{"port",		required_argument, NULL, 'p'},
		{"msg-size",		required_argument, NULL, 'm'},
		{"clients",		required_argument, NULL, 'c'},
		{"batch-size",		required_argument, NULL, 'b'},
		{"txn-count",		required_argument, NULL, 't'},
		{"thread-count",	required_argument, NULL, 'T'},
		{"output",		required_argument, NULL, 'o'},
		{0}
	};

	port = DEFAULT_PORT;
	msg_size = PAYLOAD_SIZE;
	clients_per_thread = CLIENTS_PER_THREAD;
	batch_size = BATCH_SIZE;
	transaction_count = TXN_COUNT;
	out_file = OUT_FILE;

	while ((ret = getopt_long(argc, argv, opt_str, long_opts, NULL)) != -1) {
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

		default:
			usage();
			return -1;
		}
	}

	if (port <= 0 || port > 65536) {
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
	if (nr_threads > nr_cpus)
		nr_threads = nr_cpus;

	// Each transaction will have at least read and write start and stop
	max_events = 4 * transaction_count;
	/*
	 * Count the connection events, each has socket and connect start and stop
	 * we have at least 1 connect set at start and then 1 per batch_size
	 */
	max_events += 4 * (2 + transaction_count / batch_size);
	
	/*
	 * Include an extra cache line size to ensure that we can align the beginning
	 * of the allocation.
	 */
	hdr_size = sizeof(struct TscLog);
	entry_size = sizeof(struct TscLog) * max_events;

	srandom(time(NULL));

	snprintf(port_str, 6, "%d", port);

	memset(&hints, 0, sizeof(struct addrinfo));

	hints.ai_family = AF_INET;
	hints.ai_socktype = SOCK_STREAM;

	getaddrinfo(host, port_str, &hints, &server);

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

	fd = open(out_file,
			O_WRONLY | O_CREAT | S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH | O_TRUNC);
	if (fd < 0) {
		perror("open():");
		exit(1);
	}

	dprintf(fd, "CPU\tTSC\tWORKER\tCLIENT\tTRANSACTION ID\tEVENT ID\tTSC_KHZ\n");

	for (i = 0; i < nr_threads; i++) {
		cursor = (struct TscLogEntry *)&(threads[i].log->entries[0]);
		end = threads[i].log->hdr.info.cur;
		while (cursor != end) {
			dprintf(fd, "%u\t%lu\t%lu\t%lu\t%lu\t%lu\t%lu\n",
					cursor->cpu, cursor->tsc, cursor->values[0], cursor->values[1],
					cursor->values[2], cursor->values[3], tsc_khz);
		}
	}

	close(fd);

	fprintf(stderr, "%lu threads with %lu clients each sent %lu transactions\n",
			nr_threads, clients_per_thread, transaction_count);

	// Time for stats!
	return 0;
}

