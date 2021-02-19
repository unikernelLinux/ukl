#define _GNU_SOURCE
#include <sched.h>
#include <time.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
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
#include <sys/socket.h>
#include <sys/un.h>

int counter=3;
bool  isFirstIteration = false;
const char *home;
char *output_fn = NULL;
char *new_output_fn = NULL;
#define setup 		(struct timespec *fp) \
			{struct timespec timeA ; \
			struct timespec timeC; \
			clock_gettime(CLOCK_MONOTONIC,&timeA);

#define setup_2_a	(struct timespec *fp) \
			{struct timespec timeA;	\
			struct timespec timeC;

#define setup_2_b	clock_gettime(CLOCK_MONOTONIC,&timeA);

#define ending		clock_gettime(CLOCK_MONOTONIC,&timeC); \
			add_diff_to_sum(fp,timeC,timeA);\
			return;}

#define end1	clock_gettime(CLOCK_MONOTONIC,&timeC);

#define end2	add_diff_to_sum(fp,timeC,timeA);\
				return;}

#define final_formula ",=\"AVERAGE(B%d:INDIRECT(SUBSTITUTE(ADDRESS(1,COLUMN()-1,4),\"1\",\"%d\")))\",=\"STDEV.P(B%d:INDIRECT(SUBSTITUTE(ADDRESS(1,COLUMN()-2,4),\"1\",\"%d\")))\"\n",counter,counter,counter,counter

#define OUTPUT_FILE_PATH	""
#define OUTPUT_FN		OUTPUT_FILE_PATH "output_file.csv"
#define NEW_OUTPUT_FN	OUTPUT_FILE_PATH "new_output_file.csv"
#define DEBUG false
#define BASE_ITER 1000

#define PAGE_SIZE 4096

void add_diff_to_sum(struct timespec *result,struct timespec a, struct timespec b)
{
	if (result->tv_nsec +a.tv_nsec < b.tv_nsec)
	{
		result->tv_nsec = 1000000000+result->tv_nsec+a.tv_nsec-b.tv_nsec;
		result->tv_sec = result->tv_sec+a.tv_sec-b.tv_sec-1;
	}
	else if (result->tv_nsec+a.tv_nsec-b.tv_nsec >=1000000000)
	{
		result->tv_nsec = result->tv_nsec+a.tv_nsec-b.tv_nsec-1000000000;
		result->tv_sec = result->tv_sec+a.tv_sec-b.tv_sec+1;
	}
	else
	{
		result->tv_nsec = result->tv_nsec + a.tv_nsec - b.tv_nsec;
		result->tv_sec = result->tv_sec +a.tv_sec - b.tv_sec;
	}
}

struct timespec *calc_diff(struct timespec *smaller, struct timespec *bigger)
{
	struct timespec *diff = (struct timespec *)malloc(sizeof(struct timespec));
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
	return diff;
}


struct timespec *timeB;
struct timespec *timeD;

struct timespec* calc_average(struct timespec *sum, int size)
{
	struct timespec *average = (struct timespec *)malloc(sizeof(struct timespec));
	average->tv_sec = 0;
	average->tv_nsec = 0;
	if (size == 0) return average;

	average->tv_nsec = sum->tv_nsec / size + sum->tv_sec % size * 1000000000 / size;
	average->tv_sec = sum->tv_sec / size;
	return average;
}

struct timespec *calc_sum(struct timespec ** array, int size)
{
	
	struct timespec *sum = (struct timespec *)malloc(sizeof(struct timespec));
	sum->tv_sec = 0;
	sum->tv_nsec = 0;
	for (int i = 0; i < size; i ++)
	{
		if (array[i]->tv_nsec >= (1000000000 - sum->tv_nsec)) 
		{
			sum->tv_sec = sum->tv_sec +1;
			sum->tv_nsec = array[i]->tv_nsec - (1000000000 - sum->tv_nsec);
			sum->tv_sec = sum->tv_sec + array[i]->tv_sec;
		} else {
		
			sum->tv_nsec = sum->tv_nsec + array[i]->tv_nsec;
			sum->tv_sec = sum->tv_sec + array[i]->tv_sec;
		}
	}	
	return sum;
}

struct timespec *calc_sum2(struct timespec * array, int size)
{
	
	struct timespec *sum = (struct timespec *)malloc(sizeof(struct timespec));
	sum->tv_sec = 0;
	sum->tv_nsec = 0;
	for (int i = 0; i < size; i ++)
	{
		if (array[i].tv_nsec >= (1000000000 - sum->tv_nsec)) 
		{
			sum->tv_sec = sum->tv_sec +1;
			sum->tv_nsec = array[i].tv_nsec - (1000000000 - sum->tv_nsec);
			sum->tv_sec = sum->tv_sec + array[i].tv_sec;
		} else {
		
			sum->tv_nsec = sum->tv_nsec + array[i].tv_nsec;
			sum->tv_sec = sum->tv_sec + array[i].tv_sec;
		}
	}	
	return sum;
}


int comp(const void *ele1, const void *ele2) 
{
	struct timespec t1 = *((struct timespec *)ele1);
	struct timespec t2 = *((struct timespec *)ele2);
	if (t1.tv_sec > t2.tv_sec) {
		return 1;
	}
	else if (t1.tv_sec == t2.tv_sec) {
		if (t1.tv_nsec > t2.tv_nsec) return 1;
		else if (t1.tv_nsec == t2.tv_nsec) return 0;
		else return -1;
	} 
	else {
		return -1;
	}
}

typedef struct testInfo {
	int iter;
	const char *name;
} testInfo;

