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



#define LOOP 100

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


//Start routing for create_thread_bench() threads
void *doNothing(void *vargp){
	printf("Hello world\n");
}


//Create threads
void create_thread_bench(){
	struct timespec startTime = { 0, 0 }, endTime = { 0, 0 };
	struct timespec diffTime = { 0, 0 }, aveTime = { 0, 0 };
	int i;
	pthread_t tid;
	printf("Starting create thread bench...\n");
	clock_gettime(CLOCK_MONOTONIC,&startTime);
	for(i=0; i<LOOP; i++)
	{
		//Exit if thread creation failure
		if(pthread_create(&tid, NULL, doNothing, NULL) != 0)
		{
			printf("Pthread_Create failed in create_thread_bench()\n");
			exit(1);
		}
		if(pthread_join(tid, NULL) != 0){
			printf("Pthread_Join failed in create_thread_bench()\n");
                        exit(1);
		}
		printf("Thread %d Done\n", i);
	}
	clock_gettime(CLOCK_MONOTONIC,&endTime);
	calc_diff(&diffTime, &endTime, &startTime);
	calc_average(&aveTime, &diffTime, LOOP);
	printf("%d,%ld.%09ld\n", i, aveTime.tv_sec, aveTime.tv_nsec);
	printf("UKL: create_thread_bench Successful\n");


	
	return;
}
//Random work start routine
void *doWork(void *vargp){
	printf("My name is: %lx\n", (long)pthread_self());
	sleep(1);
	int i;
	i = 0;
	i += 1;
	float j = 124.8231;
	j /= j;
	j += i;
	//printf("After my nap: %lx\n", (long)pthread_self());

}
void work_thread_bench(){
        struct timespec startTime = { 0, 0 }, endTime = { 0, 0 };
        struct timespec diffTime = { 0, 0 }, aveTime = { 0, 0 };
        int i;
        pthread_t tid[LOOP];
        printf("Starting work thread bench...\n");
        clock_gettime(CLOCK_MONOTONIC,&startTime);
        for(i=0; i<LOOP; i++)
        {
                //Exit if thread creation failure
                if(pthread_create(&tid[i], NULL, doWork, NULL) != 0)
                {
                        printf("Pthread_Create failed in work_thread_bench()\n");
                        exit(1);
                }
        }
	for (i=0; i<LOOP; i++){
		if(pthread_join(tid[i], NULL) != 0) 
		{
			printf("Pthread_Join failed in work_thread_bench()\n");
                        exit(1);		
		}
		printf("Thread %d Done\n", i);
	}
        clock_gettime(CLOCK_MONOTONIC,&endTime);
        calc_diff(&diffTime, &endTime, &startTime);
        printf("%d,%ld.%09ld\n", i, diffTime.tv_sec, diffTime.tv_nsec);
        printf("UKL: work_thread_bench successful\n");



        return;
}


int main(){

	create_thread_bench();
	work_thread_bench();


return 0;
}
