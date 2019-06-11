#include <stdio.h> 
#include <stdlib.h> 
#include <errno.h> 
#include <string.h> 
#include <netdb.h> 
#include <sys/types.h> 
#include <netinet/in.h> 
#include <sys/socket.h> 
#include <unistd.h>
#include <sys/time.h> 
#include <pthread.h> 

#define PORT 5555 
#define PORT2 4444 

#define MAXDATASIZE 100 

#define QUEUE_SIZE 2

struct data{
    struct hostent *he;
    int id;
};

void *client_funcs(void *args)
{
    int num = 0;
    int sockfd, numbytes; 
    char sendbuf[MAXDATASIZE];
    char buf[MAXDATASIZE];
    struct data *d = (struct data*)args;
    struct hostent *he = d->he;
    struct sockaddr_in their_addr; /* connector's address information */
    struct timeval t1, t2;
    double elapsedTime;
    int myid = d->id;

    printf("MY ID = %d\n", myid);

    if ((sockfd = socket(AF_INET, SOCK_STREAM, 0)) == -1) {
        perror("socket");
        exit(1);
    }

    their_addr.sin_family = AF_INET;      /* host byte order */
    their_addr.sin_port = htons(PORT);    /* short, network byte order */
    their_addr.sin_addr = *((struct in_addr *)he->h_addr);
    bzero(&(their_addr.sin_zero), 8);     /* zero the rest of the struct */

    if (connect(sockfd, (struct sockaddr *)&their_addr, sizeof(struct sockaddr)) == -1) {
        perror("connect");
        exit(1);
    }
while (1) {
    sprintf(sendbuf, "%d\n", num);
    gettimeofday(&t1, NULL);
	if (send(sockfd, sendbuf, MAXDATASIZE, 0) == -1){
                  perror("send");
	      exit (1);
	}
    else{
        num++;
    }
	// printf("After the send function \n");

    	if ((numbytes=recv(sockfd, buf, MAXDATASIZE, 0)) == -1) {
        		perror("recv");
        		exit(1);
	}else{
        buf[numbytes -1] = '\0';
        gettimeofday(&t2, NULL);
        // printf("Received text=: %s \n", myid, buf);
        elapsedTime = (t2.tv_sec - t1.tv_sec) * 1000.0;      // sec to ms
        elapsedTime += (t2.tv_usec - t1.tv_usec) / 1000.0;   // us to ms
        printf("Thread id %d: Received text=: %s and elapsedTime = %f ms\n", myid, buf, elapsedTime);
    }	
}

    close(sockfd);

    return 0;
}

void *client_funcs2(void *args)
{
    int num = 0;
    int sockfd, numbytes; 
    char sendbuf[MAXDATASIZE];
    char buf[MAXDATASIZE];
    struct data *d = (struct data*)args;
    struct hostent *he = d->he;
    struct sockaddr_in their_addr; /* connector's address information */
    struct timeval t1, t2;
    double elapsedTime;
    int myid = d->id;

    printf("MY ID = %d\n", myid);

    if ((sockfd = socket(AF_INET, SOCK_STREAM, 0)) == -1) {
        perror("socket");
        exit(1);
    }

    their_addr.sin_family = AF_INET;      /* host byte order */
    their_addr.sin_port = htons(PORT2);    /* short, network byte order */
    their_addr.sin_addr = *((struct in_addr *)he->h_addr);
    bzero(&(their_addr.sin_zero), 8);     /* zero the rest of the struct */

    if (connect(sockfd, (struct sockaddr *)&their_addr, sizeof(struct sockaddr)) == -1) {
        perror("connect");
        exit(1);
    }
while (1) {
    sprintf(sendbuf, "%d\n", num);
    gettimeofday(&t1, NULL);
    if (send(sockfd, sendbuf, MAXDATASIZE, 0) == -1){
                  perror("send");
          exit (1);
    }
    else{
        num++;
    }
    // printf("After the send function \n");

        if ((numbytes=recv(sockfd, buf, MAXDATASIZE, 0)) == -1) {
                perror("recv");
                exit(1);
    }else{
        buf[numbytes -1] = '\0';
        gettimeofday(&t2, NULL);
        // printf("Received text=: %s \n", myid, buf);
        elapsedTime = (t2.tv_sec - t1.tv_sec) * 1000.0;      // sec to ms
        elapsedTime += (t2.tv_usec - t1.tv_usec) / 1000.0;   // us to ms
        printf("Thread id %d: Received text=: %s and elapsedTime = %f ms\n", myid, buf, elapsedTime);
    }   
}

    close(sockfd);

    return 0;
}


int main(int argc, char *argv[]){
    pthread_t thread_id[QUEUE_SIZE];
    int i = 0, curr_id = 0;
    struct hostent *he;

    struct data mydata[QUEUE_SIZE];

    if (argc != 2) {
        fprintf(stderr,"usage: client hostname\n");
        exit(1);
    }

    if ((he=gethostbyname(argv[1])) == NULL) {  /* get the host info */
        herror("gethostbyname");
        exit(1);
    }

    // for(i = 0; i < QUEUE_SIZE; i++){
        mydata[i].he = he;
        mydata[i].id = i;
        pthread_create( &thread_id[curr_id] , NULL , client_funcs , &mydata[i]);
        curr_id++;
        i++;
    // }

        mydata[i].he = he;
        mydata[i].id = i;
        pthread_create( &thread_id[curr_id] , NULL , client_funcs2 , &mydata[i]);
        curr_id++;

    while(1);

    return 0;
}

