#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <time.h>
#include <math.h>
#include <errno.h>
#include <unistd.h>
#include <sys/poll.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <getopt.h>
#include <sys/time.h>

#define DEFAULT_PORT 8000

#define NUM_PARTIES 3

#ifdef UKL_BYPASS
extern void set_bypass_limit(int val);
extern void set_bypass_syscall(int val);
#else
#define set_bypass_limit(X) do {} while(0)
#define set_bypass_syscall(X) do {} while(0)
#endif

#ifdef TCP_TRACE
struct Record
{
        struct timespec start;
        struct timespec end;
        size_t size;
};

#define RECORDS 1000

struct Record *sends;
struct Record *receives;

size_t send_count = 0;
size_t receive_count = 0;
#endif


struct bench_config {
	unsigned int rank;
	int initialized;
	unsigned short port;
	char **ip_list;
};

extern char *optarg;
extern int optind, opterr, optopt;

struct bench_config config;

int succ_sock, pred_sock;

const static char *opt_str = "r:c:p:i:h";

const static struct option opts[] = {
	{ "rank",    required_argument, NULL, 'r' },
	{ "port",    required_argument, NULL, 'p' },
	{ "ips",     required_argument, NULL, 'i' },
	{ "help",    no_argument,       NULL, 'h' },
	{ NULL,      0,                 NULL, 0 }
};

static void print_usage(const char *name)
{
	printf("Usage: %s <opts>\n", name);
	printf("<opts>:\n");
	printf("    -r|--rank     The rank of this node (from 0 to parties - 1)\n");
	printf("    -p|--port     The to use for internode communication, defaults to 8000\n");
	printf("    -i|--ips      Comma delimited list of ip addresses in rank order\n");
	printf("    -h|--help     Print this message\n");
};

static int parse_opts(int argc, char **argv)
{
	int c;
    char *haystack = NULL;
    unsigned int i;

    // Set the port here, if the user specified a value this will be overwritten
    config.port = DEFAULT_PORT;
    int opt_index = 0;
    while (1)
    {
        c = getopt_long(argc, argv, opt_str, opts, &opt_index);
        if (c == -1)
            break;

        switch (c)
        {
        case 'r':
            config.rank = atoi(optarg);
            break;

        case 'p':
            config.port = atoi(optarg);
            break;

	case 'i':
            if (optarg == NULL)
            {
                printf("Missing argument to --ips switch\n");
                print_usage(argv[0]);
                return -1;
            }

            haystack = optarg;
            break;

        case 'h':
        case '?':
            print_usage(argv[0]);
            return -1;

        default:
            printf("Unknown option -%o\n", c);
            print_usage(argv[0]);
            return -1;
        }
    }

    if (haystack != NULL)
    {
        config.ip_list = calloc(NUM_PARTIES, sizeof(char*));
        if (config.ip_list == NULL)
        {
            printf("Failed to allocate memory for ip list\n");
            return -1;
        }
        char *next = NULL;
        i = 0;
        do
        {
            config.ip_list[i] = haystack;
            i++;
            if (i >= NUM_PARTIES)
                break;
            next = strchr(haystack, ',');
            if (next != NULL)
            {
                *next = '\0';
                haystack = next + 1;
            }
        } while(next != NULL);
    }

    if (config.ip_list == NULL)
    {
        printf("Invalid configuration, you must specify node rank and the ip list\n");
        print_usage(argv[0]);
        return -1;
    }

    config.initialized = 1;

    return 0;
}

static char *get_address(unsigned int rank)
{
	if (rank < NUM_PARTIES)
	{
		return config.ip_list[rank];
	}
	else
	{
		printf("No such rank!");
		return NULL;
	}

	return NULL;
}

static int get_rank()
{
	return config.rank;
}

static int get_succ()
{
	return (get_rank() + 1) % NUM_PARTIES;
}

static int get_pred()
{
	return ((get_rank() + NUM_PARTIES) - 1) % NUM_PARTIES;
}

static int get_socket(unsigned int party_rank)
{
	if (party_rank == get_succ())
	{
		return succ_sock;
	}
	else
	{
		return pred_sock;
	}
}