#define INPRECISION 0.05
#define K 5
struct timespec *calc_k_closest(struct timespec *timeArray, int size)
{
	if(DEBUG) printf("in calc_k_closest\n");
	qsort(timeArray, size, sizeof(struct timespec), comp);
	struct timespec **k_closest = (struct timespec **) malloc (sizeof(struct timespec*) * K);
	for (int ii = 0; ii < K; ii++) 
		k_closest[ii] = NULL;
	struct timespec *prev = &timeArray[0];
	int j = 0;
	k_closest[j] = prev;
	j ++;
	for (int i = 1; i < size; i ++) 
	{
		struct timespec *curr = &timeArray[i];
		if(DEBUG) printf("curr %ld.%09ld\n",curr->tv_sec, curr->tv_nsec); 
		if (curr->tv_sec != 0 || prev->tv_sec != 0) {
			if(DEBUG) printf("[warn] test run greater than 1 second: ");
			if(DEBUG) printf("prev %ld.%09ld, ",prev->tv_sec, prev->tv_nsec); 
			if(DEBUG) printf("curr %ld.%09ld\n",curr->tv_sec, curr->tv_nsec); 
			j = 0;
		} else {
			double diff = curr->tv_nsec - prev->tv_nsec;
			double ratioDiff = diff/(double)prev->tv_nsec;
			if(DEBUG) printf("diff: %lf\n", ratioDiff);
			if (ratioDiff > INPRECISION)
			{	
				j = 0;
				for (int ii = 0; ii < K; ii++) 
					k_closest[ii] = NULL;
			}
			else 
			{
				k_closest[j] = curr;
				j ++;	

			}
		}
		if (j == K) break;
		prev = curr;
	}
	if (DEBUG && j != K) printf("only found the %d closest\n", j);
	struct timespec* result = k_closest[0];
	if(DEBUG) printf("result %ld.%09ld\n", result->tv_sec, result->tv_nsec); 
	free(k_closest);
	return result;

}

void one_line_test(FILE *fp, FILE *copy, void (*f)(struct timespec*), testInfo *info){
	struct timespec testStart, testEnd;
	clock_gettime(CLOCK_MONOTONIC,&testStart);

	printf("Performing test %s.\n", info->name);

	int runs = info->iter;
	printf("Total test iteration %d.\n", runs);

	struct timespec* timeArray = (struct timespec *)malloc(sizeof(struct timespec) * runs);
	for (int i=0; i < runs; i++) {
		timeArray[i].tv_sec = 0;
		timeArray[i].tv_nsec = 0;
		(*f)(&timeArray[i]);
	}
	struct timespec *sum = calc_sum2(timeArray, runs);
	struct timespec *average = calc_average(sum, runs);  
	struct timespec *kbest = calc_k_closest(timeArray, runs);	

	if (!isFirstIteration)
	{
		char ch;
		while (1)
		{
			ch=fgetc(copy);
			if (ch == '\n')	break;
			fputc(ch,fp);
		}
	} else {
		fprintf(fp, "%10s", info->name);
		fprintf(fp, "          kbest:,");
	}
	fprintf(fp,"%ld.%09ld,\n",kbest->tv_sec, kbest->tv_nsec); 

	if (!isFirstIteration)
	{
		char ch;
		while (1)
		{
			ch=fgetc(copy);
			if (ch == '\n')	break;
			fputc(ch,fp);
		}
	} else {
		fprintf(fp, "%10s", info->name);
		fprintf(fp, "        average:,");
	}
	fprintf(fp,"%ld.%09ld,\n",average->tv_sec, average->tv_nsec); 

	free(sum);
	free(average);
	free(timeArray);


	clock_gettime(CLOCK_MONOTONIC,&testEnd);
	struct timespec *diffTime = calc_diff(&testStart, &testEnd);
	printf("Test took: %ld.%09ld seconds\n",diffTime->tv_sec, diffTime->tv_nsec); 
	free(diffTime);

	return;
}


void one_line_test_v2(FILE *fp, FILE *copy, void (*f)(struct timespec*, int, int *), testInfo *info){
	struct timespec testStart, testEnd;
	clock_gettime(CLOCK_MONOTONIC,&testStart);

	printf("Performing test %s.\n", info->name);

	int runs = info->iter;
	printf("Total test iteration %d.\n", runs);

	struct timespec* timeArray = (struct timespec *)malloc(sizeof(struct timespec) * runs);

	for (int i = 0; i < runs; i++) {
		timeArray[i].tv_sec = 0;
		timeArray[i].tv_nsec = 0;
	}


	for (int i = 0; i < runs; ) {
		(*f)(timeArray, info->iter, &i);
	}

	struct timespec *sum = calc_sum2(timeArray, runs);
	struct timespec *average = calc_average(sum, runs);  
	struct timespec *kbest = calc_k_closest(timeArray, runs);	

	if (!isFirstIteration)
	{
		char ch;
		while (1)
		{
			ch=fgetc(copy);
			if (ch == '\n')	break;
			fputc(ch,fp);
		}
	} else {
		fprintf(fp, "%10s", info->name);
		fprintf(fp, "          kbest:,");
	}
	fprintf(fp,"%ld.%09ld,\n",kbest->tv_sec, kbest->tv_nsec); 

	if (!isFirstIteration)
	{
		char ch;
		while (1)
		{
			ch=fgetc(copy);
			if (ch == '\n')	break;
			fputc(ch,fp);
		}
	} else {
		fprintf(fp, "%10s", info->name);
		fprintf(fp, "        average:,");
	}
	fprintf(fp,"%ld.%09ld,\n",average->tv_sec, average->tv_nsec); 

	free(sum);
	free(average);
	free(timeArray);


	clock_gettime(CLOCK_MONOTONIC,&testEnd);
	struct timespec *diffTime = calc_diff(&testStart, &testEnd);
	printf("Test took: %ld.%09ld seconds\n",diffTime->tv_sec, diffTime->tv_nsec); 
	free(diffTime);

	return;
}

