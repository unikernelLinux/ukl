#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h> 
#include <netinet/in.h> 
#include <string.h> 
#include <pthread.h> 

#define QUEUE_SIZE 10
#define PORT 5555
#define BUFFER_SIZE 1024

void connection_handler(int c_fd, int id);

int myserver(int curr_id){
	int opt_val = 1;
	int retval;
	int server_fd, client_fd;
	struct sockaddr_in server, client;
	pthread_t thread_id[QUEUE_SIZE];
	socklen_t client_len = sizeof(client);
	void *ret;

	server_fd = socket(AF_INET, SOCK_STREAM, 0);
	if (server_fd < 0){
		printf("Error in socket creation.\n");
	}

	server.sin_family = AF_INET;
	server.sin_port = __builtin_bswap16 (PORT+curr_id);
	server.sin_addr.s_addr = (uint32_t) 0x00000000;

	retval = setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR, &opt_val, sizeof opt_val);
	if (retval < 0){
		printf("Error in setting socket options.\n");		
	}

	retval = bind(server_fd, (struct sockaddr *) &server, sizeof(server));
	if (retval < 0){
		printf("Error in bind.\n");		
	}

	retval = listen(server_fd, QUEUE_SIZE);
	if (retval < 0){
		printf("Error in listen.\n");		
	}

	while (client_fd = accept(server_fd, (struct sockaddr *)&client, &client_len)){
		printf("Connection accepted.\n");
		connection_handler(client_fd, curr_id);
	}

	return 0;
}

int main(int argc, char *argv[]){	
	int curr_id = 0;
	pthread_t thread_id[QUEUE_SIZE];

	while (curr_id < QUEUE_SIZE){
		if (pthread_create( &thread_id[curr_id] , NULL , myserver , (curr_id)) < 0) {
				perror("could not create thread");
				return 1;
		}
		curr_id++;
	}

	while(1);
	return 0;
}

void connection_handler(int c_fd, int id)
{
    int client_fd = c_fd;
    int buf_len, retval;
    char *message , buf[BUFFER_SIZE];
    int i = 0;

    memset(buf, '\0', BUFFER_SIZE);
    message = "Multi-threaded TCP server\n";
    retval = send(client_fd, message, strlen(message), 0);
    
    while (1)
    {
    	buf_len = recv(client_fd, buf, BUFFER_SIZE, 0);
		buf[buf_len] = '\0';
		printf("ThreadID = %d Message = %s", id, buf);
		retval = send(client_fd, buf, strlen(buf), 0);
		memset(buf, '\0', BUFFER_SIZE);
    }
     
    if(buf_len == 0){
        printf("Client disconnected\n");
    } else{
        printf("Receive failed");
    }
         
    return 0;
} 