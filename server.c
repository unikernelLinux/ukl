/*https://vcansimplify.wordpress.com/2013/03/14/c-socket-tutorial-echo-server/*/
/*Required Headers*/

#include <linux/types.h>
#include <linux/socket.h>
#include <asm/string.h>
#include <asm/ioctl.h>
#include <linux/ukl.h>
#include <uapi/linux/in.h>
#include <linux/if.h>
#include <linux/inet.h>
#include <linux/delay.h>

/*
===========================================================
***********************************************************
===========================================================
*/
/*
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/slab.h>
#include <linux/kthread.h>

#include <linux/errno.h>
#include <linux/types.h>

#include <linux/netdevice.h>
#include <linux/ip.h>
#include <linux/in.h>

#include <linux/unistd.h>
#include <linux/wait.h>

#include <net/sock.h>
#include <net/tcp.h>
#include <net/inet_connection_sock.h>
#include <net/request_sock.h>

#define DEFAULT_PORT 5555
#define MODULE_NAME "tmem_tcp_server"
#define MAX_CONNS 16

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Aby Sam Ross");

static int tcp_listener_stopped = 0;
static int tcp_acceptor_stopped = 0;

DEFINE_SPINLOCK(tcp_server_lock);

struct tcp_conn_handler_data
{
        struct sockaddr_in *address;
        struct socket *accept_socket;
        int thread_id;
};

struct tcp_conn_handler
{
        struct tcp_conn_handler_data *data[MAX_CONNS];
        struct task_struct *thread[MAX_CONNS];
        int tcp_conn_handler_stopped[MAX_CONNS]; 
};

struct tcp_conn_handler *tcp_conn_handler;
 
struct socket *listen_socket;
struct task_struct *thread;
struct task_struct *accept_thread;


struct tcp_server_service *tcp_server;

char *inet_ntoa(struct in_addr *in)
{
        char *str_ip = NULL;
        u_int32_t int_ip = 0;
        
        str_ip = kmalloc(16 * sizeof(char), GFP_KERNEL);

        if(!str_ip)
                return NULL;
        else
                memset(str_ip, 0, 16);

        int_ip = in->s_addr;

        sprintf(str_ip, "%d.%d.%d.%d", (int_ip) & 0xFF, (int_ip >> 8) & 0xFF,
                                 (int_ip >> 16) & 0xFF, (int_ip >> 16) & 0xFF);
        
        return str_ip;
}

int tcp_server_receive(struct socket *sock, int id,struct sockaddr_in *address,\
                unsigned char *buf,int size, unsigned long flags)
{
        struct msghdr msg;
        struct kvec vec;
        int len;
        char *tmp = NULL;
        
        if(sock==NULL)
        {
                pr_info(" *** mtp | tcp server receive socket is NULL| "
                        " tcp_server_receive *** \n");
                return -1;
        }

        msg.msg_name = 0;
        msg.msg_namelen = 0;
        msg.msg_control = NULL;
        msg.msg_controllen = 0;
        msg.msg_flags = flags;

        vec.iov_len = size;
        vec.iov_base = buf;

read_again:

        /*
        if(kthread_should_stop())
        {
                pr_info(" *** mtp | tcp server handle connection thread "
                        "stopped | tcp_server_receive *** \n");
                //tcp_conn_handler->thread[id] = NULL;
                tcp_conn_handler->tcp_conn_handler_stopped[id]= 1;
                //sock_release(sock);
                do_exit(0);
        }
        

        len = kernel_recvmsg(sock, &msg, &vec, size, size, flags);

        if(len == -EAGAIN || len == -ERESTARTSYS)
                goto read_again;
        
        tmp = inet_ntoa(&(address->sin_addr));

        pr_info("client-> %s:%d, says: %s\n", tmp, ntohs(address->sin_port), buf);

        kfree(tmp);
        //len = msg.msg_iter.kvec->iov_len;
        return len;
}

int connection_handler(void *data)
{
       struct tcp_conn_handler_data *conn_data = 
               (struct tcp_conn_handler_data *)data;

       struct sockaddr_in *address = conn_data->address;
       struct socket *accept_socket = conn_data->accept_socket;
       int id = conn_data->thread_id;

       int ret; 
       int len = 49;
       unsigned char in_buf[len+1];
       unsigned char out_buf[len+1];
       //char *tmp;

       
       while(1)
       {

              pr_info("receiving message\n");
              memset(in_buf, 0, len+1);
              ret = tcp_server_receive(accept_socket, id, address, in_buf, len,\
                                       MSG_DONTWAIT);
              if(ret > 0)
              {
                      if(memcmp(in_buf, "HOLA", 4) == 0)
                      {
                              memset(out_buf, 0, len+1);
                              strcat(out_buf, "HOLASI");
                              pr_info("sending response: %s\n", out_buf);
                              //tcp_server_send(accept_socket, id, out_buf,\
                                              strlen(out_buf), MSG_DONTWAIT);
                      }
                      
                      if(memcmp(in_buf, "ADIOS", 5) == 0)
                      {
                              memset(out_buf, 0, len+1);
                              strcat(out_buf, "ADIOSAMIGO");
                              pr_info("sending response: %s\n", out_buf);
                              //tcp_server_send(accept_socket, id, out_buf,\
                                              strlen(out_buf), MSG_DONTWAIT);
                              break;
                      }
              }
       }
}


int tcp_server_accept(void)
{
        int accept_err = 0;
        struct socket *socket;
        struct socket *accept_socket;
        struct inet_connection_sock *isock; 
        int id = 0;
        
        socket = listen_socket;
        pr_info(" *** mtp | creating the accept socket | tcp_server_accept "
                "*** \n");

        while(1)
        {
                struct tcp_conn_handler_data *data = NULL;
                struct sockaddr_in *client = NULL;
                char *tmp;
                int addr_len;

                accept_err =  
                        sock_create(listen_socket->sk->sk_family, listen_socket->type,\
                                    listen_socket->sk->sk_protocol, &accept_socket);

                if(accept_err < 0 || !accept_socket)
                {
                        pr_info(" *** mtp | accept_error: %d while creating "
                                "tcp server accept socket | "
                                "tcp_server_accept *** \n", accept_err);
                }

                //accept_socket->type = socket->type;
                //accept_socket->ops  = socket->ops;

                isock = inet_csk(socket->sk);

               pr_info("accept connection\n");

               accept_err = listen_socket->ops->accept(listen_socket, accept_socket, ~O_NONBLOCK, 1);
    

               if(accept_err < 0)
               {
                       pr_info(" *** mtp | accept_error: %d while accepting "
                               "tcp server | tcp_server_accept *** \n",
                               accept_err);
               }
               
               pr_info("handle connection\n");

               connection_handler(data);
		}
               
}
*/
/*
===========================================================
***********************************************************
===========================================================
*/

