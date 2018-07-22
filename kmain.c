#include <linux/ukl.h>
#include <linux/stddef.h>
#include <linux/types.h>
//#include <linux/stdio.h>

void kmain(void){
	//char *buf = "Ali Raza";
	long fd, res;
	ssize_t size;
	int err = 0;
	struct new_utsname *name;

	fd = ukl_open("AliRaza\n");
	size = ukl_write(fd, "File opened\n");
	res = ukl_close(fd);
	fd = 1;
	size = ukl_write(fd, "File opened\n");

	name = ukl_malloc(sizeof(struct new_utsname)); // use kmalloc here;
	size = ukl_write(fd, "Struct new_utsname created\n");

	err = ukl_utsname(name);
	size = ukl_write(fd, &name->sysname);


	err = ukl_exit_group(1);
	while(1){
			printk("");

	}
}