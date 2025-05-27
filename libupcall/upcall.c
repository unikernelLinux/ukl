/**
 * Upcall support library
 * Copyright (C) 2024 Eric B Munson
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

/**
 *
 * This is a consolidation of the code needed to interact with the upcall
 * mechanism found in UKL. We have the event loop where we park execution
 * contexts when they are not in use, the API for setiing up the system, and
 * an API for adding and removing event subscriptions.
 */

#define _GNU_SOURCE

#include <pthread.h>
#include <sched.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

#include "upcall.h"

struct worker {
	int dying;
	pthread_t me;
	void (*setup_fn)(void *);
	void * setup_arg;
};

static unsigned long setup_count;

static struct worker *workers;

static pthread_cond_t setup_cond = PTHREAD_COND_INITIALIZER;
static pthread_mutex_t setup_lock = PTHREAD_MUTEX_INITIALIZER;

static void wait_for_setup()
{
	pthread_mutex_lock(&setup_lock);
	setup_count++;
	while (setup_count)
		pthread_cond_wait(&setup_cond, &setup_lock);
	pthread_mutex_unlock(&setup_lock);
}

void register_ukl_handler_task(void);
void *workitem_queue_consume_event(void);
void ukl_worker_sleep(void);
void event_work_done(struct work_item *work);

static void *park_context(void * my_worker)
{
	void *data;
	struct worker *me = (struct worker*)my_worker;
	struct work_item *event;

	// Run the setup function if present
	if (me->setup_fn)
		me->setup_fn(me->setup_arg);

	// Register as an event excution context and pause until everyone is ready
	register_ukl_handler_task();
	wait_for_setup();

	while (!me->dying) {
		data = workitem_queue_consume_event();
		if (data) {
			event = (struct work_item *)data;
			event->work_fn(event->arg);
			event_work_done(event);
		} else {
			ukl_worker_sleep();
		}
	}

	return NULL;
}

static void parse_clusters(size_t num_cpus, int queues, cpu_set_t **clusters)
{
	int lead_cpu[queues];
	int next_cluster = 0;
	char cpu[256] = {0};
	char line[1024];
	int entry, fd;
	char *comma;

	memset(lead_cpu, -1, queues * sizeof(int));
	
	for (size_t i = 0; i < num_cpus; i++) {
		snprintf(cpu, 256, "/sys/devices/system/cpu/cpu%ld/topology/cluster_cpus_list", i);
		fd = open(cpu, O_RDONLY);
		if (fd < 0) {
			perror("Failed to open cluster_cpus_list for reading\n");
			fprintf(stderr, "Tried to read '%s'\n", cpu);
			return;
		}
		
		memset(line, 0, 1024);
		if (read(fd, line, 1023) < 0) {
			perror("Failed to read\n");
			close(fd);
			return;
		}
		close(fd);

		entry = strtol(line, NULL, 10);
		if (entry == i) {
			if (next_cluster >= queues) {
				// Yikes
				fprintf(stderr, "We think there should be more clusters than exist\n");
				return;
			}

			lead_cpu[next_cluster] = i;
			clusters[next_cluster] = CPU_ALLOC(num_cpus);
			CPU_ZERO_S(CPU_ALLOC_SIZE(num_cpus), clusters[next_cluster]);
			CPU_SET_S(i, CPU_ALLOC_SIZE(num_cpus), clusters[next_cluster]);
			next_cluster++;
		} else {
			int my_cluster;
			for (my_cluster = 0; my_cluster < next_cluster; my_cluster++) {
				if (lead_cpu[my_cluster] == entry)
					break;
			}

			if (my_cluster >= next_cluster) {
				fprintf(stderr, "Failed to find a cluster for %ld\n", i);
				exit(1);
			}

			CPU_SET_S(i, CPU_ALLOC_SIZE(num_cpus), clusters[my_cluster]);
		}
	}
}

int init_upcall_handler(int concurrency_model);

/**
 * Setup the event handler for execution
 *
 * This funciton must be called prior to registering any events of interest. 
 * @int concurrency_model The concurrency model to be used, should be from
 *     @enum concurrency_models.
 * @unsigned int thrd_cnt The number of threads, per event queue, to be created
 *     and ready for event handling.
 * @void (*setup_fn)(void) An optional setup function that will be run on each
 *     worker thread before they start waiting for events
 * @return 0 on success ERRNO on error.
 */