unsigned int inet_addr(char* ip)
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

char *inet_ntoa(struct in_addr *in)
{
    char* str_ip = NULL;
    u_int32_t int_ip = 0;
    
    str_ip = kmalloc(16 * sizeof(char), GFP_KERNEL);
    if (!str_ip)
        return NULL;
    else
        memset(str_ip, 0, 16);

    int_ip = in->s_addr;
    
    sprintf(str_ip, "%d.%d.%d.%d",  (int_ip      ) & 0xFF,
                                    (int_ip >> 8 ) & 0xFF,
                                    (int_ip >> 16) & 0xFF,
                                    (int_ip >> 24) & 0xFF);
    return str_ip;
}

ssize_t krecv(struct socket * socket, void *buffer, size_t length, int flags)
{
    struct socket *sk;
    struct msghdr msg;
    struct iovec iov;
    int ret;
#ifndef KSOCKET_ADDR_SAFE
    mm_segment_t old_fs;
#endif

    memset(&msg,0,sizeof(msg));
    sk = (struct socket *)socket;

    iov.iov_base = (void *)buffer;
    iov.iov_len = (__kernel_size_t)length;

    //type
    msg.msg_iter.type = READ;
    //address
    msg.msg_name = NULL;
    msg.msg_namelen = 0;
    //msg_iter
    msg.msg_iter.iov = &iov;
    msg.msg_iter.iov_offset = 0;
    msg.msg_iter.count = iov.iov_len;
    msg.msg_iter.nr_segs = 1;
    //control
    msg.msg_control = NULL;
    msg.msg_controllen = 0;

   
#ifndef KSOCKET_ADDR_SAFE
    old_fs = get_fs();
    set_fs(KERNEL_DS);
#endif
    //hardik
    ret = sock_recvmsg(sk, &msg, flags);
#ifndef KSOCKET_ADDR_SAFE
    set_fs(old_fs);
#endif
    if (ret < 0)
        goto out_krecv;
    //ret = msg.msg_iov.iov_len;//?
    
out_krecv:
    return ret;

}

