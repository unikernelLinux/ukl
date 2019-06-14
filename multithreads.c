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

#define QUEUE_SIZE 10
#define printff printk


void *printer(void);

int client_fd;

int kmain(int argc, char *argv[]){
	pthread_t thread_id[QUEUE_SIZE];
	int i = 0;
	for(i = 0; i < QUEUE_SIZE; i++){
		if (pthread_create( &thread_id[i] , NULL , &printer , NULL) < 0) {
			perror("could not create thread");
			return 1;
		}	
	}

	while(1);	
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