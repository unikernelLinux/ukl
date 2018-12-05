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

#define MAX_THREADS 2

struct task_struct *thread[MAX_THREADS];

__thread int myCounter __attribute__ ((aligned (4096))) = 0;
//__thread int myCounter[1024] = {0};

void cpuprint(int a){
	int i = 0, j = 0, k = 0;
	while(1){
		// printk("Thread %d running on CPU no. %d.\n", a, smp_processor_id());
		myCounter = myCounter - a;
		printk("Thread %d: New value of myCounter = %d", a, myCounter);
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

static int get_free_idx(void)
{
	struct thread_struct *t = &current->thread;
	int idx;

	for (idx = 0; idx < GDT_ENTRY_TLS_ENTRIES; idx++)
		if (desc_empty(&t->tls_array[idx]))
			return idx + GDT_ENTRY_TLS_MIN;
	return -ESRCH;
}

int kmain(void)
{
	int ret = -10;
	int idx;
	struct user_desc __user *u_info = ukl_malloc(sizeof(struct user_desc));

	idx = get_free_idx();
	printk("Entry number = %d\n", idx);
	
	u_info->entry_number = idx;
	u_info->base_addr = __tls_start;

	ret = ukl_set_thread_area(u_info);
	if(ret < 0){
		printk("Can't set thread area\n");
	}

	printk("Entry number = %d\n", u_info->entry_number);

	// for(c = 0; c < 10000; c++){
	// 	printk("Setting fs to %d\n", c);
	// 	ret = ukl_arch_prctl(ARCH_SET_FS, c);
	// }
	//ret = x86_fsbase_write_task(current, __tls_start);
	
	ret = ukl_arch_prctl(ARCH_SET_FS, idx);
	if(ret < 0){
		printk("Can't set value of fs register\n");
	}

	printk("Main Thread running on CPU no. %d.\n", smp_processor_id());

	// myCounter = myCounter - 1;
	// printk("Main Thread: New value of myCounter = %d", myCounter);
	int i = 0;
	for(; i < MAX_THREADS; i++){
		thread[i] = kthread_run((void *)cpuprint, i, "Thread %d", i);
	}

	while(1){
          cond_resched();
        }
	
}