ssize_t ksend(struct socket * socket, const void *buffer, size_t length, int flags)
{
    struct socket *sk;
    struct msghdr msg;
    struct iovec iov;
    int len;
#ifndef KSOCKET_ADDR_SAFE
    mm_segment_t old_fs;
#endif

    sk = (struct socket *)socket;

    iov.iov_base = (void *)buffer;
    iov.iov_len = (__kernel_size_t)length;

    //type
    msg.msg_iter.type = READ;
    //address
    msg.msg_name = NULL;
    msg.msg_namelen = 0;
    //msg_iter
    msg.msg_iter.iov = &iov;
    msg.msg_iter.iov_offset = 0;
    msg.msg_iter.count = iov.iov_len;
    msg.msg_iter.nr_segs = 1;
    //control
    msg.msg_control = NULL;
    msg.msg_controllen = 0;

    msg.msg_flags = flags;

#ifndef KSOCKET_ADDR_SAFE
    old_fs = get_fs();
    set_fs(KERNEL_DS);
#endif
    //hardik
    len = sock_sendmsg(sk, &msg);//?
#ifndef KSOCKET_ADDR_SAFE
    set_fs(old_fs);
#endif
    
    return len;//len ?
}

/*
===========================================================
***********************************************************
===========================================================
*/

