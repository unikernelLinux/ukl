#include <sched.h>
#include <time.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <sys/mman.h>
#include <sys/wait.h>
#include <stdbool.h>
#include <signal.h>
#include <sys/syscall.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/poll.h>
#include <sys/epoll.h>
#include <sys/resource.h>
#include <sys/time.h>
#include <sys/un.h>
#include <x86intrin.h>
#include <inttypes.h>
#include <stdlib.h>
#include <pthread.h>


#define MAX_SIZE 40960
// #define MAX_SIZE 100
#define MAX_FD_CNT 1000
// #define LOOP 1000
#define LOOP 10
#define STEP 256
// #define CENT ((MAX_SIZE/STEP)/100)
#define FD_STEP 50
// #define FD_CENT ((MAX_FD_CNT/FD_STEP)/100)
// #define FD_LOOP 100
#define FD_LOOP 10

#define ADDR_HINT 0x300000000000

FILE *fp;

//---------------------------------------------------------------------
#ifdef USE_VMALLOC
extern void *vmalloc(unsigned long size);
extern void vfree(const void *addr);
#endif
//---------------------------------------------------------------------
#ifdef BYPASS
extern ssize_t bp_write(int fd, const void *buf, size_t count);
extern ssize_t bp_read(int fd, void *buf, size_t count);
extern void *bp_mmap(void *addr, size_t length, int prot, int flags, int fd, off_t offset);
extern int bp_munmap(void *addr, size_t length);
extern int bp_select(int nfds, fd_set *restrict readfds, fd_set *restrict writefds, fd_set *restrict exceptfds, struct timeval *restrict timeout);
extern int bp_poll(struct pollfd *fds, nfds_t nfds, int timeout);
extern int bp_epoll_wait(int epfd, struct epoll_event *events, int maxevents, int timeout);
extern pid_t bp_getppid(void);
#endif
//---------------------------------------------------------------------

void calc_diff(struct timespec *diff, struct timespec *bigger, struct timespec *smaller)
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

void calc_sum(struct timespec *sum, struct timespec *bigger, struct timespec *smaller)
{
        sum->tv_sec = 0;
        sum->tv_nsec = 0;
        if (smaller->tv_nsec >= (1000000000 - bigger->tv_nsec))
        {
                bigger->tv_sec = bigger->tv_sec +1;
                sum->tv_nsec = smaller->tv_nsec - (1000000000 - bigger->tv_nsec);
                sum->tv_sec = bigger->tv_sec + smaller->tv_sec;
        } else {

                sum->tv_nsec = bigger->tv_nsec + smaller->tv_nsec;
                sum->tv_sec = bigger->tv_sec + smaller->tv_sec;
        }
}

void add_diff_to_sum(struct timespec *result, struct timespec* a, struct timespec *b)
{
	struct timespec diff;
	struct timespec tmp;
	calc_diff(&diff, a, b);
	tmp.tv_sec = result->tv_sec;
	tmp.tv_nsec = result->tv_nsec;
	calc_sum(result, &tmp, &diff);
}

void calc_average(struct timespec *average, struct timespec *sum, int size)
{
        average->tv_sec = 0;
        average->tv_nsec = 0;
        if (size == 0) return;

        average->tv_nsec = sum->tv_nsec / size + sum->tv_sec % size * 1000000000 / size;
        average->tv_sec = sum->tv_sec / size;
}

//---------------------------------------------------------------------

void getppid_bench(void){
	struct timespec startTime = { 0, 0 }, endTime = { 0, 0 };
	struct timespec diffTime = { 0, 0 }, aveTime = { 0, 0 };
	int l;
	int loop = 100000;

	clock_gettime(CLOCK_MONOTONIC, &startTime);
	for(l = 0; l < loop; l++){
#ifdef BYPASS
		bp_getppid();
#else
	        syscall(SYS_getppid);
#endif
	}
	clock_gettime(CLOCK_MONOTONIC,&endTime);
		
	calc_diff(&diffTime, &endTime, &startTime);
	calc_average(&aveTime, &diffTime, loop);
	fprintf(fp, "%d,%ld.%09ld\n", l, aveTime.tv_sec, aveTime.tv_nsec);

	printf("UKL: GET PID Successful\n");
        
	return;
}