void two_line_test(FILE *fp, FILE *copy, void (*f)(struct timespec*,struct timespec*), testInfo *info){
	struct timespec testStart, testEnd;
	clock_gettime(CLOCK_MONOTONIC,&testStart);
	printf("Performing test %s.\n", info->name);

	int runs = info->iter;
	printf("Total test iteration %d.\n", runs);
	struct timespec* timeArrayParent = (struct timespec *) malloc(sizeof(struct timespec) * runs);
	struct timespec* timeArrayChild = (struct timespec *) malloc(sizeof(struct timespec) * runs);
	for (int i=0; i < runs; i++)
	{
		timeArrayParent[i].tv_sec = 0;
		timeArrayParent[i].tv_nsec = 0;
		timeArrayChild[i].tv_sec = 0;
		timeArrayChild[i].tv_nsec = 0;
		(*f)(&timeArrayChild[i],&timeArrayParent[i]);
	}

	struct timespec *sumParent = calc_sum2(timeArrayParent, runs);
	struct timespec *sumChild = calc_sum2(timeArrayChild, runs);
	struct timespec *averageParent = calc_average(sumParent, runs);
	struct timespec *averageChild = calc_average(sumChild, runs);
	struct timespec **averages = (struct timespec **) malloc(2*sizeof(struct timespec *));
	averages[0] = averageParent;
	averages[1] = averageChild;

	struct timespec *kbestParent = calc_k_closest(timeArrayParent, runs);
	struct timespec *kbestChild = calc_k_closest(timeArrayChild, runs);
	struct timespec **kbests = (struct timespec **) malloc(2*sizeof(struct timespec *));
	kbests[0] = kbestParent;
	kbests[1] = kbestChild;

	char ch;
	if(!isFirstIteration)
	{
		for (int i=0; i<2; i++)
		{
			while(1)
			{
				ch=fgetc(copy);
				if(ch=='\n')
					break;
				fputc(ch,fp);
			}
			fprintf(fp,"%ld.%09ld,\n",kbests[i]->tv_sec, kbests[i]->tv_nsec); 

			while(1)
			{
				ch=fgetc(copy);
				if(ch=='\n')
					break;
				fputc(ch,fp);
			}
			fprintf(fp,"%ld.%09ld,\n",averages[i]->tv_sec,averages[i]->tv_nsec); 
		}
	}
	else
	{
		fprintf(fp, "%10s", info->name);
		fprintf(fp,"          kbest:,%ld.%09ld,\n",kbests[0]->tv_sec, kbests[0]->tv_nsec); 
		fprintf(fp, "%10s", info->name);
		fprintf(fp,"       average:,%ld.%09ld,\n",averages[0]->tv_sec, averages[0]->tv_nsec); 

		fprintf(fp, "%10s", info->name);
		fprintf(fp,"    Child kbest:,%ld.%09ld,\n",kbests[1]->tv_sec, kbests[1]->tv_nsec); 
		fprintf(fp, "%10s", info->name);
		fprintf(fp," Child average:,%ld.%09ld,\n",averages[1]->tv_sec, averages[1]->tv_nsec); 
	}
	free(timeArrayChild);
	free(timeArrayParent);
	free(averages);
	free(kbests);
	free(sumParent);
	free(sumChild);
	free(averageParent);
	free(averageChild);

	clock_gettime(CLOCK_MONOTONIC,&testEnd);
	struct timespec *diffTime = calc_diff(&testStart, &testEnd);
	printf("Test took: %ld.%09ld seconds\n",diffTime->tv_sec, diffTime->tv_nsec); 
	free(diffTime);
	return;
}

void forkTest(struct timespec *childTime, struct timespec *parentTime) 
{
    struct timespec timeA;
    struct timespec timeC;
    timeB = mmap(NULL, sizeof(struct timespec), PROT_READ | PROT_WRITE, MAP_SHARED | MAP_ANONYMOUS, -1, 0);
    int status;
    clock_gettime(CLOCK_MONOTONIC,&timeA);

    int forkId = fork();
    if (forkId == 0){
        clock_gettime(CLOCK_MONOTONIC, timeB);
        kill(getpid(),SIGINT);
	printf("[error] unable to kill child process\n");
	return;
    } else if (forkId > 0){
        clock_gettime(CLOCK_MONOTONIC,&timeC);
        wait(&status);
	add_diff_to_sum(childTime,*timeB,timeA);
	add_diff_to_sum(parentTime,timeC,timeA);
    } else {
    	printf("[error] fork failed.\n");
    }
    munmap(timeB, sizeof(struct timespec));
    return;
}

void *thrdfnc(void *args)
{
	clock_gettime(CLOCK_MONOTONIC,timeB);
	pthread_exit(NULL);
}

void threadTest(struct timespec *childTime, struct timespec *parentTime)
{
	struct timespec timeC;
	timeB=(struct timespec *)malloc(sizeof(struct timespec));
	timeD=(struct timespec *)malloc(sizeof(struct timespec));
	pthread_t newThrd;
	clock_gettime(CLOCK_MONOTONIC,timeD);
	int er = pthread_create (&newThrd, NULL, thrdfnc, NULL);
	clock_gettime(CLOCK_MONOTONIC,&timeC);
	pthread_join(newThrd,NULL);

	add_diff_to_sum(parentTime,timeC,*timeD);
	add_diff_to_sum(childTime,*timeB,*timeD);
	
	free(timeB);
	timeB = NULL;
	free(timeD);
	timeD = NULL;
	return;
}

void getpid_test(struct timespec *diffTime) {
	struct timespec startTime, endTime;
	clock_gettime(CLOCK_MONOTONIC, &startTime);
	syscall(SYS_getpid);
	clock_gettime(CLOCK_MONOTONIC, &endTime);
	add_diff_to_sum(diffTime, endTime, startTime);
	return;

}

