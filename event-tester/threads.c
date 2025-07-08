/*
 * This is the threads + blocking I/O implementation of the tcp_echo server.
 */

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <netdb.h>
#include <unistd.h>

#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/resource.h>

#include <linux/perf_event.h>

#include "tcp_echo.h"

extern __thread struct worker_thread *me;
extern __thread struct buffer_cache *msg_cache;
extern __thread struct buffer_cache *conn_cache;
extern struct worker_thread **threads;
extern struct connection **conns;
extern size_t init_count;
extern size_t msg_size;
extern size_t nr_cpus;
extern pthread_mutex_t worker_hang_lock;
extern pthread_mutex_t init_lock;
extern pthread_cond_t init_cond;

extern struct addrinfo *res;

static void *conn_handler(void *arg)
{
	struct connection *conn = (struct connection *)arg;
	size_t cursor = 0;
	int ret;

	conn->buffer = calloc(msg_size, 1);
	if (!conn->buffer) {
		perror("OOM");
		exit(1);
	}

	while (1) {
		do {
			ret = read(conn->fd, &conn->buffer[cursor], msg_size - cursor);
			if (ret == 0) {
				goto done;
			} else if (ret < 0) {
				perror("read from client");
				exit(1);
			}

			cursor += ret;
		} while (cursor < msg_size);

		cursor = 0;

		do {
			ret = write(conn->fd, &conn->buffer[cursor], msg_size - cursor);
			if (ret == 0) {
				goto done;
			} else if (ret < 0) {
				perror("write to client");
				exit(1);
			}

			cursor += ret;
		} while (cursor < msg_size);
		cursor = 0;
	}
done:
	shutdown(conn->fd, SHUT_RDWR);
	close(conn->fd);
	conns[conn->fd] = NULL;
	free(conn->buffer);
	free(conn);
	// Find a way to return the allocated objects to their appropriate pools
	return NULL;
}

static void* worker_func(void *arg)
{
	uint64_t my_cpu = (uint64_t)arg;
	int i = 1;
	int cpu;
	struct connection *incoming;
	pthread_attr_t attrs;
	pthread_t dummy;
	cpu_set_t *worker_cpu;
	socklen_t size = sizeof(cpu);

	worker_cpu = CPU_ALLOC(nr_cpus);

	me = calloc(1, sizeof(struct worker_thread));
	if (!me) {
		perror("calloc");
		exit(1);
	}

	me->index = my_cpu;
	threads[my_cpu] = me;

	if (pthread_attr_init(&attrs)) {
		perror("Failed to initialize pthread_attrs");
		exit(1);
	}

	if (pthread_attr_setdetachstate(&attrs, PTHREAD_CREATE_DETACHED)) {
		perror("Cannot set detatched state attr");
		exit(1);
	}

	me->listen_sock = socket(res->ai_family, res->ai_socktype, res->ai_protocol);
	if (me->listen_sock < 0) {
		perror("socket():");
		exit(1);
	}

	if (setsockopt(me->listen_sock, SOL_SOCKET, SO_REUSEPORT, &i, sizeof(i))) {
		perror("setsockopt REUSEPORT:");
		exit(1);
	}

	if (setsockopt(me->listen_sock, SOL_SOCKET, SO_REUSEADDR, &i, sizeof(i))) {
		perror("setsockopt REUSEADDR:");
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

	/*
	 * The threaded model will use this thread to run accept for this CPU and then 
	 * spawn new threads on the target CPU for any new connections. The spawned threads
	 * will be created in a detachted state and we won't care about their return values.
	 */
	while (1) {
		CPU_ZERO_S(CPU_ALLOC_SIZE(nr_cpus), worker_cpu);
		incoming = calloc(1, sizeof(struct connection));
		if (!incoming) {
			perror("OOM");
			exit(1);
		}

		incoming->fd = accept(me->listen_sock, NULL, NULL);
		if (incoming->fd < 0) {
			perror("accept");
			exit(1);
		}

		me->accept_count++;

		if (getsockopt(incoming->fd, SOL_SOCKET, SO_INCOMING_CPU, &cpu, &size) < 0) {
			perror("getsockopt:");
			exit(1);
		}

		CPU_SET_S(cpu, CPU_ALLOC_SIZE(nr_cpus), worker_cpu);

		if (pthread_attr_setaffinity_np(&attrs, CPU_ALLOC_SIZE(nr_cpus), worker_cpu)) {
			perror("Cannot set affinity in attr");
			exit(1);
		}
		
		if (pthread_create(&dummy, &attrs, conn_handler, incoming)) {
			perror("pthread_create():");
			exit(1);
		}
	}
}

void *dummy_worker(void *arg)
{
	return arg;
}

void init_threads(uint64_t cpus)
{
	pthread_attr_t attrs;
	pthread_t dummy;
	cpu_set_t *worker_cpu;

	worker_cpu = CPU_ALLOC(cpus);

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

	for (uint64_t i = 0; i < cpus; i++) {
		CPU_ZERO_S(CPU_ALLOC_SIZE(cpus), worker_cpu);
		CPU_SET_S(i, CPU_ALLOC_SIZE(cpus), worker_cpu);
		if (pthread_attr_setaffinity_np(&attrs, CPU_ALLOC_SIZE(cpus), worker_cpu)) {
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
	while (init_count < cpus) {
		pthread_cond_wait(&init_cond, &init_lock);
	}
	pthread_mutex_unlock(&init_lock);
	pthread_mutex_unlock(&worker_hang_lock);
}