void clock_bench(void){
	struct timespec startTime = { 0, 0 }, endTime = { 0, 0 };
	struct timespec diffTime = { 0, 0 }, aveTime = { 0, 0 };
	int l;
	// int loop = 100000;
	int loop = 100;

	for(l = 0; l < loop; l++){
	        clock_gettime(CLOCK_MONOTONIC, &startTime);
	        clock_gettime(CLOCK_MONOTONIC,&endTime);
		
		calc_diff(&diffTime, &endTime, &startTime);
		fprintf(fp, "%d,%ld.%09ld\n", l, diffTime.tv_sec, diffTime.tv_nsec);
	}
	printf("UKL: clock_gettime Successful\n");
        return;
}

void cpu_bench(void){
	struct timespec startTime = { 0, 0 }, endTime = { 0, 0 };
	struct timespec diffTime = { 0, 0 }, aveTime = { 0, 0 };
	int i, l;
	double start;
        double div;
	// int loop = 1000;
	int loop = 100;

	for(l = 0; l < loop; l++){
		start = 9903290.789798798;
	        div = 3232.32;

	        clock_gettime(CLOCK_MONOTONIC, &startTime);
		for (i = 0; i < 500000; i ++) {
          		start = start / div;
        	}
	        clock_gettime(CLOCK_MONOTONIC,&endTime);
		
		calc_diff(&diffTime, &endTime, &startTime);
		fprintf(fp, "%d,%ld.%09ld\n", l, diffTime.tv_sec, diffTime.tv_nsec);
	}
	printf("UKL: CPU Bench Successful\n");
        return;
}