int file_size = -1;
void read_test(struct timespec *diffTime) { 
	struct timespec startTime, endTime;
	char *buf_in = (char *) malloc (sizeof(char) * file_size);

	int fd =open("test_file.txt", O_RDONLY);
	if (fd < 0) printf("invalid fd in read: %d\n", fd);
	clock_gettime(CLOCK_MONOTONIC, &startTime);
	syscall(SYS_read, fd, buf_in, file_size);
	clock_gettime(CLOCK_MONOTONIC, &endTime);
	close(fd);
	
	add_diff_to_sum(diffTime, endTime, startTime);
	free(buf_in);
	return;

}

void read_warmup() {

	char *buf_out = (char *) malloc (sizeof(char) * file_size);
	for (int i = 0; i < file_size; i++) {
		buf_out[i] = 'a';
	}

	int fd = open("test_file.txt", O_CREAT | O_WRONLY);
	if (fd < 0) printf("invalid fd in write: %d\n", fd);

	syscall(SYS_write, fd, buf_out, file_size);
	close(fd);	

	char *buf_in = (char *) malloc (sizeof(char) * file_size);

	fd =open("test_file.txt", O_RDONLY);
	if (fd < 0) printf("invalid fd in read: %d\n", fd);
	
	for (int i = 0; i < 1000; i ++) {
		syscall(SYS_read, fd, buf_in, file_size);
	}
	close(fd);

	free(buf_out);
	free(buf_in);
	return;

}
void write_test(struct timespec *diffTime) {
	struct timespec startTime, endTime;

	char *buf = (char *) malloc (sizeof(char) * file_size);
	for (int i = 0; i < file_size; i++) {
		buf[i] = 'a';
	}
	int fd = open("test_file.txt", O_CREAT | O_WRONLY);
	if (fd < 0) printf("invalid fd in write: %d\n", fd);

	clock_gettime(CLOCK_MONOTONIC, &startTime);
	syscall(SYS_write, fd, buf, file_size);
	clock_gettime(CLOCK_MONOTONIC,&endTime);
	
	close(fd);
		
	add_diff_to_sum(diffTime, endTime, startTime);
	free(buf);
	return;
}


void mmap_test(struct timespec *diffTime) {
	struct timespec startTime, endTime;

	int fd =open("test_file.txt", O_RDONLY);
	if (fd < 0) printf("invalid fd%d\n", fd);

	clock_gettime(CLOCK_MONOTONIC, &startTime);
	void *addr = (void *)syscall(SYS_mmap, NULL, file_size, PROT_READ, MAP_PRIVATE, fd, 0);
	clock_gettime(CLOCK_MONOTONIC,&endTime);
	
	syscall(SYS_munmap, addr, file_size);
        close(fd);
	add_diff_to_sum(diffTime, endTime, startTime);
	return;
}

void page_fault_test(struct timespec *diffTime) {
	struct timespec startTime, endTime;

	int fd =open("test_file.txt", O_RDONLY);
	if (fd < 0) printf("invalid fd%d\n", fd);

	void *addr = (void *)syscall(SYS_mmap, NULL, file_size, PROT_READ, MAP_PRIVATE, fd, 0);

	clock_gettime(CLOCK_MONOTONIC, &startTime);
	char a = *((char *)addr);
	clock_gettime(CLOCK_MONOTONIC,&endTime);
	
	printf("read: %c\n", a);
	syscall(SYS_munmap, addr, file_size);
        close(fd);
	add_diff_to_sum(diffTime, endTime, startTime);
	return;
}

void cpu_test(struct timespec *diffTime) {
	struct timespec startTime, endTime;

	double start = 9903290.789798798;
	double div = 3232.32;
	clock_gettime(CLOCK_MONOTONIC,&startTime);
	for (int i = 0; i < 500000; i ++) {
	  start = start / div;
	}
	clock_gettime(CLOCK_MONOTONIC,&endTime);

	add_diff_to_sum(diffTime, endTime, startTime);
	return;
}

void ref_test(struct timespec *diffTime) {
	struct timespec startTime, endTime;

	clock_gettime(CLOCK_MONOTONIC, &startTime);
	clock_gettime(CLOCK_MONOTONIC,&endTime);
	
	add_diff_to_sum(diffTime, endTime, startTime);
	return;
}

void munmap_test(struct timespec *diffTime) {
	struct timespec startTime, endTime;

	int fd =open("test_file.txt", O_RDWR);
	if (fd < 0) printf("invalid fd%d\n", fd);
	void *addr = (void *)syscall(SYS_mmap, NULL, file_size, PROT_WRITE, MAP_PRIVATE, fd, 0);
	for (int i = 0; i < file_size; i++) {
		((char *)addr)[i] = 'b';
	}
	clock_gettime(CLOCK_MONOTONIC, &startTime);
	syscall(SYS_munmap, addr, file_size);
	clock_gettime(CLOCK_MONOTONIC,&endTime);
	close(fd);
	add_diff_to_sum(diffTime, endTime, startTime);
	return;
}

int fd_count = -1; 
void select_test(struct timespec *diffTime) {
	struct timespec startTime, endTime;
	fd_set rfds;
	struct timeval tv;
	int retval;

	FD_ZERO(&rfds);

	tv.tv_sec = 0;
	tv.tv_usec = 0;

	int fds[fd_count];
	int maxFd = -1;


	for (int i = 0; i < fd_count; i++) {
		int fd = socket(AF_INET, SOCK_STREAM, 0);
		if (fd < 0) printf("invalid fd in select: %d\n", fd);
		if (fd > maxFd) maxFd = fd;
		FD_SET(fd, &rfds);
		fds[i] = fd;
	}

	clock_gettime(CLOCK_MONOTONIC, &startTime);
	retval = syscall(SYS_select, maxFd + 1, &rfds, NULL, NULL, &tv);
	clock_gettime(CLOCK_MONOTONIC, &endTime);
	add_diff_to_sum(diffTime, endTime, startTime);

	if (retval != fd_count) {
		printf("[error] select return unexpected: %d\n", retval);
	}

	for (int i = 0; i < fd_count; i++) {
		int retval = close(fds[i]);
		if (retval == -1) printf ("[error] close failed in select test %d.\n", fds[i]);
	}
	return;
}

