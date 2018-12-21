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
#include <uapi/linux/sched/types.h>

#define MAX_THREADS 1
#define THREAD_TLS_SIZE 4096

struct kthread_create_info
{
	/* Information passed to kthread() from kthreadd. */
	int (*threadfn)(void *data);
	void *data;
	int node;

	/* Result passed back to kthread_create() from kthreadd. */
	struct task_struct *result;
	struct completion *done;

	struct list_head list;
};

struct task_struct *thread[MAX_THREADS];
void * my_tls[MAX_THREADS];
long pids[MAX_THREADS];

__thread int myCounter = 0;

// copy thread local storage from segment to threads stack


void cpuprint(int a){
	int i = 0, j = 0, k = 0;
	while(1){
		// printk("Thread %d running on CPU no. %d.\n", a, smp_processor_id());
		myCounter = myCounter + a + 1;
		printk("Thread %d: New value of myCounter = %d\n", a + 1, myCounter);
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

void cpuprint2(int a){
	printk("kthread %d just to set things up.\n", a);
}
int kmain(void)
{
	int i = 0;
	struct task_struct *me = current;
	struct kthread_create_info *create = kmalloc(sizeof(create),
						     GFP_KERNEL);

	kthread_run((void *)cpuprint2, 1, "kthread\n");

	if (!create)
		return ERR_PTR(-ENOMEM);

	loadsegment(fs, 0);	
	wrmsrl(MSR_FS_BASE, __tls_start);


	//Create child stack for all threads
	for(i = 0; i < MAX_THREADS; i++){
		thread[i] = ukl_malloc(sizeof(struct task_struct));

		create->threadfn = (void *)cpuprint;
		create->data = i;
		create->node = -1;
		create->done = 0;

		// my_stacks[i] = vmalloc(8392704);
		my_tls[i] = vmalloc(4096);
		memcpy(my_tls[i], __tls_start, 4096);
		// thread[i]->thread.fsbase = my_tls[i];
		// printk("Memory address = %p\n", my_stacks[i]);
		// thread[i]->stack = my_stacks[i];
		pids[i] = _do_fork(CLONE_VM|CLONE_FS|CLONE_FILES|CLONE_SIGHAND|
			CLONE_THREAD|CLONE_SETTLS|CLONE_PARENT_SETTID|
			CLONE_CHILD_CLEARTID, (void *)kthread, create, thread[i]->pid,
			thread[i]->pid, my_tls[i]);
		// pids[i] = _do_fork(CLONE_VM|CLONE_FS|CLONE_FILES|CLONE_SIGHAND|
		// 	CLONE_THREAD|CLONE_SYSVSEM|CLONE_SETTLS|CLONE_PARENT_SETTID|
		// 	CLONE_CHILD_CLEARTID, my_stacks[i], 8392704, thread[i]->pid,
		// 	thread[i]->pid, my_tls[i]);
		printk("New pid is %ld\n", pids[i]);

		thread[i] = create->result;
		if (!IS_ERR(thread[i])) {
			static const struct sched_param param = { .sched_priority = 0 };
			char name[TASK_COMM_LEN];

			/*
			 * task is already visible to other tasks, so updating
			 * COMM must be protected.
			 */
			// vsnprintf(name, sizeof(name), "Thread\n", 0);
			set_task_comm(thread[i], "Thread new\0");
			/*
			 * root may have changed our (kthreadd's) priority or CPU mask.
			 * The kernel thread should not inherit these properties.
			 */
			sched_setscheduler_nocheck(thread[i], SCHED_NORMAL, &param);
			set_cpus_allowed_ptr(thread[i], cpu_all_mask);
		}
		kfree(create);
		// return task;
	}

	
	while(1){
          cond_resched();
        }

	return 0;
}