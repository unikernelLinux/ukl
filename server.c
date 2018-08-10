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

    /*
     * msg.msg_iov->iov_base is declared as follows:
     * void __user *iov_base;
     * which means there is an user space pointer in 'msg'
     * use set_fs(KERNEL_DS) to make the pointer safe to kernel space
     */
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

int kmain(void)
{
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

    server_err = new_socket->ops->getname(new_socket, (struct sockaddr *)&addr_cli, 2);
    if (server_err < 0)
    {
        printk(KERN_INFO "getname failed\n");
    }else{
        printk(KERN_INFO "getname  success\n");
    }

    tmp = inet_ntoa(&addr_cli.sin_addr);
    printk("got connected from : %s %d\n", tmp, ntohs(addr_cli.sin_port));

    while (1)
    {
        memset(buf, 0, sizeof(buf));
        len = krecv(new_socket, buf, sizeof(buf), 0);
        if (len > 0)
        {
            printk("got message : %s\n", buf);
            /*ksend(sockfd_cli, buf, len, 0);
            if (memcmp(buf, "quit", 4) == 0)*/
                break;
        }
    }

    server_err = listen_socket->ops->release(listen_socket);

    if (listen_socket)
        sock_release(listen_socket);

    server_err = new_socket->ops->release(new_socket);

    if (new_socket)
        sock_release(new_socket);




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