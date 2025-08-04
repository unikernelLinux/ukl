/*
 * This is the io-uring implementation of the tcp_echo server.
 */

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <netdb.h>
#include <unistd.h>
#include <sched.h>
#include <errno.h>
#include <pthread.h>
#include <limits.h>

#include <liburing.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <sys/resource.h>
#include <sys/eventfd.h>
#include <sys/ioctl.h>

#include <linux/perf_event.h>

#include "tcp_echo.h"

extern __thread struct worker_thread *me;
extern __thread struct buffer_cache *msg_cache;
extern __thread struct buffer_cache *conn_cache;
extern struct worker_thread **threads;
extern struct connection **conns;
extern size_t init_count;
extern size_t msg_size;
extern pthread_mutex_t worker_hang_lock;
extern pthread_mutex_t init_lock;
extern pthread_cond_t init_cond;

extern struct addrinfo *res;

__thread struct io_uring ring;

enum io_types {
	ACCEPT,
	SOCK_READ,
	EV_READ,
	SOCK_WRITE,
	EV_WRITE
};

struct req_info {
	uint32_t fd;
	uint16_t type;
	void *to_free;
};

static void add_accept_request(int server_socket, struct sockaddr_in *client_addr,
				socklen_t *client_addr_len)
{
	struct io_uring_sqe *sqe = io_uring_get_sqe(&ring);
	struct req_info info = { .fd = server_socket, .type = ACCEPT, .to_free = NULL };
	io_uring_prep_accept(sqe, server_socket, (struct sockaddr *) client_addr,
				client_addr_len, 0);
	memcpy(&sqe->user_data, &info, sizeof(info));
}

static void add_read_request(int fd, void *buf, size_t len, uint16_t type)
{
	struct io_uring_sqe *sqe = io_uring_get_sqe(&ring);
	struct req_info info = { .fd = fd, .type = type, .to_free = NULL };
	io_uring_prep_read(sqe, fd, buf, len, 0);
	memcpy(&sqe->user_data, &info, sizeof(info));
}

static void add_write_request(int fd, void *buf, size_t len, uint16_t type, int free_buf)
{
	struct io_uring_sqe *sqe = io_uring_get_sqe(&ring);
	struct req_info info = { .fd = fd, .type = type };
	if (free_buf)
		info.to_free = buf;
	else
		info.to_free = NULL;
	io_uring_prep_write(sqe, fd, buf, len, 0);
	memcpy(&sqe->user_data, &info, sizeof(info));
}

void on_close(void *arg)
{
	struct connection *conn = (struct connection *)arg;
	int to_close = conn->fd;

	conns[to_close] = NULL;

	close(to_close);
	me->conn_count++;
	cache_free(msg_cache, conn->buffer, me->index);
	cache_free(conn_cache, conn, me->index);
}