static int tcp_connect(int dest)
{
	int sock = 0, option = 1;
	struct sockaddr_in serv_addr;
	int tries = 0;

	if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0)
	{
		perror("socket(): ");
		return -1;
	}

	serv_addr.sin_family = AF_INET;
	serv_addr.sin_port = htons(config.port);

	if (inet_pton(AF_INET, get_address(dest), &serv_addr.sin_addr) <= 0)
	{
		perror("inet_pton(): ");
		return -1;
	}

	int result = setsockopt(sock, IPPROTO_TCP, TCP_NODELAY, &option, sizeof(int));
	if (result)
	{
		perror("Error setting TCP_NODELAY ");
		return -1;
	}

	while (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
	{
		if (tries < 10 &&
			(errno == ECONNREFUSED || errno == EINTR || errno == ETIMEDOUT ||
			 errno == EAGAIN || errno == ENETUNREACH || errno == ETIMEDOUT ||
			 errno == EHOSTUNREACH))
		{
			// Try and exponential back-off to wait for the other side to come up
			perror("Connection failed, retrying ");
			sleep((int)pow(2, tries));
			tries++;
		}
		else
		{
			perror("Connection Failed ");
			return -1;
		}
	}

	succ_sock = sock;
	return 0;
}

static int tcp_accept(int source)
{

	int server_fd, new_socket, valread;
	struct sockaddr_in address;
	int opt = 1;
	int addrlen = sizeof(address);

	// Creating socket file descriptor
	if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0)
	{
		perror("socket failed");
		exit(EXIT_FAILURE);
	}

	int result = setsockopt(server_fd, IPPROTO_TCP, TCP_NODELAY, &opt, sizeof(int));
	if (result)
	{
		perror("Error setting TCP_NODELAY ");
		exit(EXIT_FAILURE);
	}

	// Forcefully attaching socket to the port
	if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR,
		&opt, sizeof(opt)))
	{
		perror("setsockopt");
		exit(EXIT_FAILURE);
	}
	address.sin_family = AF_INET;
	address.sin_addr.s_addr = INADDR_ANY;
	address.sin_port = htons(config.port);

	// Forcefully attaching socket to the port
	if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0)
	{
		perror("bind failed");
		exit(EXIT_FAILURE);
	}
	if (listen(server_fd, 3) < 0)
	{
		perror("listen");
		exit(EXIT_FAILURE);
	}
	if ((new_socket = accept(server_fd, (struct sockaddr *)&address,
 		(socklen_t *)&addrlen)) < 0)
	{
		perror("accept");
		exit(EXIT_FAILURE);
	}

	pred_sock = new_socket;
	return 0;
}

int bp_count = 0;
static int base_send(void *buf, int count, int dest, int data_size);
static int base_recv(void *buf, int count, int source, int data_size);

static int tcp_init()
{
	size_t test = DEFAULT_PORT, rec = 0;

	/* init party 0 last */
	if (config.rank == 0)
	{
		tcp_connect(get_succ());
		tcp_accept(get_pred());
	}
	else
	{
		tcp_accept(get_pred());
		tcp_connect(get_succ());
	}

#ifdef TRACE_TCP
	sends = malloc(sizeof(struct Record) * RECORDS);
	receives = malloc(sizeof(struct Record) * RECORDS);

	if (!sends || !receives)
	{
		exit(1);
	}

	memset(sends, 0, sizeof(struct Record) * RECORDS);
	memset(receives, 0, sizeof(struct Record) * RECORDS);
#endif

	if (base_send(&test, 1, get_succ(), sizeof(size_t)))
	{
		printf("Failed to send test value, connection failed\n");
		exit(1);
	}

	if (base_recv(&rec, 1, get_pred(), sizeof(size_t)) || rec != DEFAULT_PORT)
	{
		printf("Failed to receive test value, expected %lu got %lu\n",
			DEFAULT_PORT, rec);
		exit(1);
	}

	set_bypass_limit(10);

	return 0;
}

