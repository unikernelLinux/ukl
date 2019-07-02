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
#define printff printk

// __thread int counter = 10;
// __thread int nocounter;

void *printer(void);

int kmain(int argc, char *argv[]){

	// int i = 0;
	// nocounter = 0;
	// for(i = 0; i < 10; i++){
	// 	counter = counter + i*10;
	// 	nocounter = nocounter + 1;
	// 	printff("Counter = %d\n", counter);
	// 	printff("No Counter = %d\n", nocounter);
	// }


	pthread_t thread_id[QUEUE_SIZE];
	int i = 0;


	for(i = 0; i < QUEUE_SIZE; i++){
		if (pthread_create( &thread_id[i] , NULL , &printer , NULL) < 0) {
			perror("could not create thread");
			return 1;
		}	
	}
	
	return 0;
}

void *printer(void)
{
    printff("A\n");
    printff("quick\n");
    printff("brown\n");
    printff("fox\n");
    printff("jumped\n");
    printff("over\n");
    printff("a\n");
    printff("lazy\n");
    printff("dog.\n");
    return 0;
} 