#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>

struct work_item {
	void *arg;
	void *result;
	int done;
};

struct worker {
	int dying;
};

void *handle_ukl_event(void *data)
{
	unsigned char buf[4096] = {0};
	int fd = *(int*)data;
	int ret = read(fd, buf, 4096);
	
	printf("Got '%s'\n", buf);
	return NULL;
}

void register_ukl_handler_task(void);
void *workitem_queue_consume_event(void);
void ukl_worker_sleep(void);
void *do_event_ctl(int, void*);
void init_event_workitem_queue(void);

void *worker_thread(void *arg)
{
	void *data;
	struct worker *worker = (struct worker*)arg;
	void *ret = NULL;

	register_ukl_handler_task();

	while (!worker->dying) {
		data = workitem_queue_consume_event();
		if (data) {
			ret = handle_ukl_event(data);
		} else {
			ukl_worker_sleep();
		}
	}
}

int main(int argc, char **argv)
{
	pthread_t event;
	pthread_attr_t event_attrs;
	struct sockaddr_storage their_addr;
	socklen_t addr_size;
	struct addrinfo hints, *res;
	struct worker worker;
	int ret;
	int sock;
	int yes = 1;
	int conn;

	worker.dying = 0;

	init_event_workitem_queue();

	if (pthread_attr_init(&event_attrs))
	{
		perror("Failed to initialize pthread_attrs");
		exit(1);
	}

	if (pthread_attr_setdetachstate(&event_attrs, PTHREAD_CREATE_DETACHED))
	{
		perror("Cannot set detatched state attr");
		exit(1);
	}

	if (pthread_create(&event, &event_attrs, worker_thread, &worker))
	{
		perror("Failed to create event thread");
		exit(1);
	}

	memset(&hints, 0, sizeof(hints));
	hints.ai_family = AF_INET;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_flags = AI_PASSIVE;
	getaddrinfo(NULL, "7777", &hints, &res);

	sock = socket(res->ai_family, res->ai_socktype, res->ai_protocol);
	if (setsockopt(sock, SOL_SOCKET, SO_REUSEADDR, &yes, sizeof(yes)) == -1) {
		perror("sockopt");
		exit(1);
	}

	bind(sock, res->ai_addr, res->ai_addrlen);
	listen(sock, 16);
	addr_size = sizeof their_addr;
	conn = accept(sock, (struct sockaddr *)&their_addr, &addr_size);

	// Setup event handler
	do_event_ctl(conn, &conn);

	while(1)
	{
		sleep(1);
	}

	return 0;
}
