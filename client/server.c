#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <stdio.h>
#include<string.h>
#include <unistd.h>
#include <arpa/inet.h>
 
int main()
{
 
    char str[100];
    int listen_fd, comm_fd;
 
    struct sockaddr_in servaddr;
 
    listen_fd = socket(AF_INET, SOCK_STREAM, 0); 
    printf("After socket\n");
 
    bzero( &servaddr, sizeof(servaddr));
 
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = htons(INADDR_ANY);
    servaddr.sin_port = htons(22001);

    bind(listen_fd, (struct sockaddr *) &servaddr, sizeof(servaddr)); 
    printf("After bind\n");
 
    listen(listen_fd, 10); 
    printf("After listen\n");
 
    comm_fd = accept(listen_fd, (struct sockaddr*) NULL, NULL); 
    printf("After accept\n");
 
    while(1)
    { 
        printf("After while\n");
 
        bzero( str, 100);
 
        read(comm_fd,str,100);
 
        printf("Echoing back - %s",str);
 
        write(comm_fd, str, strlen(str)+1);
 
    }
}