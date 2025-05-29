/*
 * This is the upcall implementation of the tcp_echo server.
 */

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
#include <limits.h>

#include <sys/ioctl.h>

#include <linux/perf_event.h>

#include "tcp_echo.h"

#include "../libupcall/upcall.h"

extern __thread struct worker_thread *me;
extern struct connection **conns;
extern struct worker_thread **threads;

extern struct addrinfo *res;

struct connection *new_conn(int fd);

void on_accept(void *arg)
{
	uint64_t in = (uint64_t)arg;
	int listen_sock;
	int incoming;
	struct connection *new;

	if (in > INT_MAX) {
		// We shouldn't get here
		printf("Invalid listen_sock\n");
		exit(1);
	}

	listen_sock = (int)in;

	while (1) {
		if ((incoming = accept4(listen_sock, NULL, NULL, SOCK_NONBLOCK)) < 0) {
			if (errno == EAGAIN || errno == EWOULDBLOCK) {
				// We exhausted the incoming queue
				return;
			}
			perror("accept4:");
			exit(1);
		}

		me->accept_count++;

		new = new_conn(incoming);
		if (!new)
			exit(1);

		conns[incoming] = new;
		printf("Made new connection object at %p using fd %d (stored as %d at %p)\n", new, incoming, new->fd, &new->fd);

		if (register_event(incoming, EPOLLIN, on_read, new)) {
			printf("OOM\n");
			exit(1);
		}
	}
}

static void worker_setup(void *arg)
{
	int i = 1;

	me = calloc(1, sizeof(struct worker_thread));
	if (!me) {
		perror("calloc:");
		exit(1);
	}

	me->index = sched_getcpu();
	if (me->index < 0) {
		perror("sched_getcpu():");
		exit(1);
	}

	threads[me->index] = me;

	me->listen_sock = socket(res->ai_family, res->ai_socktype | SOCK_NONBLOCK, res->ai_protocol);
	if (me->listen_sock < 0) {
		perror("socket():");
		exit(1);
	}

	if (setsockopt(me->listen_sock, SOL_SOCKET, SO_REUSEPORT, &i, sizeof(i))) {
		perror("setsockopt():");
		exit(1);
	}

	if (setsockopt(me->listen_sock, SOL_SOCKET, SO_REUSEADDR, &i, sizeof(i))) {
		perror("setsockopt():");
		exit(1);
	}

	if (bind(me->listen_sock, res->ai_addr, res->ai_addrlen)) {
		perror("bind():");
		exit(1);
	}

	if (listen(me->listen_sock, BACKLOG)) {
		perror("listen():");
		exit(1);
	}

	register_event(me->listen_sock, EPOLLIN, on_accept, (void *)(uint64_t)me->listen_sock);

	setup_perf(me->perf_fds, me->perf_ids, me->index);

	ioctl(me->perf_fds[0], PERF_EVENT_IOC_RESET, 0);
	ioctl(me->perf_fds[0], PERF_EVENT_IOC_ENABLE, 0);
}

void *dummy_worker(void *arg)
{
        return arg;
}

void init_threads(uint64_t nr_cpus)
{
	pthread_attr_t attrs;
	pthread_t dummy;

	pthread_attr_init(&attrs);
	pthread_attr_setdetachstate(&attrs, PTHREAD_CREATE_DETACHED);
	pthread_create(&dummy, &attrs, dummy_worker, NULL);

	if (init_event_handler(PCPU, 1, worker_setup, NULL)) {
		printf("Event Handler setup failed\n");
		exit(1);
	}
}

void on_close(int closed_fd)
{
	struct connection *conn = conns[closed_fd];
	conns[closed_fd] = NULL;
	conn->fd = -1;

	printf("Closing conn %p for fd %d\n", conn, conn->fd);

	if (!conn) {
		// We raced
		printf("RACE IN CLOSE!!!\n");
		return;
	}

	unregister_event(closed_fd, EPOLLIN);
	close(closed_fd);
	free(conn);
	me->conn_count++;
}
