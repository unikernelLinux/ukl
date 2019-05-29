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
	// return __kmalloc(size, GFP_KERNEL);
	return vmalloc(size);
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
	return __sys_socket(family, type, protocol);
}

int ukl_bind(int fd, struct sockaddr __user *umyaddr, int addrlen){
	return __sys_bind(fd, umyaddr, addrlen);
}

int ukl_connect(int fd, struct sockaddr __user *uservaddr, int addrlen){
	return __sys_connect(fd, uservaddr, addrlen);
}

int ukl_listen(int fd, int backlog){
	return __sys_listen(fd, backlog);

}

int ukl_accept(int fd, struct sockaddr *upeer_sockaddr, int *upeer_addrlen){
	return __sys_accept4(fd, upeer_sockaddr, upeer_addrlen, 0);
}

int ukl_ioctl(int fd, int cmd, long arg){
	return ksys_ioctl(fd, cmd, arg);
}

int ukl_recvfrom(int fd, void __user *ubuf, size_t size, unsigned int flags, struct sockaddr __user *addr, int __user *addr_len){
	return __sys_recvfrom(fd, ubuf, size, flags, addr, addr_len);
}

int ukl_sendto(int fd, void *buff, size_t len, unsigned int flags, struct sockaddr *addr, int addr_len){
	return __sys_sendto(fd, buff, len, flags, addr, addr_len);
}

int ukl_recv(int fd, void __user *ubuf, size_t size, unsigned int flags, struct sockaddr __user *addr, int __user *addr_len){
	return __sys_recvfrom(fd, ubuf, size, flags, NULL, NULL);
}

int ukl_send(int fd, void *buff, size_t len, unsigned int flags, struct sockaddr *addr, int addr_len){
	return __sys_sendto(fd, buff, len, flags, NULL, 0);
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

int ukl_set_tid_address(int * tidptr){
	extern int __ukl_set_tid_address(int * ptr);
	return __ukl_set_tid_address(tidptr);
}

int ukl_set_robust_list(struct robust_list_head * head, size_t len){
	extern int __ukl_set_robust_list(struct robust_list_head * head, size_t len);
	return __ukl_set_robust_list(head, len);
}

int ukl_rt_sigprocmask(int how, sigset_t * nset,  sigset_t * oset, size_t sigsetsize){
	extern int __ukl_rt_sigprocmask(int how, sigset_t * nset,  sigset_t * oset, size_t sigsetsize);
	return __ukl_rt_sigprocmask(how, nset, oset, sigsetsize);
}

int ukl_rt_sigaction(int sig, const struct sigaction * act, struct sigaction * oact, size_t sigsetsize){
	extern int __ukl_rt_sigaction(int sig, const struct sigaction * act, struct sigaction * oact, size_t sigsetsize);
	return __ukl_rt_sigaction(sig, act, oact, sigsetsize);
}

int ukl_prlimit64(pid_t pid, unsigned int resource, const struct rlimit64 * new_rlim, struct rlimit64 * old_rlim){
	extern int __ukl_prlimit64(pid_t pid, unsigned int resource, const struct rlimit64 * new_rlim,	struct rlimit64 * old_rlim);
	return __ukl_prlimit64(pid, resource, new_rlim,	old_rlim);
}


unsigned long ukl_brk(unsigned long brk){
	return mybrk(brk);
}

int ukl_fstat(unsigned int fd, struct stat __user * statbuf){
	struct kstat stat;
	int error = vfs_fstat(fd, &stat);

	if (!error)
		error = cp_new_stat(&stat, statbuf);

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
