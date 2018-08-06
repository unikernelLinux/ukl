/*https://vcansimplify.wordpress.com/2013/03/14/c-socket-tutorial-echo-server/*/
/*Required Headers*/
 
#include <linux/types.h>
#include <linux/socket.h>
/*#include <netdb.h>*/
/*#include <stdio.h>*/
#include <asm/string.h>
#include <asm/ioctl.h>
#include <linux/ukl.h>
#include <uapi/linux/in.h>
#include <linux/if.h>
#include <linux/inet.h>

/*static char const * _ntop_inet(const struct in_addr * in, char * dst, ssize_t size)
{
    unsigned char const * b = (unsigned char const *)&in->s_addr;
    unsigned int i;
    unsigned int pos;
    unsigned int p;

    for(i = 0, pos = 0;; i++)
        if(i == sizeof(in->s_addr))
            break;
        else if((p = snprintf(&dst[pos], size - pos, "%s%u",
                        (i > 0) ? "." : "", b[i]))
                >= size - pos)
        {
            //errno = ENOSPC;
            return NULL;
        }
        else
            pos += p;
    return dst;
}

char const * inet_ntop(int family, const void * src, char * dst, int size)
{
    const struct in_addr * in = src;
    return _ntop_inet(in, dst, size);
}

char * inet_ntoa(struct in_addr in)
{
    static char ret[16];

    if(inet_ntop(AF_INET, &in, ret, sizeof(ret)) == NULL)
        return NULL;
    return ret;
}*/

int kmain(void)
{
    long fd = 1;
    ssize_t size;

    char str[100];
    int listen_fd, comm_fd;
    int i = 0;

    struct sockaddr_in servaddr;
    listen_fd = ukl_socket(AF_INET, SOCK_STREAM, 0);

    size = ukl_write(fd, "In Server.c\n", -1);
    
    /*struct ifreq ifr;
 
    struct sockaddr_in servaddr;
 
    listen_fd = ukl_socket(AF_INET, SOCK_STREAM, 0);

    ifr.ifr_addr.sa_family = AF_INET;
    strncpy(ifr.ifr_name, "eth0", IFNAMSIZ-1); 
    ukl_ioctl(fd, SIOCGIFADDR, &ifr);
    printk("%s\n", inet_ntoa(((struct sockaddr_in *)&ifr.ifr_addr)->sin_addr));
*/
    //bzero( &servaddr, sizeof(servaddr));
 
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = htons(INADDR_ANY);
    servaddr.sin_port = htons(5555);
 
    ukl_bind(listen_fd, (struct sockaddr *) &servaddr, sizeof(servaddr));
    size = ukl_write(fd, "After bind\n", -1);
 
    ukl_listen(listen_fd, 10);
    size = ukl_write(fd, "After listen\n", -1);
 
    comm_fd = ukl_accept(listen_fd, (struct sockaddr*) NULL, NULL);
    size = ukl_write(fd, "After accept\n", -1);
 
    while(1)
    {
        size = ukl_write(fd, "In While Loop\n", -1);

        for(i = 0; i < 100; i++){
            str[i] = '\0';
        }

        size = ukl_write(fd, "String zeroed out\n", -1);
 
//        bzero( str, 100);
 
        ukl_read(comm_fd,str,100);
 
        printk("Echoing back - %s",str);
 
        ukl_write(comm_fd, str, strlen(str)+1);
        ukl_write(1, str, strlen(str)+1);
 
    }
    size = ukl_write(fd, "After while\n", -1);
}