void poll_test(struct timespec *diffTime) {
	struct timespec startTime, endTime;
	int retval;

	int fds[fd_count];
	struct pollfd pfds[fd_count];
	memset(pfds, 0, sizeof(pfds));

	for (int i = 0; i < fd_count; i++) {
		char name[10];
		name[0] = 'f';
		name[1] = 'i';
		name[2] = 'l';
		name[3] = 'e';
		int j = i; 
		int index = 4;
		while (j > 0) {
			name[index] =  48 + j%10;
			j = j/10;
			index ++;
		}
		name[index] = '\0';
		int fd = socket(AF_INET, SOCK_STREAM, 0);
		if (fd < 0) printf("invalid fd in poll: %d\n", fd);
		
		pfds[i].fd = fd;
		pfds[i].events = POLLIN;

		fds[i] = fd;
	}

	clock_gettime(CLOCK_MONOTONIC, &startTime);
	retval = syscall(SYS_poll, pfds, fd_count, 0);
	clock_gettime(CLOCK_MONOTONIC, &endTime);
	add_diff_to_sum(diffTime, endTime, startTime);

	if (retval != fd_count) {
		printf("[error] poll return unexpected: %d\n", retval);
	}

	for (int i = 0; i < fd_count; i++) {
		retval = close(fds[i]);
		if (retval == -1) printf ("[error] close failed in poll test %d.\n", fds[i]);
	}
	return;
}

void epoll_test(struct timespec *diffTime) {
	struct timespec startTime, endTime;
	int retval;

	int fds[fd_count];

	int epfd = epoll_create(fd_count);

	for (int i = 0; i < fd_count; i++) {
		char name[10];
		name[0] = 'f';
		name[1] = 'i';
		name[2] = 'l';
		name[3] = 'e';
		int j = i; 
		int index = 4;
		while (j > 0) {
			name[index] =  48 + j%10;
			j = j/10;
			index ++;
		}
		name[index] = '\0';
		int fd = socket(AF_INET, SOCK_STREAM, 0);
		if (fd < 0) printf("[error] invalid fd in epoll: %d\n", fd);

		struct epoll_event event;
		event.events = EPOLLIN;
		event.data.fd = fd;

		retval = epoll_ctl(epfd, EPOLL_CTL_ADD, fd, &event);
		if (retval == -1) {
			printf("[error] epoll_ctl failed.\n");
		}

		fds[i] = fd;
	}

	struct epoll_event *events = (struct epoll_event *)malloc(fd_count * sizeof(struct epoll_event));
	clock_gettime(CLOCK_MONOTONIC, &startTime);
	retval = epoll_wait(epfd, events, fd_count, 0);
	clock_gettime(CLOCK_MONOTONIC, &endTime);
	add_diff_to_sum(diffTime, endTime, startTime);

	free(events);
	if (retval != fd_count) {
		printf("[error] epoll return unexpected: %d\n", retval);
	}
	
	retval = close(epfd);
	if (retval == -1) printf ("[error] close epfd failed in epoll test %d.\n", epfd);
	for (int i = 0; i < fd_count; i++) {
		retval = close(fds[i]);
		if (retval == -1) printf ("[error] close failed in epoll test %d.\n", fds[i]);
	}
	return;
}

void context_switch_test(struct timespec *diffTime) {
	int iter = 1000;
	struct timespec startTime, endTime;
	int fds1[2], fds2[2], retval;
	retval = pipe(fds1);
	if (retval != 0) printf("[error] failed to open pipe1.\n");
	retval = pipe(fds2);
	if (retval != 0) printf("[error] failed to open pipe2.\n");
	
	char w = 'a', r;
	cpu_set_t cpuset;
	int prio;

	retval = sched_getaffinity(getpid(), sizeof(cpuset), &cpuset);
	if (retval == -1) printf("[error] failed to get affinity.\n");
	prio = getpriority(PRIO_PROCESS, 0);
	if (prio == -1) printf("[error] failed to get priority.\n");
	
	int forkId = fork();
	if (forkId > 0) { // is parent
		retval = close(fds1[0]);
		if (retval != 0) printf("[error] failed to close fd1.\n");
		retval = close(fds2[1]);
		if (retval != 0) printf("[error] failed to close fd2.\n");

		cpu_set_t set;
		CPU_ZERO(&set);
		CPU_SET(0, &set);
		retval = sched_setaffinity(getpid(), sizeof(set), &set);
		if (retval == -1) printf("[error] failed to set processor affinity.\n");
		retval = setpriority(PRIO_PROCESS, 0, -20); 
		if (retval == -1) printf("[error] failed to set process priority.\n");

		read(fds2[0], &r, 1); 		

		clock_gettime(CLOCK_MONOTONIC, &startTime);
		for (int i = 0; i < iter; i++) {
			write(fds1[1], &w, 1);		
			read(fds2[0], &r, 1); 
		}
		clock_gettime(CLOCK_MONOTONIC, &endTime);
		int status;
        	wait(&status);
		
		close(fds1[1]);
		close(fds2[0]);


	} else if (forkId == 0){
	
		retval = close(fds1[1]);
		if (retval != 0) printf("[error] failed to close fd1.\n");
		retval = close(fds2[0]);
		if (retval != 0) printf("[error] failed to close fd2.\n");

		cpu_set_t set;
		CPU_ZERO(&set);
		CPU_SET(0, &set);
		retval = sched_setaffinity(getpid(), sizeof(set), &set);
		if (retval == -1) printf("[error] failed to set processor affinity.\n");
		retval = setpriority(PRIO_PROCESS, 0, -20); 
		if (retval == -1) printf("[error] failed to set process priority.\n");

		write(fds2[1], &w, 1);		
		for (int i = 0; i < iter; i++) {
			read(fds1[0], &r, 1);		
			write(fds2[1], &w, 1);		
		}
			
        	kill(getpid(), SIGINT);
		printf("[error] unable to kill child process\n");
		return;
	} else {
		printf("[error] failed to fork.\n");
	}

	retval = sched_setaffinity(getpid(), sizeof(cpuset), &cpuset);
	if (retval == -1) printf("[error] failed to restore affinity.\n");
	retval = setpriority(PRIO_PROCESS, 0, prio);
	if (retval == -1) printf("[error] failed to restore priority.\n");

	struct timespec sum;
	sum.tv_sec = 0;
	sum.tv_nsec = 0;
	add_diff_to_sum(&sum, endTime, startTime);
	struct timespec *diff = calc_average(&sum, iter);
	diffTime->tv_sec = diff->tv_sec;
	diffTime->tv_nsec = diff->tv_nsec;
	free(diff);
}