static int base_send(void *buf, int count, int dest, int data_size)
{
	ssize_t n;
	void *p = buf;

	count = count * data_size;
	while (count > 0)
	{
#ifdef TRACE_TCP
		if (send_count < RECORDS)
		{
			clock_gettime(CLOCK_MONOTONIC, &sends[send_count].start);
				sends[send_count].size = count;
		}
#endif

		n = send(get_socket(dest), p, count, 0);
		if (n <= 0)
		{
			if (errno == EAGAIN || errno == EWOULDBLOCK || errno == EINTR || errno == EIO)
			{
				// In these cases we really should try again
				perror("Error returned from send, retrying");
				continue;
			}
			else
			{
				perror("Failed to send");
				return -1;
			}
		}

#ifdef TRACE_TCP
		if (send_count < RECORDS)
		{
			clock_gettime(CLOCK_MONOTONIC, &sends[send_count].end);
				send_count++;
		}
#endif

		p += n;
		count -= n;
	}

	return 0;
}

#ifdef UKL_SHORTCUT
extern int shortcut_tcp_sendmsg(int fd, struct iovec *iov);
#endif

static int tcp_send(void *buf, int count, int dest, int data_size)
{
#ifdef UKL_SHORTCUT
	ssize_t n = 0;
	void *p = buf;
	struct iovec iov;

	set_bypass_syscall(1);
	count = count * data_size;
	while (count > 0)
	{

#ifdef TRACE_TCP
		if (send_count < RECORDS)
		{
			clock_gettime(CLOCK_MONOTONIC, &sends[send_count].start);
			sends[send_count].size = count;
		}
#endif

		iov.iov_base = (void *)p;
		iov.iov_len  = count;
		n = shortcut_tcp_sendmsg(get_socket(dest), &iov);

		if (n == -EAGAIN)
		{
			return base_send(p, 1, dest, count);
		}

#ifdef TRACE_TCP
		if (send_count < RECORDS)
		{
			clock_gettime(CLOCK_MONOTONIC, &sends[send_count].end);
			send_count++;
		}
#endif

		if (n <= 0) {
			printf("Error returned by tcp_sendmsg: %d\n", n);
			return -1;
		}
		p += n;
		count -= n;
	}

	return 0;
#else
	int ret = 0;

	set_bypass_syscall(1);
	ret = base_send(buf, count, dest, data_size);
	set_bypass_syscall(0);

	return ret;
#endif //UKL_SHORTCUT
}

static int base_recv(void *buf, int count, int source, int data_size)
{
	ssize_t n;
	void *p = buf;

	count = count * data_size;
	while (count > 0)
	{
#ifdef TRACE_TCP
		if (receive_count < RECORDS)
		{
			clock_gettime(CLOCK_MONOTONIC, &receives[receive_count].start);
			receives[receive_count].size = count;
		}
#endif
		n = read(get_socket(source), p, count);
		if (n <= 0)
		{
			if (errno == EAGAIN || errno == EWOULDBLOCK || errno == EINTR || errno == EIO)
			{
				// In these cases we really should try again
				perror("Error returned from read, retrying");
				continue;
			}
			else
			{
				perror("Failed to read");
				return -1;
			}
		}
#ifdef TRACE_TCP
		if (receive_count < RECORDS)
		{
			clock_gettime(CLOCK_MONOTONIC, &receives[receive_count].end);
			receive_count++;
		}
#endif
		p += n;
		count -= n;
	}

	return 0;
}

#ifdef UKL_SHORTCUT
extern int shortcut_tcp_recvmsg(int fd, struct iovec *iov);
#endif

static int tcp_recv(void *buf, int count, int source, int data_size)
{
#ifdef UKL_SHORTCUT
	ssize_t n = 0, i = 0;
	void *p = buf;
	struct iovec iov;

	count = count * data_size;
	while (count > 0)
	{
#ifdef TRACE_TCP
		if (receive_count < RECORDS)
		{
			clock_gettime(CLOCK_MONOTONIC, &receives[receive_count].start);
			receives[receive_count].size = count;
		}
#endif
		iov.iov_base = (void *)p;
		iov.iov_len  = count;

		n = shortcut_tcp_recvmsg(get_socket(source), &iov);

		if (n == -EAGAIN)
		{
			return base_recv(p, 1, source, count);
		}

#ifdef TRACE_TCP
		if (receive_count < RECORDS)
		{
			clock_gettime(CLOCK_MONOTONIC, &receives[receive_count].end);
			receive_count++;
		}
#endif

		if (n <= 0) {
			printf("Error returned by tcp_recvmsg(): %d\n", n);
			return -1;
		}

		p += n;
		count -= n;
	}

	return 0;
#else
	int ret = 0;

	set_bypass_syscall(1);
	ret = base_recv(buf, count, source, data_size);
	set_bypass_syscall(0);

	return ret;
#endif //UKL_SHORTCUT
}