int init_event_handler(enum concurrency_models evqueue_model, unsigned int thrd_cnt, void (*setup_fn)(void*), void *setup_arg)
{
	pthread_attr_t attrs;
	cpu_set_t *event_cpu;
	cpu_set_t **clusters = NULL;
	int ctx_cnt;
	int queues;
	size_t num_cpus = sysconf(_SC_NPROCESSORS_ONLN);

	if (evqueue_model < 0 || evqueue_model >= NRMODELS)
		return EINVAL;

	queues = init_upcall_handler(evqueue_model);
	clusters = calloc(queues, sizeof(cpu_set_t *));

	switch (evqueue_model) {
	case PCPU:
		for (int i = 0; i < queues; i++) {
			clusters[i] = CPU_ALLOC(num_cpus);
			CPU_ZERO_S(CPU_ALLOC_SIZE(num_cpus), clusters[i]);
			CPU_SET_S(i, CPU_ALLOC_SIZE(num_cpus), clusters[i]);
		}
		break;
		
	case CLUSTER:
		parse_clusters(num_cpus, queues, clusters);
		break;

	case SINGLE:
		clusters[0] = CPU_ALLOC(num_cpus);
		CPU_ZERO_S(CPU_ALLOC_SIZE(num_cpus), clusters[0]);
		for (unsigned long i = 0; i < num_cpus; i++)
			CPU_SET_S(i, CPU_ALLOC_SIZE(num_cpus), clusters[0]);
		break;

	default:
		fprintf(stderr, "Invalid concurrency model specified\n");
		return EINVAL;
	}

	ctx_cnt = queues * thrd_cnt;

	workers = calloc(ctx_cnt, sizeof(struct worker));
	if (!workers) {
		free(clusters);
		return ENOMEM;
	}

	if (pthread_attr_init(&attrs)) {
		perror("Failed to initialize pthread_attrs");
		free(clusters);
		return EINVAL;
	}

	if (pthread_attr_setdetachstate(&attrs, PTHREAD_CREATE_DETACHED)) {
		perror("Cannot set detatched state attr");
		free(clusters);
		return EINVAL;
	}

	for (unsigned long i = 0; i < queues; i++) {
		unsigned int index = i * thrd_cnt;

		if (pthread_attr_setaffinity_np(&attrs, CPU_ALLOC_SIZE(num_cpus), clusters[i])) {
			perror("Cannot set affinity in attr");
			free(clusters);
			return EINVAL;
		}

		for (unsigned int j = 0; j < thrd_cnt; j++) {
			int index = i * thrd_cnt + j;
			workers[index].dying = 0;
			workers[index].setup_fn = setup_fn;
			workers[index].setup_arg = setup_arg;
			if (pthread_create(&(workers[index].me), &attrs, park_context, &workers[index])) {
				perror("Failed to create event thread");
				free(clusters);
				return EINVAL;
			}
		}
	}

	for (unsigned long i = 0; i < queues; i++)
		CPU_FREE(clusters[i]);
	free(clusters);

	// Wait for setup to finish with rendezvous
	pthread_mutex_lock(&setup_lock);
	while (setup_count < ctx_cnt) {
		pthread_mutex_unlock(&setup_lock);
		pthread_mutex_lock(&setup_lock);
	}
	setup_count = 0;
	pthread_mutex_unlock(&setup_lock);
	pthread_cond_broadcast(&setup_cond);

	return 0;
}

extern struct subscription_manager *ukl_subs;
extern int register_subscription(struct subscription_manager *mgr, int fd, __poll_t events,
				void(work_fn)(void*), void *arg);
/**
 * Register a handler for an event.
 *
 * Register a function (@work_fn) to be called with the argument @arg when the
 * specified @event occurs on the requested file descriptor @fd.
 * @int fd The file descriptor to watch for events
 * @enum events event The event of interest
 * @void (*work_fn)(void *arg) The function to be run when the specified event
 *      occurs
 * @void *arg The argument to be passed to @work_fn, can be NULL.
 *
 * @Returns 0 on success, ERRNO on failure.
 */
int register_event(int fd, __poll_t events, void (*work_fn)(void *arg), void *arg)
{
	/*
	 * TODO: We need to handle various event subscriptions and maintain a data structure of
	 * them like epoll does.
	 */
	if (events & ~(UPCALL_VALID))
		return EINVAL;

	if (!work_fn)
		return EINVAL;

	return register_subscription(ukl_subs, fd, events, work_fn, arg);
}

extern int remove_subscription(struct subscription_manager *mgr, int fd, __poll_t events);

int unregister_event(int fd, __poll_t events)
{
	if (events & ~(UPCALL_VALID))
		return EINVAL;

	if (fd < 0)
		return EINVAL;

	return remove_subscription(ukl_subs, fd, events);
}
