// https://github.com/mafintosh/echo-servers.c/blob/master/tcp-echo-server.c

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h> 
#include <netinet/in.h> 

#define BUFFER_SIZE 1024

int kmain (unsigned long fs) {

  __pthread_initialize_minimal_internal((void *) fs);
  printf("Set up of TCB done. \n");

  int port = 5555;

  int server_fd, client_fd, err;
  struct sockaddr_in server, client;
  char buf[BUFFER_SIZE];

  server_fd = socket(AF_INET, SOCK_STREAM, 0); // ukl_socket

  server.sin_family = AF_INET;
  server.sin_port = __builtin_bswap16 (port);
  server.sin_addr.s_addr = (uint32_t) 0x00000000;

  int opt_val = 1;
  setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR, &opt_val, sizeof opt_val); // ukl_

  err = bind(server_fd, (struct sockaddr *) &server, sizeof(server));

  err = listen(server_fd, 128);

  while (1) {
    socklen_t client_len = sizeof(client);
    client_fd = accept(server_fd, (struct sockaddr *) &client, &client_len); // ukl_accept

    while (1) {
      int read = recv(client_fd, buf, BUFFER_SIZE, 0); //  (recvfrom, fd, buf, len, flags, NULL, NULL);

      if (!read) break;

      printf("Message received: %s\n", buf);

      err = send(client_fd, buf, read, 0); // (sendto, fd, buf, len, flags, NULL, 0);

    }
  }

  return 0;
}