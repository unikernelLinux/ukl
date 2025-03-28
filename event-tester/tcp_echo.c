
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

#ifndef DEFAULT_PORT
#define DEFAULT_PORT 7272
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
	int cpu;
};
static struct worker_thread *threads;

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

void *worker_func(void *arg);

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

	for (int i = 0; i < nr_cpus; i++) {
		threads[i].event_fd = eventfd(0, EFD_NONBLOCK);
		if (threads[i].event_fd < 0) {
			perror("eventfd():");
			exit(1);
		}

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

int on_read(struct connection *conn)
{
	ssize_t ret;
	size_t size;
	size_t cursor = 0;

	if (!conn->buffer) {
		conn->buffer = (unsigned char *)malloc(msg_size);
		if (!conn->buffer) {
			perror("Malloc on read");
			exit(1);
		}
	}

	while (1) {

		do {
			if ((ret = read(conn->fd, &(conn->buffer[cursor]), msg_size - cursor)) <= 0) {
				if (ret == 0) {
					return CLOSED;
				} else if (errno == EAGAIN || errno == EWOULDBLOCK) {
					// Nothing to do here, just return
					return SUCCESS;
				}
				// Any other problem is a real one
				perror("read from client:");
				exit(1);
			}
			cursor += ret;
		} while (cursor < msg_size);

		size = cursor;
		cursor = 0;

		do {
			if ((ret = write(conn->fd, &(conn->buffer[cursor]), size - cursor)) <= 0) {
				if (ret == 0) {
					return CLOSED;
				} else if (errno == EAGAIN || errno == EWOULDBLOCK) {
					continue;
				}
				perror("write to client:");
				exit(1);
			}
			cursor += ret;
		} while (cursor < size);
	}

	return SUCCESS;
}

void on_accept(int listen_sock)
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

void on_event(struct worker_thread *me) {
	struct waiting_conn *newbie;
	struct connection *conn;
	struct epoll_event cfg;
	uint64_t dummy;

	cfg.events = EPOLLIN;

	if (read(me->event_fd, &dummy, sizeof(dummy)) != sizeof(dummy)) {
		if (errno == EAGAIN || errno == EWOULDBLOCK) {
			return;
		}
		perror("read from event fd:");
		exit(1);
	}

	while (me->incoming.list != NULL) {
		pthread_mutex_lock(&me->incoming.lock);
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
	}
}

void on_close(struct worker_thread *me, int closed_fd)
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

/*
 * The coordinator thread will fill this information in and then the workers
 * will all use it to setup their local listen sockets.
 */
struct addrinfo *res;

void *worker_func(void *arg)
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
	

	// Notify that setup is done
	pthread_mutex_lock(&init_lock);
	init_count++;
	pthread_cond_signal(&init_cond);
	pthread_mutex_unlock(&init_lock);
	pthread_mutex_lock(&worker_hang_lock);
	pthread_mutex_unlock(&worker_hang_lock);

	/* Worker Event Loop */
	while((ret = epoll_wait(epoll_fd, events, BACKLOG, -1)) > 0) {
		for (i = 0; i < ret; i++) {
			int closed;
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

extern int errno;
extern int optind;
extern char *optarg;

int main(int argc, char **argv)
{
	int status;
	struct addrinfo hints;
	int ret = 0;
	int index = 0;
	unsigned int port;
	char prt_str[6];

	char opt_str[] = "hp:m:";
	struct option long_opts[] = {
		{"help",	no_argument, NULL, 'h'},
		{"port",	required_argument, NULL, 'p'},
		{"msg-size",	required_argument, NULL, 'm'},
		{0}
	};

	port = DEFAULT_PORT;
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

		default:
			usage();
			return -1;
		}
	}
	ret = -1;
	
	memset(&hints, 0, sizeof(hints));
	hints.ai_family = AF_INET;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_flags = AI_PASSIVE | AI_NUMERICSERV;

	if (port > 65535) {
		fprintf(stderr, "Invalid port number\n");
		goto out_ret;
	}

	snprintf(prt_str, 6, "%u", port);

	if ((status = getaddrinfo(NULL, prt_str, &hints, &res))) {
		fprintf(stderr, "getaddrinfo failed: %s\n", gai_strerror(status));
		goto out_ret;
	}

	nr_cpus = sysconf(_SC_NPROCESSORS_ONLN);

	init_conns();

	init_threads();

	fprintf(stderr, "Started %lu threads, server is ready.\n");

	while(1) {
		sleep(90000);
	}

out_ret:
	return ret;
}
