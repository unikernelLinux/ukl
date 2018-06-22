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

ssize_t ukl_write(int fds, const void* buff, size_t n) {
	//ssize_t n = -1;
	struct fd f = fdget_pos(fds);
	char *c = buff;
	int count = 0;
	while (*c++ != '\0') {
		count++;
	} 
	//if (fds == 1) {
    	n = vfs_write(f.file, buff, count, &f.file->f_pos);
    //} else {
    //	n = printk(buff);
	//}
	return n;
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