static void *worker_func(void *arg)
{
	int ret;
	int i = 1;
	uint64_t my_cpu = (uint64_t)arg;
	struct io_uring_params uring_params;
	struct sockaddr_in client_addr;
	socklen_t client_addr_len = sizeof(client_addr);
	uint64_t ev_cause;
	uint64_t cause_size = sizeof(ev_cause);

	me = calloc(1, sizeof(struct worker_thread));
	if (!me) {
		perror("calloc:");
		exit(1);
	}

	// Do our setup
	me->index = my_cpu;

	threads[my_cpu] = me;
	me->event_fd = eventfd(0, 0);
	if (me->event_fd < 0) {
		perror("eventfd():");
		exit(1);
	}

	pthread_mutex_init(&me->incoming.lock, NULL);

	msg_cache = init_cache(msg_size, 1024, me->index);
	if (!msg_cache) {
		perror("OOM");
		exit(1);
	}

	conn_cache = init_cache(sizeof(struct connection), 1024, me->index);
	if (!conn_cache) {
		perror("OOM");
		exit(1);
	}

	
        me->listen_sock = socket(res->ai_family, res->ai_socktype, res->ai_protocol);
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

	setup_perf(me->perf_fds, me->perf_ids, me->index);

	memset(&uring_params, 0, sizeof(struct io_uring_params));

	uring_params.sq_entries = QUEUE_DEPTH;
	uring_params.cq_entries = 8 * QUEUE_DEPTH;
	uring_params.flags = IORING_SETUP_SINGLE_ISSUER;
	io_uring_queue_init_params(QUEUE_DEPTH, &ring, &uring_params);

	add_accept_request(me->listen_sock, &client_addr, &client_addr_len);
	add_read_request(me->event_fd, &ev_cause, cause_size, EV_READ);

	while (1) {
		struct io_uring_cqe *cqe;
		unsigned head;
		unsigned count = 0;
		io_uring_submit_and_wait(&ring, 1);

		io_uring_for_each_cqe(&ring, head, cqe) {
			struct req_info info;
			struct connection *conn;
			int ret;
			struct waiting_conn *newbie;
			count++;
			memcpy(&info, &cqe->user_data, sizeof(info));

			switch (info.type) {
			case ACCEPT:
				int cpu;
				socklen_t size = sizeof(cpu);
				uint64_t *u = malloc(sizeof(uint64_t));
				struct worker_thread *owner;
				newbie = malloc(sizeof(struct waiting_conn));

				if (!newbie) {
					perror("malloc:");
					exit(1);
				}

				*u = CONN_EVENT;
				me->accept_count++;
				newbie->fd = cqe->res;
				if (newbie->fd < 0) {
					fprintf(stderr, "accept failure %d\n", newbie->fd);
					exit(1);
				}

				if (getsockopt(newbie->fd, SOL_SOCKET, SO_INCOMING_CPU, &cpu, &size) < 0) {
					perror("getsockopt:");
					exit(1);
				}

				owner = threads[cpu];
				if (owner != me) {
					pthread_mutex_lock(&owner->incoming.lock);
					newbie->next = owner->incoming.list;
					owner->incoming.list = newbie;
					pthread_mutex_unlock(&owner->incoming.lock);

					add_write_request(owner->event_fd, u, sizeof(*u), EV_WRITE, 1);
				} else {
					conns[newbie->fd] = conn = new_conn(newbie->fd);
					free(newbie);
					add_read_request(conn->fd, conn->buffer, msg_size, SOCK_READ);
				}
				add_accept_request(me->listen_sock, &client_addr, &client_addr_len);
				break;

			case SOCK_READ:
				ret = cqe->res;

				conn = conns[info.fd];

				if (ret <= 0) {
					on_close(conn);
					break;
				}

				if (conn->cursor + ret == msg_size) {
					conn->cursor = 0;
					add_write_request(conn->fd, conn->buffer, msg_size, SOCK_WRITE, 0);
				} else {
					conn->cursor += ret;
					add_read_request(conn->fd, &(conn->buffer[conn->cursor]), msg_size - conn->cursor, SOCK_READ);
				}

				break;

			case EV_READ:
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

					add_read_request(conn->fd, conn->buffer, msg_size, SOCK_READ);
					pthread_mutex_lock(&me->incoming.lock);
				}
				pthread_mutex_unlock(&me->incoming.lock);
				break;

			case SOCK_WRITE:
				ret = cqe->res;

				conn = conns[info.fd];

				if (ret <= 0) {
					on_close(conn);
					break;
				}

				if (conn->cursor + ret == msg_size) {
					conn->cursor = 0;
					add_read_request(conn->fd, conn->buffer, msg_size, SOCK_READ);
				} else {
					conn->cursor += ret;
					add_write_request(conn->fd, &(conn->buffer[conn->cursor]), msg_size - conn->cursor, SOCK_WRITE, 0);
				}
				break;

			case EV_WRITE:
				free(info.to_free);
				break;
			}

		}
		io_uring_cq_advance(&ring, count);
	}
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

