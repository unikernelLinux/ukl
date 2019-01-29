/*
 * ukl.c
 *
 * Copyright (C) 2018, Ali Raza <aliraza@bu.edu>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */
#include <linux/ukl.h>

// int dataCounter = 0;

// struct recvstruct
// {
// 	int fd;
// 	void __user *ubuf;
// 	size_t size;
// 	unsigned int flags;
// 	struct sockaddr __user *addr;
// 	int __user *addr_len;
// };

// struct recvstruct *data;

ssize_t ukl_write(int fd, const void* buf, size_t count) {
	if(count == -1)
		count = strlen(buf);
	return ksys_write(fd, buf, count);
}

ssize_t ukl_read(int fd, const void* buf, size_t count){
	return ksys_read(fd, buf, count);
}

long ukl_open(char *filename){
	long fd;
	fd = do_sys_open(AT_FDCWD, filename, O_WRONLY | O_CREAT, 
		S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	return fd;
}

long ukl_close(int fd){
	int retval = __close_fd(current->files, fd);
	return retval;
}

void * ukl_malloc(size_t size){
	// taken form slab.h kmalloc implementation
	return __kmalloc(size, GFP_KERNEL);
}

int ukl_utsname(struct new_utsname *name){ //in /kernel/sys.c
	//int errno = 0;
	struct new_utsname *kname;

	kname = utsname();
	memcpy(name, kname, sizeof(struct new_utsname));

	return 0;
}

int ukl_exit_group(int error_code){
	ssize_t msg;
	msg = ukl_write(1, "Process exited, now idling!\n", -1);
	while(1){

	}
	// if I dont call the loop here, kernel will go into panic because I attempt to 
	// kill init
	do_group_exit((error_code & 0xff) << 8);
}

int ukl_socket(int family, int type, int protocol){
	ktime_t now;
	now = ktime_to_ns(ktime_get());
	printk("in socket %llu ns", now);
	return __sys_socket(family, type, protocol);
}

int ukl_bind(int fd, struct sockaddr __user *umyaddr, int addrlen){
	return __sys_bind(fd, umyaddr, addrlen);
}

int ukl_connect(int fd, struct sockaddr __user *uservaddr, int addrlen){
	return __sys_connect(fd, uservaddr, addrlen);
}

int ukl_listen(int fd, int backlog){
	printk("in listen\n");
	return __sys_listen(fd, backlog);

}

int ukl_accept(int fd, struct sockaddr *upeer_sockaddr, int *upeer_addrlen){
	return __sys_accept4(fd, upeer_sockaddr, upeer_addrlen, 0);
}

int ukl_ioctl(int fd, int cmd, long arg){
	return ksys_ioctl(fd, cmd, arg);
}

int ukl_recvfrom(int fd, void __user *ubuf, size_t size, unsigned int flags, struct sockaddr __user *addr, int __user *addr_len){

	// struct recvstruct *data;
	// struct task_struct *thread1;

	// data = kmalloc(sizeof(struct recvstruct), GFP_KERNEL);
	// memset(data, 0, sizeof(struct recvstruct));

	// data->fd = fd;
	// data->ubuf = ubuf;
	// data->size = size;
	// data->flags = flags;
	// data->addr = addr;
	// data->addr_len = addr_len;

	// dataCounter++;
	// if(dataCounter == 1000000){
	// 	dataCounter = 0;
	// }

	// thread1 = kthread_run((void *)ukl__sys_recvfrom, data, "ukl_recvfrom");

	// // cond_resched();
	// // kthread_stop(thread1);

	// // 	return 0;
	// udelay(delay);
	return __sys_recvfrom(fd, ubuf, size, flags, addr, addr_len);
}
int ukl_sendto(int fd, void *buff, size_t len, unsigned int flags, struct sockaddr *addr, int addr_len){
	return __sys_sendto(fd, buff, len, flags, addr, addr_len);
}

int ukl_setsockopt(int fd, int level, int optname, char *optval, int optlen){
	return __sys_setsockopt(fd, level, optname, optval, optlen);
}

long ukl_arch_prctl(int option, unsigned long arg2){
	long ret;

	ret = do_arch_prctl_64(current, option, arg2);
	if (ret == -EINVAL)
		ret = do_arch_prctl_common(current, option, arg2);

	return ret;
}

int ukl_get_thread_area(struct user_desc __user *u_info){
	return do_get_thread_area(current, -1, u_info);
}

int ukl_set_thread_area(struct user_desc __user *u_info){
	return do_set_thread_area(current, -1, u_info, 1);
}

long ukl_mmap(unsigned long addr, unsigned long len, unsigned long prot, unsigned long flags, unsigned long fd, unsigned long off){
	long error;
	error = -EINVAL;
	if (off & ~PAGE_MASK)
		goto out;

	error = ksys_mmap_pgoff(addr, len, prot, flags, fd, off >> PAGE_SHIFT);
out:
	return error;
}

// int ukl_uname(struct old_utsname * name){
// 	struct old_utsname tmp;

// 	if (!name)
// 		return -EFAULT;

// 	down_read(&uts_sem);
// 	memcpy(&tmp, utsname(), sizeof(tmp));
// 	up_read(&uts_sem);
// 	if (copy_to_user(name, &tmp, sizeof(tmp)))
// 		return -EFAULT;

// 	if (override_release(name->release, sizeof(name->release)))
// 		return -EFAULT;
// 	if (override_architecture(name))
// 		return -EFAULT;
// 	return 0;
// }

pid_t ukl_set_tid_address(int * tidptr){
	current->clear_child_tid = tidptr;

	return task_pid_vnr(current);
}

int ukl_set_robust_list(struct robust_list_head * head, size_t len){
	if (!futex_cmpxchg_enabled)
		return -ENOSYS;
	/*
	 * The kernel knows only one size for now:
	 */
	if (unlikely(len != sizeof(*head)))
		return -EINVAL;

	current->robust_list = head;

	return 0;
}

int ukl_rt_sigaction(int sig, const struct sigaction * act,	struct sigaction * oact, size_t sigsetsize){
	struct k_sigaction new_sa, old_sa;
	int ret;

	/* XXX: Don't preclude handling different sized sigset_t's.  */
	if (sigsetsize != sizeof(sigset_t))
		return -EINVAL;

	if (act && copy_from_user(&new_sa.sa, act, sizeof(new_sa.sa)))
		return -EFAULT;

	ret = do_sigaction(sig, act ? &new_sa : NULL, oact ? &old_sa : NULL);
	if (ret)
		return ret;

	if (oact && copy_to_user(oact, &old_sa.sa, sizeof(old_sa.sa)))
		return -EFAULT;

	return 0;
}

int ukl_rt_sigprocmask(int how, sigset_t * nset, sigset_t * oset, size_t sigsetsize){
	sigset_t old_set, new_set;
	int error;

	/* XXX: Don't preclude handling different sized sigset_t's.  */
	if (sigsetsize != sizeof(sigset_t))
		return -EINVAL;

	old_set = current->blocked;

	if (nset) {
		if (copy_from_user(&new_set, nset, sizeof(sigset_t)))
			return -EFAULT;
		sigdelsetmask(&new_set, sigmask(SIGKILL)|sigmask(SIGSTOP));

		error = sigprocmask(how, &new_set, NULL);
		if (error)
			return error;
	}

	if (oset) {
		if (copy_to_user(oset, &old_set, sizeof(sigset_t)))
			return -EFAULT;
	}

	return 0;
}

int ukl_prlimit64(pid_t pid, unsigned int resource,	const struct rlimit64 * new_rlim, struct rlimit64 * old_rlim){
	struct rlimit64 old64, new64;
	struct rlimit old, new;
	struct task_struct *tsk;
	unsigned int checkflags = 0;
	int ret;

	if (old_rlim)
		checkflags |= LSM_PRLIMIT_READ;

	if (new_rlim) {
		if (copy_from_user(&new64, new_rlim, sizeof(new64)))
			return -EFAULT;
		rlim64_to_rlim(&new64, &new);
		checkflags |= LSM_PRLIMIT_WRITE;
	}

	rcu_read_lock();
	tsk = pid ? find_task_by_vpid(pid) : current;
	if (!tsk) {
		rcu_read_unlock();
		return -ESRCH;
	}
	ret = check_prlimit_permission(tsk, checkflags);
	if (ret) {
		rcu_read_unlock();
		return ret;
	}
	get_task_struct(tsk);
	rcu_read_unlock();

	ret = do_prlimit(tsk, resource, new_rlim ? &new : NULL,
			old_rlim ? &old : NULL);

	if (!ret && old_rlim) {
		rlim_to_rlim64(&old, &old64);
		if (copy_to_user(old_rlim, &old64, sizeof(old64)))
			ret = -EFAULT;
	}

	put_task_struct(tsk);
	return ret;
}


int ukl_brk(unsigned long brk){
	return brk;
}

int ukl_fstat(unsigned int fd, struct __old_kernel_stat * statbuf){
	struct kstat stat;
	int error = vfs_fstat(fd, &stat);

	if (!error)
		error = cp_old_stat(&stat, statbuf);

	return error;
}

int ukl_mprotect(unsigned long start, size_t len, unsigned long prot){
	return do_mprotect_pkey(start, len, prot, -1);
}


long ukl_clone(unsigned long clone_flags, unsigned long newsp, int * parent_tidptr, unsigned long tls, int * child_tidptr){
	return _do_fork(clone_flags, newsp, 0, parent_tidptr, child_tidptr, tls);
}

int ukl_munmap(unsigned long addr, size_t len){
	return 0;
}

// int ukl_accept4(int fd, struct sockaddr __user * upeer_sockaddr, int __user * upeer_addrlen, int flags);
// {
// 	return __sys_accept4(fd, upeer_sockaddr, upeer_addrlen, flags);
// }

// long access(const char __user * filename, int mode)
// {
// 	return do_faccessat(AT_FDCWD, filename, mode);
// }

// unsigned long ukl_adjtimex(struct timex __user * txc_p)
// {
// 	struct timex txc;		/* Local copy of parameter */
// 	int ret;

// 	/* Copy the user data space into the kernel copy
// 	 * structure. But bear in mind that the structures
// 	 * may change
// 	 */
// 	if (copy_from_user(&txc, txc_p, sizeof(struct timex)))
// 		return -EFAULT;
// 	ret = do_adjtimex(&txc);
// 	return copy_to_user(txc_p, &txc, sizeof(struct timex)) ? -EFAULT : ret;
// }
