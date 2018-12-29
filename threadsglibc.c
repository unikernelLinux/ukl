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

#include <linux/types.h>
#include <linux/socket.h>
#include <asm/string.h>
#include <asm/ioctl.h>
#include <linux/ukl.h>
#include <uapi/linux/in.h>
#include <linux/if.h>
#include <linux/inet.h>
#include <linux/delay.h>

#include <linux/sched.h>
#include <linux/smp.h>
#include <linux/cpumask.h>

#include <asm/sections.h>
#include <asm/prctl.h>

#define MAX_THREADS 3

struct task_struct *thread[MAX_THREADS];
void * my_tls[MAX_THREADS];

__thread int myCounter __attribute__ ((aligned (4096))) = 0;
//__thread int myCounter[1024] = {0};

void cpuprint(int a){

	// loadsegment(fs, 0);
	// wrmsrl(MSR_FS_BASE, __tls_start + a*sizeof(int));
	// thread[a]->thread.fsbase = __tls_start + a*sizeof(int);

	struct task_struct *me = current;
	printk("TLS address for thread %d is %lx\n", a, me->thread.fsbase);


	int i = 0, j = 0, k = 0;
	while(1){
		myCounter = myCounter + a;
		printk("Thread %d: New value of myCounter = %d\n", a, myCounter);
		// printk("In kthread %d\n", a);
		while(i < 100000000){
			i++;
			while(j < 100000000){
				j++;
				while( k < 100000000){
					k++;
				}
				k = 0;
			}
			j = 0;
		}
		i = 0;
		cond_resched();
	}
}

int kmain(void)
{
	// loadsegment(fs, 0);
	// wrmsrl(MSR_FS_BASE, __tls_start);
	volatile int ret;
	int i = 0;
	void *tls;

	printk("__tls_start is %lx\n", __tls_start);
	printk("__tls_end %lx\n", __tls_end);

	tls = vmalloc(4096);
	memcpy(tls, __tls_start, 4096);
	tls = tls - 0x1000;
	printk("TLS address for main thread is %lx\n", tls);

	ret = do_arch_prctl_64(current, ARCH_SET_FS, tls);

	myCounter = myCounter -10;

	printk("Thread main: New value of myCounter = %d\n", myCounter);

	for(i = 0; i < MAX_THREADS; i++){

		// my_tls[i] = vmalloc(4096);
		// memcpy(my_tls[i], __tls_start, 4096);

		thread[i] = ukl_kthread_run((void *)cpuprint, i, "Thread %d\n", i);
	}

	while(1){
          cond_resched();
        }
	
}