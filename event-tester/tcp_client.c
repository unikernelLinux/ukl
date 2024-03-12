#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <getopt.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <time.h>
#include <limits.h>

extern int errno;
extern int optind;
extern char *optarg;

static void timediff(struct timespec *result, struct timespec *early, struct timespec *later)
{
	result->tv_sec = later->tv_sec - early->tv_sec;
	result->tv_nsec = later->tv_nsec - early->tv_nsec;
	if (result->tv_nsec < 0) {
		result->tv_nsec += 1000000000;
		result->tv_sec--;
	}
}

struct sockaddr_in addr;
unsigned long *all_runs;

static void send_msg(long index, int delay)
{
	int sock;
	char *msg = "This is a small-ish message that we are sending";
	char buf[4096];
	unsigned long run;
	struct timespec start, end, diff;

	sock = socket(PF_INET, SOCK_STREAM, 0);
	if (sock < 0) {
		perror("socket");
		exit(EXIT_FAILURE);
	}

	if(clock_gettime(CLOCK_MONOTONIC, &start)) {
		perror("Clock failure");
		exit(EXIT_FAILURE);
	}

	if (connect(sock, (struct sockaddr *)&addr, sizeof(addr))) {
		perror("connect");
		exit(EXIT_FAILURE);
	}

	if (delay) {
		printf("Delaying\n");
		sleep(1);
	}

	sprintf(buf, "%s %lu", msg, index);

	write(sock, buf, strlen(buf) + 1);
	buf[0] = '\0';
	read(sock, buf, 4096);

	if (clock_gettime(CLOCK_MONOTONIC, &end)) {
		perror("Clock failure");
		exit(EXIT_FAILURE);
	}
	timediff(&diff, &start, &end);
	run = 0;
	if (diff.tv_sec)
		run += (1000000000 * diff.tv_sec);
	run += diff.tv_nsec;
	all_runs[index] = run;

	close(sock);
}

static int comp(const void *e1, const void *e2)
{
	int l = *((int*)e1);
	int r = *((int*)e2);
	if (l > r)
		return 1;
	if (l < r)
		return -1;
	return 0;
}

int main(int argc, char **argv)
{
	int ret = 0;
	int index = 0;
	char *host_ip = NULL;
	int port = 7777;
	int delay = 0;
	unsigned long i = 0;
	long count = 1000;
	unsigned long total_time = 0;
	char *csv_path = NULL;
	int fd;

	const char *opts = "hH:p:dc:C:";
	struct option long_opts[] = {
		{ "host",	required_argument,	NULL, 'H' },
		{ "help",	no_argument,		NULL, 'h' },
		{ "port",	required_argument,	NULL, 'p' },
		{ "delay",	no_argument,		NULL, 'd' },
		{ "count",	required_argument,	NULL, 'c' },
		{ "csv",	required_argument,	NULL, 'C' },
		{0}
	};

	while (-1 != (ret = getopt_long(argc, argv, opts, long_opts, &index))) {
		switch (ret) {
		case 'H':
			host_ip = optarg;
			break;
		case 'p':
			port = atoi(optarg);
			break;
		case 'd':
			delay = 1;
			break;
		case 'c':
			count = atoi(optarg);
			break;
		case 'C':
			csv_path = optarg;
			break;
		default:
			printf("Unknown arg\n");
			exit(EXIT_FAILURE);
		}
	}

	if (!host_ip) {
		printf("Missing required argument -H/--host xxx.xxx.xxx.xxx\n");
		exit(EXIT_FAILURE);
	}


	addr.sin_family = AF_INET;
	addr.sin_port = htons(port);
	addr.sin_addr.s_addr = inet_addr(host_ip);
	memset(addr.sin_zero, '\0', sizeof(addr.sin_zero));

	all_runs = malloc(sizeof(unsigned long) * count);
	if (!all_runs) {
		perror("OOM");
		exit(EXIT_FAILURE);
	}

	for(i = 0; i < count; i++) {
		send_msg(i, delay);
	}

	total_time = 0;
	for (i = 0; i < count; i++) {
		total_time += all_runs[i];
	}

	if (csv_path) {
		fd = creat(csv_path, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
		dprintf(fd, "Run,Latency\n");
		for (i = 0; i < count; i++) {
			dprintf(fd, "%lu,%lu\n", i + 1, all_runs[i]);
		}
		close(fd);
	}

	qsort(all_runs, count, sizeof(unsigned long), comp);

	printf("Average request latency: %lu\n", total_time / count);
	printf("Latency break down:\n");
	printf("p0\t%lu\np50\t%lu\np75\t%lu\np90\t%lu\np99\t%lu\np99.9\t%lu\np100\t%lu\n",
			all_runs[0], all_runs[count / 2], all_runs[3 * count / 4],
			all_runs[9 * count / 10], all_runs[99 * count / 100],
			all_runs[999 * count / 1000], all_runs[count - 1]);
	return 0;
}

