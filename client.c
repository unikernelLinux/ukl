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
    struct socket *cli_socket, *new_socket;
    int cli_err, addr_len;
    struct sockaddr_in addr_srv;
    char buf[100], *tmp;


    cli_err = sock_create(AF_INET, SOCK_STREAM, IPPROTO_TCP, &cli_socket);
    if (cli_err < 0)
    {
        printk(KERN_INFO "sock_create failed\n");
    }else{
        printk(KERN_INFO "sock_create success\n");
    }

    addr_srv.sin_family = AF_INET;
    addr_srv.sin_port = htons(5555);
    addr_srv.sin_addr.s_addr = inet_addr("127.0.0.1");
    addr_len = sizeof(struct sockaddr_in);

    cli_err = cli_socket->ops->connect(cli_socket, (struct sockaddr*)&addr_srv, addr_len, O_RDWR);
    if (cli_err < 0)
    {
        printk(KERN_INFO "connect failed\n");
    }else{
        printk(KERN_INFO "connect success\n");
    }

    tmp = "quit";
    printk("connected to : %s %d\n", tmp, ntohs(addr_srv.sin_port));

    ksend(cli_socket, tmp, 4, 0);

    cli_err = cli_socket->ops->release(cli_socket);

    if (cli_socket)
        sock_release(cli_socket);



















/*    int server_err, addr_len, len;
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

    /*while(1){
        server_err = listen_socket->ops->accept(listen_socket, new_socket, ~O_NONBLOCK, 1);
        if (server_err < 0)
        {
            printk(KERN_INFO "accept failed\n");
        }else{
            printk(KERN_INFO "accept success\n");
            /*break;
        }
    /*}

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
            if (memcmp(buf, "quit", 4) == 0)
                break;
        }
    }

    server_err = listen_socket->ops->release(listen_socket);

    if (listen_socket)
        sock_release(listen_socket);

    server_err = new_socket->ops->release(new_socket);

    if (new_socket)
        sock_release(new_socket);*/
}