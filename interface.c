/* Kernel Memcached
 * Anthony Chivetta <anthony@chivetta.org>
 *
 * Please see LICENSE for copyright information.  This file is origional to the
 * kmemcached project.  Some inspiration for this file was taken from
 * http://kernelnewbies.org/Simple_UDP_Server and linux's net/ceph/messenger.c.
 *
 * This file is the main routene for kmemcached.  The initialization code
 * creates a listening socket, initializes the protocol parser and storage
 * enginge, and spins off a kthread which is pulling work from a kthread_worker
 * workqueue.  This workqueue design is necessairy as socket callbacks are
 * called in interrupt context and so should be quick and may not sleep.  The
 * listening socket's data_ready callback is set to callback_listen() which will
 * queue up listen_work() to be executed whenever a new connection is received.
 * listen_work() will accept the connection, create and initialize the
 * per-client data structures and set the callbacks on the socket.
 * callback_{write_space,data_ready,state_change}() handle events on the client
 * sockets adding them to the worqueue as necessairy.
 *
 * A LOT of work still needs to be done here.  Please see the TODOs littered
 * throughout the file for an idea.
 */

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/workqueue.h>
// #include <linux/smp_lock.h>
#include <linux/errno.h>
#include <linux/types.h>
#include <linux/netdevice.h>
#include <linux/ip.h>
#include <linux/in.h>
#include <linux/delay.h>
#include <net/sock.h>
#include <net/tcp_states.h>

#include <linux/ukl.h>
#include <linux/kmain.h>

unsigned int inet_addr2(char* ip)
{
    int a, b, c, d;
    char addr[4];
    
    sscanf(ip, "%d.%d.%d.%d", &a, &b, &c, &d);
    addr[0] = a;
    addr[1] = b;
    addr[2] = c;
    addr[3] = d;
    
    return *(unsigned int *)addr;
}

int interface(void)
{
    int fd = -1;
    int retioctl = -1;

    struct sockaddr_in sin;
    struct ifreq ifr;

    fd = ukl_socket(AF_INET, SOCK_DGRAM, IPPROTO_IP);

    if(fd < 0){
        printk("Problem with socket\n");
        return  -1;
    }

    strncpy(ifr.ifr_name, "eth0\0", 5);
    memset(&sin, 0, sizeof(struct sockaddr));
    sin.sin_family = AF_INET;
    sin.sin_port=htons(0);
    sin.sin_addr.s_addr = inet_addr2("10.0.2.15");
    memcpy(&ifr.ifr_addr, &sin, sizeof(struct sockaddr));

    retioctl = ukl_ioctl(fd, SIOCSIFADDR, &ifr);
    if(retioctl < 0){
        printk("1st Ioctl failed\n");
        return  -1;
    }

    /*strncpy(ifr.ifr_name, "eth0", 4);*/
    ifr.ifr_flags |= IFF_BROADCAST;
    ifr.ifr_flags |= IFF_MULTICAST;

    retioctl = ukl_ioctl(fd, SIOCGIFFLAGS, &ifr);
    if(retioctl < 0){
        printk("2nd Ioctl failed\n");
        return  -1;
    }

    /*strncpy(ifr.ifr_name, "eth0", 4);*/
    ifr.ifr_flags |= IFF_UP;
    /*ifr.ifr_flags |= IFF_BROADCAST;*/
    ifr.ifr_flags |= IFF_RUNNING;
    /*ifr.ifr_flags |= IFF_MULTICAST;*/

    retioctl = ukl_ioctl(fd, SIOCSIFFLAGS, &ifr);
    if(retioctl < 0){
        printk("3rd Ioctl failed\n");
        return  -1;
    }
    
   
    return 0;
}
