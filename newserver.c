// https://github.com/mafintosh/echo-servers.c/blob/master/tcp-echo-server.c

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h> 
#include <netinet/in.h> 
// #include <linux/ukl.h>

#define BUFFER_SIZE 1024

ssize_t rrecv (int fd, void *buf, size_t len, int flags, int delay){
    return ukl_recvfrom(fd, buf, len, flags, NULL, NULL, delay);
}

ssize_t send (int fd, const void *buf, size_t len, int flags){
    return ukl_sendto(fd, buf, len, flags, NULL, 0);
}

int kmain (int argc, char *argv[]) {

    int delay = 5000;

    int port = 5555;

    int server_fd, client_fd, err;
    struct sockaddr_in server, client;
    char buf[BUFFER_SIZE];
    memset( buf, '\0', BUFFER_SIZE);

    server_fd = ukl_socket(AF_INET, SOCK_STREAM, 0); // ukl_socket

    server.sin_family = AF_INET;
    server.sin_port = __builtin_bswap16 (port);
    server.sin_addr.s_addr = (uint32_t) 0x00000000;

    int opt_val = 1;
    ukl_setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR, &opt_val, sizeof opt_val); // ukl_

    err = ukl_bind(server_fd, (struct sockaddr *) &server, sizeof(server));

    err = ukl_listen(server_fd, 128);

    while (1) {
        socklen_t client_len = sizeof(client);
        client_fd = ukl_accept(server_fd, (struct sockaddr *) &client, &client_len); // ukl_accept

        while (1) {
            int read = rrecv(client_fd, buf, BUFFER_SIZE, 0, delay); //  (recvfrom, fd, buf, len, flags, NULL, NULL);
            if(delay > 2000){
                delay--;
            }

            if(buf[0] == '\0') continue;

            err = send(client_fd, buf, read, 0); // (sendto, fd, buf, len, flags, NULL, 0);
                memset( buf, '\0', BUFFER_SIZE);

        }
    }

    while(1);

  // return 0;
}

// wait_woken+0x4a/0x80
// [    6.124618]  sk_wait_data+0x11a/0x130
// [    6.124618]  ? do_wait_intr_irq+0x80/0x80
// [    6.124618]  tcp_recvmsg+0x804/0xbd0
// [    6.124618]  inet_recvmsg+0x56/0xd0
// [    6.124618]  __sys_recvfrom+0x15d/0x180