int msg_size = -1;
int curr_iter_limit = -1;
#define sock "/TEST_DIR/socket"
void send_test(struct timespec *timeArray, int iter, int *i) {
	int retval;
	int fds1[2], fds2[2];
	retval = pipe(fds1);
	if (retval != 0) printf("[error] failed to open pipe1.\n");
	retval = pipe(fds2);
	if (retval != 0) printf("[error] failed to open pipe1.\n");
	char w = 'b', r;	
	
	struct sockaddr_un server_addr;
	memset(&server_addr, 0, sizeof(struct sockaddr_un));
	server_addr.sun_family = AF_UNIX;
	strncpy(server_addr.sun_path, home, sizeof(server_addr.sun_path) - 1); 
	strncat(server_addr.sun_path, sock, sizeof(server_addr.sun_path) - 1); 

	int forkId = fork();

	if (forkId < 0) {
		printf("[error] fork failed.\n");
		return;
	}

	if (forkId == 0) {
		close(fds1[0]);
		close(fds2[1]);

		int fd_server = socket(AF_UNIX, SOCK_STREAM, 0);
		if (fd_server < 0) printf("[error] failed to open server socket.\n");
	
		retval = bind(fd_server, (struct sockaddr *) &server_addr, sizeof(struct sockaddr_un));
		if (retval == -1) printf("[error] failed to bind.\n");
		retval = listen(fd_server, 10); 
		if (retval == -1) printf("[error] failed to listen.\n");
		if (DEBUG) printf("Waiting for connection\n");

		write(fds1[1], &w, 1);

		int fd_connect = accept(fd_server, (struct sockaddr *)0,
					(socklen_t *)0);
		if (DEBUG) printf("Connection accepted.\n");

		read(fds2[0], &r, 1);

		remove(sock);
		close(fd_server);
		close(fd_connect);
		close(fds1[1]);
		close(fds2[0]);


        	kill(getpid(),SIGINT);
		printf("[error] unable to kill child process\n");
		return;

	} else {
		struct timespec startTime, endTime;
		close(fds1[1]);
		close(fds2[0]);

		read(fds1[0], &r, 1);

		int fd_client = socket(AF_UNIX, SOCK_STREAM, 0);
		if (fd_client < 0) printf("[error] failed to open client socket.\n");
		retval = connect(fd_client, (struct sockaddr *) &server_addr, sizeof(struct sockaddr_un));
		if (retval == -1) printf("[error] failed to connect.\n");

		char *buf = (char *) malloc (sizeof(char) * msg_size);
		for (int i = 0; i < msg_size; i++) {
			buf[i] = 'a';
		}
		
		retval = send(fd_client, buf, msg_size, MSG_DONTWAIT);
		for (int j = 0; *i < iter & j < curr_iter_limit; (*i) ++, j++) {	
			
			clock_gettime(CLOCK_MONOTONIC,&startTime);
			retval = syscall(SYS_sendto, fd_client, buf, msg_size, MSG_DONTWAIT, NULL, 0);
			clock_gettime(CLOCK_MONOTONIC,&endTime);
			add_diff_to_sum(&timeArray[*i], endTime, startTime);

			if (retval == -1) {
				printf("[error] failed to send.\n");
			}
		}

		write(fds2[1], &w, 1);
		close(fd_client);	
		close(fds1[0]);	
		close(fds2[1]);	
		free(buf);
		int status;
        	wait(&status);
	}

}

