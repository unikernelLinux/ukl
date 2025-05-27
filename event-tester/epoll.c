/*
 * This is the epoll implementation of the tcp_echo server.
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

#include <sys/types.h>
#include <sys/socket.h>
#include <sys/resource.h>
#include <sys/eventfd.h>
#include <sys/ioctl.h>
#include <sys/epoll.h>

#include <linux/perf_event.h>

#include "tcp_echo.h"

extern __thread struct worker_thread *me;
extern struct worker_thread **threads;
extern struct connection **conns;
extern size_t init_count;
extern pthread_mutex_t worker_hang_lock;
extern pthread_mutex_t init_lock;
extern pthread_cond_t init_cond;

extern struct addrinfo *res;

void on_accept(void *arg)				 
{
	uint64_t in = (uint64_t)arg;
	int listen_sock;
	int cpu;
	uint64_t u = CONN_EVENT;
	struct worker_thread *owner;
	struct waiting_conn *newbie;
	socklen_t size = sizeof(cpu);

	if (in > INT_MAX) {
		// We shouldn't get here
		printf("Invalid listen_sock\n");
		exit(1);
	}

	listen_sock = (int)in;

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

		me->accept_count++;

		if (getsockopt(newbie->fd, SOL_SOCKET, SO_INCOMING_CPU, &cpu, &size) < 0) {
			perror("getsockopt:");
			exit(1);
		}

		owner = threads[cpu];
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

static void handle_new_conns(void)
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

static void *worker_func(void *arg)
{
	struct epoll_event cfg;
	int epoll_fd;
	int ret;
	int i = 1;
	struct epoll_event events[BACKLOG];
	uint64_t my_cpu = (uint64_t)arg;

	me = calloc(1, sizeof(struct worker_thread));
	if (!me) {
		perror("calloc:");
		exit(1);
	}

	// Do our setup
	me->index = my_cpu;

	threads[my_cpu] = me;
	me->event_fd = eventfd(0, EFD_NONBLOCK);
	if (me->event_fd < 0) {
		perror("eventfd():");
		exit(1);
	}

	pthread_mutex_init(&me->incoming.lock, NULL);


	memset(events, 0, sizeof(struct epoll_event) * BACKLOG);

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

	cfg.data.fd = me->listen_sock;
	if (epoll_ctl(epoll_fd, EPOLL_CTL_ADD, me->listen_sock, &cfg)) {
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
			if ((events[i].events & EPOLLERR) || (events[i].events & EPOLLHUP)) {
				// Not much to do but clean up this connection and close the fd
				if (events[i].data.fd == me->listen_sock || events[i].data.fd == me->event_fd) {
					// Yikes
					printf("Error on listen_sock or event_fd, exitting\n");
					exit(1);
				}
				on_close(events[i].data.fd);
			}

			if (events[i].data.fd == me->listen_sock) {
				// We are passing the value as an address to meet API compatibility, do
				// not change this to the address of the listen_sock
				on_accept((void*)me->listen_sock);
			} else if (events[i].data.fd == me->event_fd) {
				on_event();
			} else {
				on_read(conns[events[i].data.fd]);
			}
		}
		memset(events, 0, sizeof(struct epoll_event) * BACKLOG);
	}
	// If we get here, epoll_wait returned an error
	perror("epoll_wait():");
	exit(1);
}

void on_event(void)
{
	uint64_t cause;
	
	if (read(me->event_fd, &cause, sizeof(cause)) != sizeof(cause)) {
		if (errno == EAGAIN || errno == EWOULDBLOCK) {
			return;
		}
		perror("read from event fd:");
		exit(1);
	}
			
	handle_new_conns();  

}

void *dummy_worker(void *arg)
{
	return arg;
}

void init_threads(uint64_t nr_cpus)
{
	pthread_attr_t attrs;
	pthread_t dummy;
	cpu_set_t *worker_cpu;

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

	pthread_create(&dummy, &attrs, dummy_worker, NULL);

	for (uint64_t i = 0; i < nr_cpus; i++) {
		CPU_ZERO_S(CPU_ALLOC_SIZE(nr_cpus), worker_cpu);
		CPU_SET_S(i, CPU_ALLOC_SIZE(nr_cpus), worker_cpu);
		if (pthread_attr_setaffinity_np(&attrs, CPU_ALLOC_SIZE(nr_cpus), worker_cpu)) {
			perror("Cannot set affinity in attr");
			exit(1);
		}

		if (pthread_create(&dummy, &attrs, worker_func, (void*)i)) {
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

void on_close(int closed_fd)
{
	struct connection *conn = conns[closed_fd];
				
	conns[closed_fd] = NULL;
				
	if (epoll_ctl(me->epoll_fd, EPOLL_CTL_DEL, closed_fd, NULL)) {
		perror("epoll_ctl remove closed:");
		exit(1);
	}
		 
	close(closed_fd);
	me->conn_count++;
	
	free(conn);
}

