#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h> 
#include <netinet/in.h> 
#include <string.h> 
#include <pthread.h> 

#define QUEUE_SIZE 5

void *printer(void);

int main(int argc, char *argv[]){
	pthread_t thread_id[QUEUE_SIZE];
	int i = 0;

	for(i = 0; i < QUEUE_SIZE; i++){
		if (pthread_create( &thread_id[i] , NULL , &printer , NULL) < 0) {
			perror("could not create thread");
			return 1;
		}	
	}

	for(i = 0; i < QUEUE_SIZE; i++){
		pthread_join(thread_id[i], NULL);	
	}

	return 0;
}

void *printer(void)
{
    int id = 1;
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