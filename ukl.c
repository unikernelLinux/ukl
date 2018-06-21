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