void write_bench(int file_size){
	struct timespec startTime = { 0, 0 }, endTime = { 0, 0 };
	struct timespec diffTime = { 0, 0 }, aveTime = { 0, 0 };
    char *buf; 
	int fd, i, l;

	for(l = 0; l < LOOP; l++){
#if defined(USE_VMALLOC)
		buf = (char *)vmalloc(sizeof(char) * file_size);
#elif defined(USE_MALLOC)
		buf = (char *)malloc(sizeof(char) * file_size);
#else
		buf = (char *)syscall(SYS_mmap, (void *) ADDR_HINT, sizeof(char) * file_size, \
				PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
#endif
	        for (i = 0; i < file_size; i++) {
			buf[i] = i%93 + 33;
	        }
	        fd = open("test_file.txt", O_CREAT | O_WRONLY);
	        if (fd < 0){
		       	printf("invalid fd in write: %d\n", fd);
			exit(0);
		}
	
	        clock_gettime(CLOCK_MONOTONIC, &startTime);
#ifdef BYPASS
		bp_write(fd, buf, file_size);
#else
	        syscall(SYS_write, fd, buf, file_size);
#endif
	        clock_gettime(CLOCK_MONOTONIC,&endTime);
	
	        close(fd);

#if defined(USE_VMALLOC)
		vfree(buf);
#elif defined(USE_MALLOC)
		free(buf);
#else
		syscall(SYS_munmap, buf, file_size);
#endif
		
		calc_diff(&diffTime, &endTime, &startTime);
		fprintf(fp, "%d,%d,%ld.%09ld\n", l, file_size, diffTime.tv_sec, diffTime.tv_nsec);
	}
        return;
}

void read_bench(int file_size){
	struct timespec startTime = { 0, 0 }, endTime = { 0, 0 };
	struct timespec diffTime = { 0, 0 }, aveTime = { 0, 0 };
        char *buf;
	int fd, l, i;
       
	for(l = 0; l < LOOP; l++){
#if defined(USE_VMALLOC)
		buf = (char *)vmalloc(sizeof(char) * file_size);
#elif defined(USE_MALLOC)
		buf = (char *)malloc(sizeof(char) * file_size);
#else
		buf = (char *)syscall(SYS_mmap, (void *) ADDR_HINT, sizeof(char) * file_size, \
				PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
#endif
	        for (i = 0; i < file_size; i++) {
			buf[i] = i%93;
	        }
		fd = open("test_file.txt", O_RDONLY);
	        if (fd < 0) {
			printf("invalid fd in read: %d\n", fd);
			exit(0);
		}
	
	        clock_gettime(CLOCK_MONOTONIC, &startTime);
#ifdef BYPASS
		bp_read(fd, buf, file_size);
#else
		syscall(SYS_read, fd, buf, file_size);
#endif
	        clock_gettime(CLOCK_MONOTONIC,&endTime);
	
	        close(fd);

#if defined(USE_VMALLOC)
		vfree(buf);
#elif defined(USE_MALLOC)
		free(buf);
#else
		syscall(SYS_munmap, buf, file_size);
#endif
	
		calc_diff(&diffTime, &endTime, &startTime);
		fprintf(fp, "%d,%d,%ld.%09ld\n", l, file_size, diffTime.tv_sec, diffTime.tv_nsec);
	}
    return;
}

void mmap_bench(int file_size){
	struct timespec startTime = { 0, 0 }, endTime = { 0, 0 };
	struct timespec diffTime = { 0, 0 }, aveTime = { 0, 0 };
        char *buf;
	int fd, l;
	void *addr;
       
	for(l = 0; l < LOOP; l++){
		fd = open("test_file.txt", O_RDONLY);
	        if (fd < 0) {
			printf("invalid fd in mmap: %d\n", fd);
			exit(0);
		}
	
	        clock_gettime(CLOCK_MONOTONIC, &startTime);
#ifdef BYPASS
		addr = (void *)bp_mmap((void *) ADDR_HINT, file_size, PROT_READ, MAP_PRIVATE, fd, 0);
#else
		addr = (void *)syscall(SYS_mmap, (void *) ADDR_HINT, file_size, PROT_READ, MAP_PRIVATE, fd, 0);
#endif
	        clock_gettime(CLOCK_MONOTONIC,&endTime);
	
		syscall(SYS_munmap, addr, file_size);
	        close(fd);
	
		calc_diff(&diffTime, &endTime, &startTime);
		fprintf(fp, "%d,%d,%ld.%09ld\n", l, file_size, diffTime.tv_sec, diffTime.tv_nsec);
	}

    return;
}

void munmap_bench(int file_size){
	struct timespec startTime = { 0, 0 }, endTime = { 0, 0 };
	struct timespec diffTime = { 0, 0 }, aveTime = { 0, 0 };
        char *buf;
	int fd, l, i;
	void *addr;
       
	for(l = 0; l < LOOP; l++){
		fd = open("test_file.txt", O_RDONLY);
	        if (fd < 0) {
			printf("invalid fd in munmap: %d\n", fd);
			exit(0);
		}

		addr = (void *)syscall(SYS_mmap, (void *) ADDR_HINT, file_size, PROT_WRITE, MAP_PRIVATE, fd, 0);
		for (i = 0; i < file_size; i++) {
        	        ((char *)addr)[i] = i%93 + 33;
	        }

	        clock_gettime(CLOCK_MONOTONIC, &startTime);
#ifdef BYPASS
		bp_munmap(addr, file_size);
#else
		syscall(SYS_munmap, addr, file_size);
#endif
	        clock_gettime(CLOCK_MONOTONIC,&endTime);
	
	        close(fd);
	
		calc_diff(&diffTime, &endTime, &startTime);
		fprintf(fp, "%d,%d,%ld.%09ld\n", l, file_size, diffTime.tv_sec, diffTime.tv_nsec);
	}
    return;
}

void pagefault_bench(int file_size){
	struct timespec startTime = { 0, 0 }, endTime = { 0, 0 };
	struct timespec diffTime = { 0, 0 }, aveTime = { 0, 0 };
        char *buf;
	int fd, l, i;
	FILE *fp2;
	char *addr;
	char a[file_size];

	for(l = 0; l < LOOP; l++){
	        fd = open("tmp_file.txt", O_CREAT | O_WRONLY);
	        if (fd < 0){
		       	printf("invalid fd in write: %d\n", fd);
			exit(0);
		}

		/**
		 * MAP_PRIVATE  Updates to the mapping are not visible to other processes mapping the
         * same file, and are not carried through to the underlying file.
		 * 
		 * MAP_ANOYMOUS - The mapping is not backed by any file; its contents are initialized to zero.
		 * 	- Looking below -- appears we are mapping new pages (4096 offset)
		 */ 
		addr = (char *)syscall(SYS_mmap, (void *) ADDR_HINT, file_size, PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
		clock_gettime(CLOCK_MONOTONIC, &startTime);
		i = 0;
		while (i < file_size) {
			addr[i] = i%93 + 33;
			i = i + 4096;
			//i++;
	        }
	        clock_gettime(CLOCK_MONOTONIC,&endTime);
	        
		syscall(SYS_write, fd, addr, file_size);
	
		close(fd);

		syscall(SYS_munmap, addr, file_size);
	
		calc_diff(&diffTime, &endTime, &startTime);
		fprintf(fp, "%d,%d,%ld.%09ld\n", l, file_size, diffTime.tv_sec, diffTime.tv_nsec);
	}
        return;
}

/**
 * Looking at this code, my understanding is that sockets are created in a loop and then select is called
 * to determine how long it takes for the file descriptor (returned by the socket) to become ready (ie, it
 * would be possible to perform an I/O operation on the socket)
 */ 

void select_bench(int fd_count){
	struct timespec startTime = { 0, 0 }, endTime = { 0, 0 };
	struct timespec diffTime = { 0, 0 }, aveTime = { 0, 0 };
	int fd, l, i, retval;
        
	fd_set rfds;
        struct timeval tv;
        int fds[fd_count];
        int maxFd = -1;
	
	for(l = 0; l < FD_LOOP; l++){
		FD_ZERO(&rfds);

	        tv.tv_sec = 0;
        	tv.tv_usec = 0;
	
		for (i = 0; i < fd_count; i++) {
        	        fd = socket(AF_INET, SOCK_STREAM, 0);
                	if (fd < 0) {
				printf("invalid fd in select: %d\n", fd);
				exit(0);
			}
        	        if (fd > maxFd) {
				maxFd = fd;
			}
        	        FD_SET(fd, &rfds);
                	fds[i] = fd;
	        }

	        clock_gettime(CLOCK_MONOTONIC, &startTime);
#ifdef BYPASS
		retval = bp_select(maxFd + 1, &rfds, NULL, NULL, &tv);
#else
		retval = syscall(SYS_select, maxFd + 1, &rfds, NULL, NULL, &tv);
#endif
	        clock_gettime(CLOCK_MONOTONIC,&endTime);
	
		if (retval != fd_count) {
        	        printf("[error] select return unexpected: %d\n", retval);
			exit(0);
	        }

        	for (i = 0; i < fd_count; i++) {
                	retval = close(fds[i]);
	                if (retval == -1) {
				printf ("[error] close failed in select test %d.\n", fds[i]);
				exit(0);
			}
        	}

		calc_diff(&diffTime, &endTime, &startTime);
		fprintf(fp, "%d,%d,%ld.%09ld\n", l, fd_count, diffTime.tv_sec, diffTime.tv_nsec);
	}
        return;
}
/**
 * poll() performs a similar task to select(2): it waits for one of
 * a set of file descriptors to become ready to perform I/O.
 */ 
void poll_bench(int fd_count){
	struct timespec startTime = { 0, 0 }, endTime = { 0, 0 };
	struct timespec diffTime = { 0, 0 }, aveTime = { 0, 0 };
	int fd, l, i, retval;
	
	struct pollfd pfds[fd_count];
        memset(pfds, 0, sizeof(pfds));
       
	for(l = 0; l < FD_LOOP; l++){
		for (i = 0; i < fd_count; i++) {
			fd = socket(AF_INET, SOCK_STREAM, 0);
			if (fd < 0) {
				printf("invalid fd in poll: %d\n", fd);
				exit(0);
			}

			pfds[i].fd = fd;
	                pfds[i].events = POLLIN;
		}

	        clock_gettime(CLOCK_MONOTONIC, &startTime);
#ifdef BYPASS
		retval = bp_poll(pfds, fd_count, 0);
#else
		retval = syscall(SYS_poll, pfds, fd_count, 0);
#endif
	        clock_gettime(CLOCK_MONOTONIC,&endTime);
	
		if (retval != fd_count) {
                	printf("[error] poll return unexpected: fd_count = %d retval = %d\n", fd_count, retval);
			exit(0);
	        }

        	for (i = 0; i < fd_count; i++) {
                	retval = close(pfds[i].fd);
                	if (retval == -1) {
				printf ("[error] close failed in poll test %d.\n", pfds[i].fd);
				exit(0);
			}
        	}

		calc_diff(&diffTime, &endTime, &startTime);
		fprintf(fp, "%d,%d,%ld.%09ld\n", l, fd_count, diffTime.tv_sec, diffTime.tv_nsec);
	}
    return;
}


/**
 * The epoll API performs a similar task to poll(2): monitoring
 * multiple file descriptors to see if I/O is possible on any of
 * them.  The epoll API can be used either as an edge-triggered or a
 * level-triggered interface and scales well to large numbers of
 * watched file descriptors.
 * 
 * epoll_create(2) creates a new epoll instance and returns a file
 * 					descriptor referring to that instance.
 * 
 * 
 * epoll_ctl(2) - Interest in particular file descriptors is then registered via
 * 				  epoll_ctl(2), which adds items to the interest list of the
 * 				  epoll instance.
 * 
 * epoll_wait(2) - waits for I/O events, blocking the calling thread
 * 				 	if no events are currently available.  (This system call can be
 * 					thought of as fetching items from the ready list of the epoll
 * 					instance.)
 * 
 */ 
void epoll_bench(int fd_count){
	struct timespec startTime = { 0, 0 }, endTime = { 0, 0 };
	struct timespec diffTime = { 0, 0 }, aveTime = { 0, 0 };
        char *buf;
	int fd, l, i, epfd, retval, fds[fd_count];
	struct epoll_event ev, events[fd_count];

	for(l = 0; l < FD_LOOP; l++){
		epfd = epoll_create(fd_count); // fd_count is ignored, just has to be non zero
		if (epfd == -1) {
			printf("epoll_create error\n");
			exit(0);
		}

		for (i = 0; i < fd_count; i++) {
			fd = socket(AF_INET, SOCK_STREAM, 0);
			if (fd < 0) {
				printf("[error] invalid fd in epoll: %d\n", fd);
				exit(0);
			}

			ev.events = EPOLLIN;
        	        ev.data.fd = fd;
	
        	        retval = epoll_ctl(epfd, EPOLL_CTL_ADD, fd, &ev);
	                if (retval == -1) {
                        	printf("[error] epoll_ctl failed.\n");
				exit(0);
                	}

                	fds[i] = fd;
		}

	        clock_gettime(CLOCK_MONOTONIC, &startTime);
#ifdef BYPASS
		retval = bp_epoll_wait(epfd, events, fd_count, 0);
#else
		retval = syscall(SYS_epoll_wait, epfd, events, fd_count, 0);
#endif
	        clock_gettime(CLOCK_MONOTONIC,&endTime);
	
		if (retval != fd_count) {
                	printf("[error] epoll return unexpected: %d\n", retval);
			exit(0);
        	}
	
		retval = close(epfd);
        	if (retval == -1) {
			printf ("[error] close epfd failed in epoll test %d.\n", epfd);
			exit(0);
		}
	        for (i = 0; i < fd_count; i++) {
                	retval = close(fds[i]);
        	        if (retval == -1) {
				printf ("[error] close failed in epoll test %d.\n", fds[i]);
				exit(0);
			}
	        }

		calc_diff(&diffTime, &endTime, &startTime);
		fprintf(fp, "%d,%d,%ld.%09ld\n", l, fd_count, diffTime.tv_sec, diffTime.tv_nsec);
	}
        return;
}

//---------------------------------------------------------------------

int main(void){
	int file_size, fd_count;
	int fd;
	// int i = 0, percentage = 0;

	remove("test_file.txt");
	remove("tmp_file.txt");
	
//*************************************

#ifdef OPEN_CLOSE_TEST

	fd = open("test_open.txt", O_CREAT | O_WRONLY);
	if (fd < 0){
		printf("invalid fd in write: %d\n", fd);
		exit(0);
	}
	close(fd);

	remove("test_open.txt");
	printf("UKL: File Open/Close Successful\n");


#endif

//*************************************

#ifdef REF_TEST
	printf("Starting reference benchmarks\n");

	fp = fopen("/mybench_small_clock.csv", "w");
	fprintf(fp, "Sr,latency\n");
	clock_bench();
	fclose(fp);

	fp = fopen("/mybench_small_cpu.csv", "w");
	fprintf(fp, "Sr,latency\n");
	cpu_bench();
	fclose(fp);
	
	fp = fopen("/mybench_small_getppid.csv", "w");
	fprintf(fp, "Sr,latency\n");
	getppid_bench();
	fclose(fp);
	printf("Reference benchmarks done\n");
#endif

//*************************************

#ifdef WRITE_TEST
	fp = fopen("/mybench_small_write.csv", "w");

	fprintf(fp, "Sr,Size,Latency\n");
	file_size = 1;
	write_bench(file_size);
	file_size = 0;
	// i = 0;
	while(file_size < MAX_SIZE){
		file_size = file_size + STEP;
		write_bench(file_size);
		// i++;
		// if(i > CENT){
		// 	i = 0;
		// 	percentage = (file_size*100)/MAX_SIZE;
		// 	printf("Running write test %d %% done\n", percentage);
		// }
	}
	printf("UKL: WRITE Successful\n");

	fclose(fp);
#endif	

//*************************************
	
#ifdef READ_TEST
	fp = fopen("/mybench_small_read.csv", "w");
	
	fprintf(fp, "Sr,Size,Latency\n");
	file_size = 1;
	read_bench(file_size);
	file_size = 0;
	// i = 0;
	while(file_size < MAX_SIZE){
		file_size = file_size + STEP;
		read_bench(file_size);
		// i++;
		// if(i > CENT){
		// 	i = 0;
		// 	percentage = (file_size*100)/MAX_SIZE;
		// 	printf("Running read test %d %% done\n", percentage);
		// }
	}
	printf("UKL: READ Successful\n");

	fclose(fp);
#endif	

//*************************************
	
#ifdef MMAP_TEST
	fp = fopen("/mybench_small_mmap.csv", "w");
	
	fprintf(fp, "Sr,Size,Latency\n");
	file_size = 1;
	mmap_bench(file_size);
	file_size = 0;
	// i = 0;
	while(file_size < MAX_SIZE){
		file_size = file_size + STEP;
		mmap_bench(file_size);
		// i++;
		// if(i > CENT){
		// 	i = 0;
		// 	percentage = (file_size*100)/MAX_SIZE;
		// 	printf("Running mmap test %d %% done\n", percentage);
		// }
	}
	printf("UKL: MMAP Successful\n");

	fclose(fp);
#endif	

//*************************************
	
#ifdef MUNMAP_TEST
	fp = fopen("/mybench_small_munmap.csv", "w");
	
	fprintf(fp, "Sr,Size,Latency\n");
	file_size = 1;
	munmap_bench(file_size);
	file_size = 0;
	// i = 0;
	while(file_size < MAX_SIZE){
		file_size = file_size + STEP;
		munmap_bench(file_size);
		// i++;
		// if(i > CENT){
		// 	i = 0;
		// 	percentage = (file_size*100)/MAX_SIZE;
		// 	printf("Running munmap test %d %% done\n", percentage);
		// }
	}
	printf("UKL: MUNMAP Successful\n");

	fclose(fp);
#endif	

//*************************************
	
#ifdef PF_TEST
	fp = fopen("/mybench_small_pagefault.csv", "w");
	
	fprintf(fp, "Sr,Size,Latency\n");
	file_size = 1;
	pagefault_bench(file_size);
	file_size = 0;
	// i = 0;
	while(file_size < MAX_SIZE){
		file_size = file_size + STEP;
		pagefault_bench(file_size);
		// i++;
		// if(i > CENT){
		// 	i = 0;
		// 	percentage = (file_size*100)/MAX_SIZE;
		// 	printf("Running pagefault test %d %% done\n", percentage);
		// }
	}
	printf("UKL: Page Fault Bench Successful\n");

	fclose(fp);
#endif	
	
//*************************************

#ifdef SELECT_TEST
	fp = fopen("/mybench_small_select.csv", "w");
	
	fprintf(fp, "Sr,Count,Latency\n");
	fd_count = 0;
	// i = 0;
	while(fd_count < MAX_FD_CNT){
		fd_count = fd_count + FD_STEP;
		select_bench(fd_count);
		// i++;
		// if(i > FD_CENT){
		// 	i = 0;
		// 	percentage = (fd_count*100)/MAX_FD_CNT;
		// 	printf("Running select test %d %% done\n", percentage);
		// }
	}
	printf("UKL: SELECT Successful\n");
	fclose(fp);
#endif	
	
//*************************************
	
#ifdef POLL_TEST
	fp = fopen("/mybench_small_poll.csv", "w");
	
	fprintf(fp, "Sr,Count,Latency\n");
	fd_count = 0;
	// i = 0;
	while(fd_count < MAX_FD_CNT){
		fd_count = fd_count + FD_STEP;
		poll_bench(fd_count);
		// i++;
		// if(i > FD_CENT){
		// 	i = 0;
		// 	percentage = (fd_count*100)/MAX_FD_CNT;
		// 	printf("Running poll test %d %% done\n", percentage);
		// }
	}
	printf("UKL: POLL Successful\n");
	fclose(fp);
#endif	

//*************************************
	
#ifdef EPOLL_TEST
	fp = fopen("/mybench_small_epoll.csv", "w");
	
	fprintf(fp, "Sr,Count,Latency\n");
	fd_count = 1;
	epoll_bench(fd_count);
	fd_count = 0;
	// i = 0;
	while(fd_count < MAX_FD_CNT){
		fd_count = fd_count + FD_STEP;
		epoll_bench(fd_count);
		// i++;
		// if(i > FD_CENT){
		// 	i = 0;
		// 	percentage = (fd_count*100)/MAX_FD_CNT;
		// 	printf("Running epoll test %d %% done\n", percentage);
		// }
	}
	printf("UKL: EPOLL Successful\n");

	fclose(fp);
#endif
	
}