static void calc_diff(struct timespec *diff, struct timespec *bigger, struct timespec *smaller)
{
	if (smaller->tv_nsec > bigger->tv_nsec)
	{
		diff->tv_nsec = 1000000000 + bigger->tv_nsec - smaller->tv_nsec;
		diff->tv_sec = bigger->tv_sec - 1 - smaller->tv_sec;
	}
	else
	{
		diff->tv_nsec = bigger->tv_nsec - smaller->tv_nsec;
		diff->tv_sec = bigger->tv_sec - smaller->tv_sec;
	}
}

static int tcp_finalize(){
#ifdef TRACE_TCP
	int i;
	struct timespec diff;
	FILE *snds = fopen("/sends.csv", "w");
	FILE *recvs = fopen("/receives.csv", "w");

	printf("Saw %ld sends and %ld receives\n", send_count, receive_count);

	fprintf(snds, "Time,Size\n");
	fprintf(recvs, "Time,Size\n");
	for (i = 0; i < send_count; i++)
	{
		calc_diff(&diff, &sends[i].end, &sends[i].start);
		fprintf(snds, "%ld.%09ld,%ld\n", diff.tv_sec, diff.tv_nsec, sends[i].size);
	}
	for (i = 0; i < receive_count; i++)
	{
		calc_diff(&diff, &receives[i].end, &receives[i].start);
		fprintf(recvs, "%ld.%09ld,%ld\n", diff.tv_sec, diff.tv_nsec, receives[i].size);
	}

	fflush(snds);
	fflush(recvs);

	free(sends);
	free(receives);

	fclose(snds);
	fclose(recvs);
#endif

	close(succ_sock);
	close(pred_sock);
}

int main(int argc, char **argv)
{
	size_t iters;
	struct timeval begin, end;
	long seconds, micro;
	double elapsed;
	FILE *fp;
	size_t *scratch;

	printf("Parsing configuration\n");
#ifdef UKL
	char *args[8] = { NULL };
	int i = 0;
	ssize_t read = 0;
	size_t n = 0;
	char *nl;
	argc = 7;
	fp = fopen("/config", "r");

	while((read = getline(&args[i], &n, fp)) > 0)
	{
		nl = strchr(args[i], '\n');
		if (nl)
			*nl = 0;
		i++;
		n = 0;
	}
	fclose(fp);
	if (parse_opts(argc, args))
		return -1;
	iters = strtol(args[5], NULL, 10);
#else
	if (parse_opts(argc, argv))
		return -1;
	iters = atol(argv[argc - 1]);
#endif

	printf("Setup TCP\n");
	tcp_init();

	scratch = malloc(sizeof(size_t) * iters);
	if (!scratch)
	{
		printf("Memory allocation failed\n");
		return -1;
	}
	memset(scratch, 0, sizeof(size_t) * iters);

	printf("Starting benchmark\n");
	gettimeofday(&begin, NULL);

	for (size_t r = 1; r <= iters; r++)
	{
		if (tcp_send(&r, 1, get_succ(), sizeof(size_t)))
			return -1;
		if (tcp_recv(&(scratch[r - 1]), 1, get_pred(), sizeof(size_t)))
			return -1;
		if (scratch[r - 1] != r)
		{
			printf("Error in comms: got %lu expected %lu\n", scratch[r - 1], r);
			return -1;
		}
	}

	gettimeofday(&end, NULL);

	printf("Benchmark finished\n");

	seconds = end.tv_sec - begin.tv_sec;
	micro = end.tv_usec - begin.tv_usec;
	elapsed = seconds + micro * 1e-6;

	if (config.rank == 0)
	{
		fp = fopen("/output", "w");
		fprintf(fp, "%ld\tGROUP-BY\t%.6f\n", iters, elapsed);
		fclose(fp);
		printf("%ld\tGROUP-BY\t%.6f\n", iters, elapsed);
	}

	printf("Tearing down TCP connections\n");
	tcp_finalize();
	return 0;
}
