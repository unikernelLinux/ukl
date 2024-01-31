#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>

struct work_item {
	void *arg;
	void *result;
	bool done;
};

struct worker {
	bool dying;
};

void *handle_ukl_event(void *data)
{
	unsigned char buf[4096] = {0};
	int fd = *(int*)data;
	int ret = read(fd, buf, 4096);
	
	printf("Got '%s'\n", buf);
	return NULL;
}

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
			work->result = ret;
			work->done = true;
		} else {
			ukl_worker_sleep();
		}
	}
}

int main(int argc, char **argv)
{
	pthread_t event;
	pthread_attr_t event_attrs;
	struct addrinfo hints, *res;
	struct worker worker;
	int ret;
	int sock;
	int yes = 1;

	worker.dying = false;

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

	if (pthread_create(&event, &event_attrs, thread_register, &worker))
	{
		perror("Failed to create event thread");
		exit(1);
	}

	memset(&hints, 0, sizeof(hints));
	hints.ai_family = AF_INET;
	hints.ai_socktype = SOCK_DGRAM;
	hints.ai_flags = AI_PASSIVE;
	getaddrinfo(NULL, "7777", &hints, &res);

	sock = socket(res->ai_family, res->ai_socktype, res->ai_protocol);
	if (setsockopt(sock, SOL_SOCKET, SO_REUSEADDR, &yes, sizeof(yes)) == -1) {
		perror("sockopt");
		exit(1);
	}

	bind(sockfd, res->ai_addr, res->ai_addrlen);

	// Setup event handler
	do_event_ctl(sock, &sock);

	while(1)
	{
		sleep(1);
	}

	return 0;
}