void recv_test(struct timespec *timeArray, int iter, int *i) {
	int retval;
	int fds1[2], fds2[2];
	retval = pipe(fds1);
	if (retval != 0) {
		printf("[error] failed to open pipe1.\n");
	}
	retval = pipe(fds2);
	if (retval != 0) {
		printf("[error] failed to open pipe2.\n");
	}
	char w = 'b', r;	
	
	struct sockaddr_un server_addr;
	memset(&server_addr, 0, sizeof(struct sockaddr_un));
	server_addr.sun_family = AF_UNIX;
	strncpy(server_addr.sun_path, home, sizeof(server_addr.sun_path) - 1); 
	strncat(server_addr.sun_path, sock, sizeof(server_addr.sun_path) - 1); 

	int forkId = fork();

	if (forkId < 0) {
		printf("[error] fork failed.\n");
		return;
	}

	if (forkId > 0) {
		close(fds1[0]);
		close(fds2[1]);

		int fd_server = socket(AF_UNIX, SOCK_STREAM, 0);
		if (fd_server < 0) printf("[error] failed to open server socket.\n");
	
		retval = bind(fd_server, (struct sockaddr *) &server_addr, sizeof(struct sockaddr_un));
		if (retval == -1) printf("[error] failed to bind.\n");
		retval = listen(fd_server, 10);
		if (retval == -1) printf("[error] failed to listen.\n");
		if (DEBUG) printf("Waiting for connection\n");

		write(fds1[1], &w, 1);

		int fd_connect = accept(fd_server, (struct sockaddr *)0,
					(socklen_t *)0);
		if (DEBUG) printf("Connection accepted.\n");

		read(fds2[0], &r, 1);


		char *buf = (char *) malloc (sizeof(char) * msg_size);
		
		struct timespec startTime, endTime;
		retval = recv(fd_connect, buf, msg_size, MSG_DONTWAIT);
		for (int j = 0; *i < iter & j < curr_iter_limit; (*i) ++, j++) {	
			
			clock_gettime(CLOCK_MONOTONIC,&startTime);
			retval = syscall(SYS_recvfrom, fd_connect, buf, msg_size, MSG_DONTWAIT, NULL, NULL);
			clock_gettime(CLOCK_MONOTONIC,&endTime);

			add_diff_to_sum(&timeArray[*i], endTime, startTime);

			if (retval == -1) {
				printf("[error] failed to recv.\n");
			}
		}

		write(fds1[1], &w, 1);

		remove(sock);
		close(fd_server);
		close(fd_connect);
		close(fds1[1]);
		close(fds2[0]);
		free(buf);
		int status;
        	wait(&status);

	} else {
		close(fds1[1]);
		close(fds2[0]);

		read(fds1[0], &r, 1);

		int fd_client = socket(AF_UNIX, SOCK_STREAM, 0);
		if (fd_client < 0) printf("[error] failed to open client socket.\n");
		retval = connect(fd_client, (struct sockaddr *) &server_addr, sizeof(struct sockaddr_un));
		if (retval == -1) printf("[error] failed to connect.\n");

		char *buf = (char *) malloc (sizeof(char) * msg_size);
		for (int i = 0; i < msg_size; i++) {
			buf[i] = 'a';
		}
		
		for (int j = 0; j < curr_iter_limit + 1; (*i) ++, j++) {	
			
			retval = syscall(SYS_sendto, fd_client, buf, msg_size, MSG_DONTWAIT, NULL, 0);

			if (retval == -1) {
				printf("[error] failed to send.\n");
			}
		}

		write(fds2[1], &w, 1);
		read(fds1[0], &r, 1);
		close(fd_client);	
		close(fds1[0]);	
		close(fds2[1]);	
		free(buf);

        	kill(getpid(),SIGINT);
		printf("[error] unable to kill child process\n");
		return;

	}

}

