#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <signal.h>
 
int main(void)
{

    int sockfd;
    char sendline[100];
    char recvline[100];
    struct sockaddr_in servaddr;

    //sigaction(SIGPIPE, &(struct sigaction){SIG_IGN}, NULL); 
    sockfd=socket(AF_INET,SOCK_STREAM,0);
    bzero(&servaddr,sizeof servaddr);
 
    servaddr.sin_family=AF_INET;
    servaddr.sin_port=htons(5556);
 
    inet_pton(AF_INET,"169.254.0.15",&(servaddr.sin_addr));

    printf("before connect\n");
    connect(sockfd,(struct sockaddr *)&servaddr,sizeof(servaddr));
    printf("before while\n");
    while(1)
    {
        bzero( sendline, 100);
        bzero( recvline, 100);
        fgets(sendline,100,stdin); /*stdin = 0 , for standard input */
 
        write(sockfd,sendline,strlen(sendline)+1);
        printf("after write\n");
        read(sockfd,recvline,100);
        printf("after read\n");
        printf("%s",recvline);
    }
 
}