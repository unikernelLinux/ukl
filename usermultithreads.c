#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h> 
#include <netinet/in.h> 
#include <string.h> 
#include <pthread.h> 

#define QUEUE_SIZE 1

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

	// for(i = 0; i < QUEUE_SIZE; i++){
	// 	pthread_join(&thread_id[i], NULL);	
	// }

	while(1);
		
	return 0;
}

void *printer(void)
{
    printf("%d A\n", 1);
    printf("%d quick\n", 1);
    printf("%d brown\n", 1);
    printf("%d fox\n", 1);
    printf("%d jumped\n", 1);
    printf("%d over\n", 1);
    printf("%d a\n", 1);
    printf("%d lazy\n", 1);
    printf("%d dog.\n", 1);
    return 0;
} 