int kmain(void)
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
    sin.sin_addr.s_addr = inet_addr("10.0.2.15");
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

    msleep(3000);

    /*
    ===========================================================
    ***********************************************************
    ===========================================================
    */
    /*
    int server_err;
    struct socket *conn_socket;
    struct sockaddr_in server;

    server_err = sock_create(PF_INET, SOCK_STREAM, IPPROTO_TCP, &listen_socket);
    
    if(server_err < 0)
    {
            pr_info(" *** mtp | Error: %d while creating tcp server "
                    "listen socket | tcp_server_listen *** \n", server_err);
    }

    conn_socket = listen_socket;
    listen_socket->sk->sk_reuse = 1;

    //server.sin_addr.s_addr = htonl(INADDR_ANY);
    server.sin_addr.s_addr = INADDR_ANY;
    server.sin_family = AF_INET;
    server.sin_port = htons(DEFAULT_PORT);

    server_err = 
    listen_socket->ops->bind(listen_socket, (struct sockaddr*)&server,\
                    sizeof(server));

    if(server_err < 0)
    {
            pr_info(" *** mtp | Error: %d while binding tcp server "
                    "listen socket | tcp_server_listen *** \n", server_err);
    }

    //while(1)
    //{
    server_err = listen_socket->ops->listen(listen_socket, 16);

    if(server_err < 0)
    {
            pr_info(" *** mtp | Error: %d while listening in tcp "
                    "server listen socket | tcp_server_listen "
                    "*** \n", server_err);
    }

    tcp_server_accept();

	*/
    /*
    ===========================================================
    ***********************************************************
    ===========================================================
    */

    
    int server_err, addr_len, len;
    struct socket *listen_socket, *new_socket;
    struct sockaddr_in server, addr_cli;
    char buf[100], *tmp;

    server_err = sock_create(PF_INET, SOCK_STREAM, IPPROTO_TCP, &listen_socket);
    if (server_err < 0)
    {
        printk(KERN_INFO "sock_create failed\n");
    }else{
        printk(KERN_INFO "sock_create success\n");
    }

    server.sin_addr.s_addr = INADDR_ANY;
    server.sin_family = AF_INET;
    server.sin_port = htons(5555);
    addr_len = sizeof(struct sockaddr_in);

    server_err = listen_socket->ops->bind(listen_socket, (struct sockaddr *)&server, addr_len);
    if (server_err < 0)
    {
        printk(KERN_INFO "bind failed\n");
    }else{
        printk(KERN_INFO "bind success\n");
    }


    server_err = listen_socket->ops->listen(listen_socket, 100);
    if (server_err < 0)
    {
        printk(KERN_INFO "listen failed\n");
    }else{
        printk(KERN_INFO "listen success\n");
    }

    server_err = sock_create(listen_socket->sk->sk_family, listen_socket->type, \
        listen_socket->sk->sk_protocol, &new_socket);
    if (server_err < 0)
    {
        printk(KERN_INFO "new sock_create failed\n");
    }else{
        printk(KERN_INFO "new sock_create success\n");
    }


    server_err = listen_socket->ops->accept(listen_socket, new_socket, ~O_NONBLOCK, 1);
    if (server_err < 0)
    {
        printk(KERN_INFO "accept failed\n");
    }else{
        printk(KERN_INFO "accept success\n");
    }


while (1)
    {    
        memset(buf, 0, sizeof(buf));
        len = krecv(new_socket, buf, sizeof(buf), 0);
        if (len > 0)
        {
            printk("got message : %s\n", buf);
            //ksend(sockfd_cli, buf, len, 0);
            //if (memcmp(buf, "quit", 4) == 0)
                //break;
        }else{
        	break;
        }
    }

    server_err = listen_socket->ops->release(listen_socket);

    if (listen_socket)
        sock_release(listen_socket);

    server_err = new_socket->ops->release(new_socket);

    if (new_socket)
        sock_release(new_socket);

    /*
	===========================================================
    ***********************************************************
    ===========================================================
    */

    /*long fd = 1;
    ssize_t size;

    char str[100];
    int listen_fd, comm_fd;
    int i = 0;

    //struct sockaddr_in servaddr;
    //listen_fd = ukl_socket(AF_INET, SOCK_STREAM, 0);

    size = ukl_write(fd, "In Server.c\n", -1);
    
    struct ifreq ifr;
 
    struct sockaddr_in servaddr, client;
 
    listen_fd = ukl_socket(AF_INET, SOCK_STREAM, 0);

    ifr.ifr_addr.sa_family = AF_INET;
    strncpy(ifr.ifr_name, "eth0", IFNAMSIZ-1); 
    ukl_ioctl(fd, SIOCGIFADDR, &ifr);
    printk("%s\n", inet_ntoa(((struct sockaddr_in *)&ifr.ifr_addr)->sin_addr));

    //bzero( &servaddr, sizeof(servaddr));
 
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = htons(INADDR_ANY);
    servaddr.sin_port = htons(5555);
 
    ukl_bind(listen_fd, (struct sockaddr *) &servaddr, sizeof(servaddr));
    size = ukl_write(fd, "After bind\n", -1);
 
    ukl_listen(listen_fd, 10);
    size = ukl_write(fd, "After listen\n", -1);
 
    comm_fd = ukl_accept(listen_fd, (struct sockaddr*)&client, sizeof(client));
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
    size = ukl_write(fd, "After while\n", -1);*/
}