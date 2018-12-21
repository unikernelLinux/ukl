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