int main(int argc, char *argv[])
{
	home = "/";
	
	output_fn = (char *)malloc(500*sizeof(char));
	strcpy(output_fn, home);
	strcat(output_fn, OUTPUT_FN);

	new_output_fn = (char *)malloc(500*sizeof(char));
	strcpy(new_output_fn, home);
	strcat(new_output_fn, NEW_OUTPUT_FN);

	struct timespec startTime, endTime;
	clock_gettime(CLOCK_MONOTONIC, &startTime);
	if (argc != 3){printf("Invalid arguments, gave %d not 3",argc);return(0);}
	char *iteration = argv[1];
	char *str_os_name = argv[2];
	FILE *fp;
	FILE *copy = NULL;
	fp=fopen(new_output_fn,"w");
	isFirstIteration = false;
	if (*iteration == '0'){isFirstIteration = true;}
	if (!isFirstIteration)
	{
		copy=fopen(output_fn,"r");
		char ch;
		int increment = 0;
		while (1)
		{
			ch=fgetc(copy);
			if (ch == '\n')
			{
				if (increment == 1)
				{
					break;
				}
				increment ++;
			}
			fputc(ch,fp);
		}
	}
	else
	{
		fprintf(fp, "OS Benchmark experiment\nTest Name:,");
	}
	fprintf(fp,"%s,\n",str_os_name);
	
	testInfo info;	

	/*****************************************/
	/*               GETPID                  */
	/*****************************************/

	sleep(1);
	info.iter = BASE_ITER * 100;
	info.name = "ref";
	one_line_test(fp, copy, ref_test, &info);

	info.iter = 100;
	info.name = "cpu";
	one_line_test(fp, copy, cpu_test, &info);


	info.iter = BASE_ITER * 100;
	info.name = "getpid";
	one_line_test(fp, copy, getpid_test, &info);


	
	/*****************************************/
	/*            CONTEXT SWITCH             */
	/*****************************************/
	/*
	info.iter = BASE_ITER * 10;
	info.name = "context siwtch";
	one_line_test(fp, copy, context_switch_test, &info);
	*/

	/*****************************************/
	/*             SEND & RECV               */
	/*****************************************/
	/*
	msg_size = 1;	
	curr_iter_limit = 50;
	printf("msg size: %d.\n", msg_size);
	printf("curr iter limit: %d.\n", curr_iter_limit);
	info.iter = BASE_ITER * 10;
	info.name = "send";
	one_line_test_v2(fp, copy, send_test, &info);
	
	info.iter = BASE_ITER * 10;
	info.name = "recv";
	one_line_test_v2(fp, copy, recv_test, &info);
	

	msg_size = 96000;	// This size 96000 would cause blocking on older kernels!
	curr_iter_limit = 1;
	printf("msg size: %d.\n", msg_size);
	printf("curr iter limit: %d.\n", curr_iter_limit);
	info.iter = BASE_ITER;
	info.name = "big send";
	one_line_test_v2(fp, copy, send_test, &info);
		
	info.iter = BASE_ITER;
	info.name = "big recv";
	one_line_test_v2(fp, copy, recv_test, &info);
	*/

	/*****************************************/
	/*         FORK & THREAD CREATE          */
	/*****************************************/
	/*
	info.iter = BASE_ITER * 2;
	info.name = "fork";
	two_line_test(fp, copy, forkTest, &info);
	
	info.iter = BASE_ITER * 5;
	info.name = "thr create";
	two_line_test(fp, copy, threadTest, &info);


	int page_count = 6000;
	void *pages[page_count];
	for (int i = 0; i < page_count; i++) {
    		pages[i] = mmap(NULL, PAGE_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED | MAP_ANONYMOUS, -1, 0);
	}
	
	info.iter = BASE_ITER / 2;	
	info.name = "big fork";
	two_line_test(fp, copy, forkTest, &info);

	for (int i = 0; i < page_count; i++) {
		munmap(pages[i], PAGE_SIZE);
	}

	page_count = 12000;
	printf("Page count: %d.\n", page_count);
	void *pages1[page_count];
	for (int i = 0; i < page_count; i++) {
    		pages1[i] = mmap(NULL, PAGE_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED | MAP_ANONYMOUS, -1, 0);
	}
	
	info.iter = BASE_ITER / 2;	
	info.name = "huge fork";
	two_line_test(fp, copy, forkTest, &info);

	for (int i = 0; i < page_count; i++) {
		munmap(pages1[i], PAGE_SIZE);
	}
	*/

	/*****************************************/
	/*     WRITE & READ & MMAP & MUNMAP      */
	/*****************************************/

	/****** SMALL ******/
	file_size = PAGE_SIZE;	
	printf("file size: %d.\n", file_size);

	info.iter = BASE_ITER * 10;
	info.name = "small write";
	one_line_test(fp, copy, write_test, &info);
      
	info.iter = BASE_ITER * 10; 
	info.name = "small read";
	read_warmup();
	one_line_test(fp, copy, read_test, &info);
	
	info.iter = BASE_ITER * 10;
	info.name = "small mmap";
	one_line_test(fp, copy, mmap_test, &info);
	
	info.iter = BASE_ITER * 10;
	info.name = "small munmap";
	one_line_test(fp, copy, munmap_test, &info);

	info.iter = BASE_ITER * 5;
	info.name = "small page fault";
	one_line_test(fp, copy, page_fault_test, &info);

	/****** MID ******/
	file_size = PAGE_SIZE * 10;
	printf("file size: %d.\n", file_size);

	info.iter = BASE_ITER * 10;
	info.name = "mid write";
	one_line_test(fp, copy, write_test, &info);
	
	info.iter = BASE_ITER * 10;
	info.name = "mid read";
	read_warmup();
	one_line_test(fp, copy, read_test, &info);

	info.iter = BASE_ITER * 10;
	info.name = "mid mmap";
	one_line_test(fp, copy, mmap_test, &info);
	
	info.iter = BASE_ITER * 10;
	info.name = "mid munmap";
	one_line_test(fp, copy, munmap_test, &info);

	info.iter = BASE_ITER * 5;
	info.name = "mid page fault";
	one_line_test(fp, copy, page_fault_test, &info);

	/****** BIG ******/
	file_size = PAGE_SIZE * 1000;	
	printf("file size: %d.\n", file_size);

	info.iter = BASE_ITER / 2;
	info.name = "big write";
	one_line_test(fp, copy, write_test, &info);
	
	info.iter = BASE_ITER;
	info.name = "big read";
	read_warmup();
	one_line_test(fp, copy, read_test, &info);
	
	info.iter = BASE_ITER * 10;
	info.name = "big mmap";
	one_line_test(fp, copy, mmap_test, &info);
	
	info.iter = BASE_ITER / 4;
	info.name = "big munmap";
	one_line_test(fp, copy, munmap_test, &info);
	
	info.iter = BASE_ITER * 5;
	info.name = "big page fault";
	one_line_test(fp, copy, page_fault_test, &info);

       /****** HUGE ******/
	file_size = PAGE_SIZE * 10000;	
	printf("file size: %d.\n", file_size);

	info.iter = BASE_ITER / 4;
	info.name = "huge write";
	one_line_test(fp, copy, write_test, &info);

	info.iter = BASE_ITER;
	info.name = "huge read";
	one_line_test(fp, copy, read_test, &info);
	
	info.iter = BASE_ITER * 10;
	info.name = "huge mmap";
	one_line_test(fp, copy, mmap_test, &info);
	
	info.iter = BASE_ITER / 4; 
	info.name = "huge munmap";
	one_line_test(fp, copy, munmap_test, &info);

	info.iter = BASE_ITER * 5;
	info.name = "huge page fault";
	one_line_test(fp, copy, page_fault_test, &info);

	/*****************************************/
	/*              WRITE & READ             */
	/*****************************************/

	/****** SMALL ******/
	fd_count = 10;

	info.iter = BASE_ITER * 10;
	info.name = "select";
	one_line_test(fp, copy, select_test, &info);
	
	info.iter = BASE_ITER * 10;
	info.name = "poll";
	one_line_test(fp, copy, poll_test, &info);
		
	info.iter = BASE_ITER * 10;
	info.name = "epoll";
	one_line_test(fp, copy, epoll_test, &info);
	

	/****** BIG ******/
	fd_count = 1000;

	info.iter = BASE_ITER;
	info.name = "select big";
	one_line_test(fp, copy, select_test, &info);

	info.iter = BASE_ITER;
	info.name = "poll big";
	one_line_test(fp, copy, poll_test, &info);

	info.iter = BASE_ITER;
	info.name = "epoll big";
	one_line_test(fp, copy, epoll_test, &info);

	fclose(fp);
	if (!isFirstIteration)
	{
		fclose(copy);
		remove(output_fn);
	}
	char name[300];
	strcpy(name, home);
	strcat(name, OUTPUT_FILE_PATH);
	strcat(name, "output.");
	strcat(name, str_os_name);
	strcat(name, ".csv");
	strcat(name, "\0");
	int ret = rename(new_output_fn,name);
	clock_gettime(CLOCK_MONOTONIC, &endTime);
	struct timespec *diffTime = calc_diff(&startTime, &endTime);
	printf("Test took: %ld.%09ld seconds\n",diffTime->tv_sec, diffTime->tv_nsec); 
	free(diffTime);
	return(0);
}
