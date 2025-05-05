/*
 * How the structures and function signatures which are shared between event
 * implementations.
 */

#ifndef _TCP_ECHO_H_
#define _TCP_ECHO_H_

#include <stdint.h>

#define UKL_USER
#include "tsc_logger.h"
#undef UKL_USER

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

#ifndef MAX_TRANSACTIONS
#define MAX_TRANSACTIONS 5000
#endif

#define TOTAL_EVENTS 5
#define CONN_EVENT (uint64_t)(1)
#define CONN_MASK (uint64_t)(0xFFFFFFFF)
#define STATS_EVENT (CONN_EVENT << 32)
#define STATS_MASK (CONN_MASK << 32)

struct transaction {
	struct TscLog *accept_log;
	struct TscLog *work_log;
};

struct connection {
	int fd;
	size_t cursor;
	uint8_t *buffer;
	struct TscLog *accept_log;
	struct TscLog *work_log;
};

struct waiting_conn {
	int fd;
	struct TscLog *accept_log;
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
	size_t accept_count;	// The number of accepts this thread handled
	size_t conn_count;	// The number of connections this thread handled (post accept)
	struct TscLog *accept_log;
	char perf_line[23 + 21 * (TOTAL_EVENTS + 2)]; // We use TOTAL_EVENTS + 2 for the previous counters
	size_t next_transaction;
	struct transaction transaction_log[MAX_TRANSACTIONS];
};

struct read_format {
	uint64_t nr;
	struct {
		uint64_t value;
		uint64_t id;
	} values[TOTAL_EVENTS];
};

void on_accept(int listen_sock);

void on_read(struct connection *conn);

void on_event(void);

void setup_perf(int *fds, int *ids, int cpu);

void init_threads(uint64_t nr_cpus);

void write_perf_stats(void);

struct connection *new_conn(int fd);

void on_close(int closed_fd);

#endif

