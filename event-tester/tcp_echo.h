/*
 * How the structures and function signatures which are shared between event
 * implementations.
 */

#ifndef _TCP_ECHO_H_
#define _TCP_ECHO_H_

#include <stdint.h>
#include <pthread.h>

#define UKL_USER
#include "tsc_logger.h"
#undef UKL_USER

#include "echo_defs.h"

/*
 * 
 */
struct transaction {
	struct transaction *next;
	struct TscLog *accept_log;
	struct TscLog *work_log;
	struct TscLog *close_log;
};

struct connection {
	uint64_t cursor;
	uint8_t *buffer;
	struct TscLog *accept_log;
	struct TscLog *work_log;
	uint64_t event_count;
	uint64_t port;
	int state;
	int fd;
	pthread_mutex_t lock;
};

struct waiting_conn {
	struct TscLog *accept_log;
	struct waiting_conn *next;
	int fd;
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
	int listen_sock;
	int index;
	int perf_fds[TOTAL_EVENTS];
	int perf_ids[TOTAL_EVENTS];
	size_t accept_count;	// The number of accepts this thread handled
	size_t conn_count;	// The number of connections this thread handled (post accept)
	char perf_line[23 + 21 * (TOTAL_EVENTS + 2)]; // We use TOTAL_EVENTS + 2 for the previous counters
	struct transaction *log_head;
};

struct buffer_entry {
	struct buffer_entry *next;
	uint64_t alloc_cpu;
	uint8_t buffer[];
};

struct buffer_cache {
	struct buffer_entry *head;
	struct buffer_entry *tail;
	uint64_t entry_sz;
};

struct buffer_cache* init_cache(size_t entry_sz, size_t init_count, int cpu);
void *cache_alloc(struct buffer_cache *cache, int cpu);
void cache_free(struct buffer_cache *cache, void *buff, int cpu);

struct read_format {
	uint64_t nr;
	struct {
		uint64_t value;
		uint64_t id;
	} values[TOTAL_EVENTS];
};

void on_accept(void *arg);

int close_from_io(struct connection *conn);

void on_read(void *arg);

void setup_perf(int *fds, int *ids, int cpu);

void init_threads(uint64_t nr_cpus);

struct connection *new_conn(int fd);

void on_close(void *arg);

#endif

