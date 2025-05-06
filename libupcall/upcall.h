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

#ifndef UPCALL_H_
#define UPCALL_H_

struct work_item {
	void *arg;
	void (*work_fn)(void *arg);
};

enum concurrency_models {
	PCPU,
	CLUSTER,
	SINGLE,
	NRMODELS
};

enum events {
	READ	= 0x00000001,
	WRITE	= 0x00000002,
	CLOSE	= 0x00000004,
	HUP	= 0x00000008,
	ERROR	= 0x00000010,
	MAX	= 0x00000020
};

/**
 * Setup the event handler for execution
 *
 * This funciton must be called prior to registering any events of interest. 
 * @int concurrency_model The concurrency model to be used, should be from
 *     @enum concurrency_models.
 * @unsigned int thrd_cnt The number of threads, per event queue, to be created
 *     and ready for event handling.
 * @void (*setup_fn)(void) An optional setup function that will be run on each
 *     worker thread before they start waiting for events, pass NULL for no setup
 * @return 0 on success ERRNO on error.
 */
int init_event_handler(enum concurrency_models evqueue_model, unsigned int thrd_cnt, void (*setup_fn)(void));

/**
 * Register a handler for an event.
 *
 * Register a function (@work_fn) to be called with the argument @arg when the
 * specified @event occurs on the requested file descriptor @fd.
 * @int fd The file descriptor to watch for events
 * @int event The event of interest, must be either UPCALL_READ or UPCALL_WRITE
 * @void (*work_fn)(void *arg) The function to be run when the specified event
 * 	occurs
 * @void *arg The argument to be passed to @work_fn, can be NULL.
 *
 * @Returns 0 on success, ERRNO on failure.
 */
int register_event(int fd, enum events event, void (*work_fn)(void *arg), void *arg);

int unregister_event(int fd, enum events event);

#endif
