
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

#include <arpa/inet.h>

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

#ifndef THREAD_COUNT
#define THREAD_COUNT 4
#endif

static size_t msg_size;
static size_t nr_cpus;
static size_t batch_size;
static size_t transaction_count;
static size_t clients_per_thread;

static size_t init_count;
static pthread_mutex_t worker_hang_lock = PTHREAD_MUTEX_INITIALIZER;
static pthread_mutex_t init_lock = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t init_cond = PTHREAD_COND_INITIALIZER;

struct worker {
	pthread_t id;
	struct stats *stats;
	struct TscLog *tsc_log;
};

struct client {
	int sock;
	uint8_t *buf;
	size_t buf_size;
	size_t txn_remaining;
	size_t batch_remaining;
};

#define OPTION(opts, text)      fprintf(stderr, " %-25s  %s\n", opts, text)
#define CONT(text)              fprintf(stderr, " %-25s  %s\n", "", text)

static void usage(void)
{
        fprintf(stderr, "tcp_client [options] host-ip\n");
	fprintf(stderr, "host-ip is required and is an IPv4 dotted quad\n");
        fprintf(stderr, "options:\n");
        OPTION("--help,-h", "Print this message");
        OPTION("--port,-p [port]", "Use the requested port instead of 7272");
        OPTION("--msg-size,-m [size]", "Use the requested message size instead of 32");
	OPTION("--batch-size,-b [size]", "Send [size] transactions before reconnecting. Default is 1");
	OPTION("--txn-count,-t [count]", "Have each client send [count] requests. Default is 1000");
	OPTION("--clients,-c [count]", "Start [count] clients per thread. Default is 4");
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
	int so_error = EINPROGRESS;
	socklen_t optlen = sizeof(int);
	struct pollfd list[1];
	int ret;

	if (connect(sock, addr, len) < 0) {
		if (errno != EINPROGRESS) {
			perror("client connect():");
			exit(1);
		}

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
	//struct worker *me = (struct worker*)arg;

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
		clients[i].sock = socket(AF_INET, SOCK_STREAM | SOCK_NONBLOCK, 0);
		if (clients[i].sock < 0) {
			perror("client socket():");
			exit(1);
		}

		config.data.u32 = i;
		if (epoll_ctl(epoll_fd, EPOLL_CTL_ADD, clients[i].sock, &config) < 0) {
			perror("epoll_ctl add client:");
			exit(1);
		}

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
		wait_for_connect(clients[i].sock, server->ai_addr, server->ai_addrlen);
	
		client_send(clients[i].sock, clients[i].buf, clients[i].buf_size);
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
			client_recv(clients[j].sock, clients[j].buf, clients[j].buf_size);

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

				clients[j].sock = socket(AF_INET, SOCK_STREAM | SOCK_NONBLOCK, 0);

				wait_for_connect(clients[j].sock, server->ai_addr, server->ai_addrlen); 

				config.data.u32 = j;
				if (epoll_ctl(epoll_fd, EPOLL_CTL_ADD, clients[j].sock, &config) < 0) {
					perror("epoll_ctl add client:");
					exit(1);
				}
			}

			client_send(clients[j].sock, clients[j].buf, clients[j].buf_size);
		}
		memset(events, 0, sizeof(struct epoll_event) * clients_per_thread);
	}

	fprintf(stderr, "%lu clients each sent %lu transactions\n", clients_per_thread, transaction_count);

	// Finished
	return NULL;
}


int main(int argc, char **argv)
{
	int port;
	int ret;
	char port_str[6];
	char *host;
	size_t i;
	struct worker *threads;
	struct addrinfo hints;
	pthread_attr_t attrs;
	cpu_set_t *worker_cpu;

	char opt_str[] = "hp:m:c:b:t:";
	struct option long_opts[] = {
		{"help",		no_argument, NULL, 'h'},
		{"port",		required_argument, NULL, 'p'},
		{"msg-size",		required_argument, NULL, 'm'},
		{"clients",		required_argument, NULL, 'c'},
		{"batch-size",		required_argument, NULL, 'b'},
		{"txn-count",		required_argument, NULL, 't'},
		{0}
	};

	port = DEFAULT_PORT;
	msg_size = PAYLOAD_SIZE;
	clients_per_thread = CLIENTS_PER_THREAD;
	batch_size = BATCH_SIZE;
	transaction_count = TXN_COUNT;

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

		default:
			usage();
			return -1;
		}
	}

	if (port <= 0 || port > 65536) {
		fprintf(stderr, "Invalid port selected.\n");
		exit(1);
	}

	nr_cpus = sysconf(_SC_NPROCESSORS_ONLN);

	srandom(time(NULL));

	snprintf(port_str, 6, "%d", port);

	host = argv[optind];

	memset(&hints, 0, sizeof(struct addrinfo));

	hints.ai_family = AF_INET;
	hints.ai_socktype = SOCK_STREAM;

	getaddrinfo(host, port_str, &hints, &server);

	char ipstr[INET6_ADDRSTRLEN];
	// We are expecting ipv4 and anything else is incorrect

	struct sockaddr_in *ipv4 = (struct sockaddr_in *)server->ai_addr;
	inet_ntop(server->ai_family, &ipv4->sin_addr, ipstr, sizeof(ipstr));
	fprintf(stderr, "Connecting to %s:%s\n", ipstr, port_str);

	threads = calloc(nr_cpus, sizeof(struct worker));

	// Start threads
	pthread_mutex_lock(&worker_hang_lock);
	worker_cpu = CPU_ALLOC(nr_cpus);
	if (pthread_attr_init(&attrs)) {
		perror("Failed to initialize pthread_attrs");
		exit(1);
	}

	for (i = 0; i < nr_cpus; i++) {
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
	while (init_count < nr_cpus) {
		pthread_cond_wait(&init_cond, &init_lock);
	}
	pthread_mutex_unlock(&init_lock);
	pthread_mutex_unlock(&worker_hang_lock);

	for (i = 0; i < nr_cpus; i++) {
		pthread_join(threads[i].id, NULL);
	}

	// Time for stats!
	return 0;
}

