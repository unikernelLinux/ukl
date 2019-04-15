/*
 * ukl.h
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

#include <trace/events/printk.h>
#include <asm/unistd.h>
#include <linux/fs.h>
#include <linux/file.h>
#include <linux/string.h>
#include <linux/mm.h>
#include <linux/fdtable.h>
#include <linux/fsnotify.h>
#include <linux/module.h>
#include <linux/tty.h>
#include <linux/namei.h>
#include <linux/backing-dev.h>
#include <linux/capability.h>
#include <linux/securebits.h>
#include <linux/security.h>
#include <linux/mount.h>
#include <linux/fcntl.h>
#include <linux/slab.h>
#include <linux/uaccess.h>
#include <linux/personality.h>
#include <linux/pagemap.h>
#include <linux/syscalls.h>
#include <linux/rcupdate.h>
#include <linux/audit.h>
#include <linux/falloc.h>
#include <linux/fs_struct.h>
#include <linux/ima.h>
#include <linux/dnotify.h>
#include <linux/compat.h>
#include <linux/gfp.h>
#include <linux/utsname.h>
#include <linux/sched/task.h>

#include <linux/socket.h>
#include <uapi/linux/in.h>

#include <asm/socket.h>			/* arch-dependent defines	*/
#include <linux/sockios.h>		/* the SIOCxxx I/O controls	*/
#include <linux/uio.h>			/* iovec support		*/
#include <linux/types.h>		/* pid_t			*/
#include <linux/compiler.h>		/* __user			*/
#include <uapi/linux/socket.h>

#include <net/sock.h>

#include <asm/proto.h>
#include <asm/prctl.h>
#include <asm/desc.h>
#include <asm/segment.h>

#include <linux/mman.h>
#include <linux/sys.h>
#include <linux/futex.h>

ssize_t ukl_write(int fds, const void* buf, size_t count);

ssize_t ukl_read(int fd, const void* buf, size_t count);

long ukl_open(char *filename);

long ukl_close(int fd);

//write all malloc interfaces

void * ukl_malloc(size_t size); // use kmalloc here;

int ukl_utsname(struct new_utsname *name); // one more wrapper, not very important right now

int ukl_exit_group(int error_code); // should not exit, machine should idle

int ukl_socket(int family, int type, int protocol);

int ukl_bind(int fd, struct sockaddr __user *umyaddr, int addrlen);

int ukl_connect(int fd, struct sockaddr __user *uservaddr, int addrlen);

int ukl_listen(int fd, int backlog);

int ukl_accept(int fd, struct sockaddr *upeer_sockaddr, int *upeer_addrlen);

int ukl_ioctl(int fd, int cmd, long arg);

int ukl_recvfrom(int fd, void __user *ubuf, size_t size, unsigned int flags, struct sockaddr __user *addr, int __user *addr_len);

int ukl_sendto(int fd, void *buff, size_t len, unsigned int flags, struct sockaddr *addr, int addr_len);

int ukl_setsockopt(int fd, int level, int optname, char *optval, int optlen);

long ukl_arch_prctl(int option, unsigned long arg2);

int ukl_get_thread_area(struct user_desc __user *u_info);

int ukl_set_thread_area(struct user_desc __user *u_info);

long ukl_mmap(unsigned long addr, unsigned long len, unsigned long prot, unsigned long flags, unsigned long fd, unsigned long off);

// int ukl_uname(struct old_utsname * name);

pid_t ukl_set_tid_address(int * tidptr);

int ukl_set_robust_list(struct robust_list_head * head, size_t len);

int ukl_rt_sigaction(int sig, const struct sigaction * act,	struct sigaction * oact, size_t sigsetsize);

int ukl_rt_sigprocmask(int how, sigset_t * nset, sigset_t * oset, size_t sigsetsize);

int ukl_prlimit64(pid_t pid, unsigned int resource,	const struct rlimit64 * new_rlim, struct rlimit64 * old_rlim);

unsigned long ukl_brk(unsigned long brk);

int ukl_fstat(unsigned int fd, struct stat __user * statbuf);

int ukl_mprotect(unsigned long start, size_t len, unsigned long prot);

long ukl_clone(unsigned long clone_flags, unsigned long newsp, int * parent_tidptr, unsigned long tls, int * child_tidptr);

int munmap(unsigned long addr, size_t len);

int ukl_recv(int fd, void __user *ubuf, size_t size, unsigned int flags, struct sockaddr __user *addr, int __user *addr_len);

int ukl_send(int fd, void *buff, size_t len, unsigned int flags, struct sockaddr *addr, int addr_len);