#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h> 
#include <netinet/in.h> 
#include <string.h> 
#include <pthread.h> 

extern int printk(const char *fmt, ...);
extern void cond_resched(void);

#define QUEUE_SIZE 1
// #define printff printk

// __thread int counter = 10;
// __thread int nocounter;

void *printer(int * id);

int kmain(int argc, char *argv[]){

	// int i = 0;
	// nocounter = 0;
	// for(i = 0; i < 10; i++){
	// 	counter = counter + i*10;
	// 	nocounter = nocounter + 1;
	// 	printff("Counter = %d\n", counter);
	// 	printf("No Counter = %d\n", nocounter);
	// }


	pthread_t thread_id[QUEUE_SIZE];
	int i = 0;


	for(i = 0; i < QUEUE_SIZE; i++){
		if (pthread_create( &thread_id[i] , NULL , printer , (void *)i) < 0) {
			perror("could not create thread");
			return 1;
		}	
	}
	
	return 0;
}

void *printer(int * id)
{
    printf("Thread %d = A\n", id);
    printf("Thread %d = quick\n", id);
    printf("Thread %d = brown\n", id);
    printf("Thread %d = fox\n", id);
    printf("Thread %d = jumped\n", id);
    printf("Thread %d = over\n", id);
    printf("Thread %d = a\n", id);
    printf("Thread %d = lazy\n", id);
    printf("Thread %d = dog.\n", id);
    return 0;
} 