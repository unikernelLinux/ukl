// #include <stdio.h>
#include <linux/ukl.h>

int kmain(void)
{
	volatile struct task_struct *me = current;	
	char *addr;
	/* Use MAP_ANONYMOUS */
	// addr = ukl_mmap(NULL, 0x40000000, PROT_READ | PROT_WRITE, MAP_ANONYMOUS, -1, 0);
	printk("Using size = %lx\n", 0xF0000000);
	addr = ukl_mmap(NULL, 940390000, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
	printk("Address of mmap memory is %lx\n", addr);

	printk("Using size = %lx\n", 0x80000000);
	addr = ukl_mmap(NULL, 940380000, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
	printk("Address of mmap memory is %lx\n", addr);

	printk("Using size = %lx\n", 940370000);
	addr = ukl_mmap(NULL, 940370000, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
	printk("Address of mmap memory is %lx\n", addr);

	printk("Using size = %lx\n", 940360000);
	addr = ukl_mmap(NULL, 940360000, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
	printk("Address of mmap memory is %lx\n", addr);

	printk("Using size = %lx\n", 940350000);
	addr = ukl_mmap(NULL, 940350000, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
	printk("Address of mmap memory is %lx\n", addr);

	printk("Using size = %lx\n", 40340000);
	addr = ukl_mmap(NULL, 40340000, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
	printk("Address of mmap memory is %lx\n", addr);

	printk("Using size = %lx\n", 40330000);
	addr = ukl_mmap(NULL, 40330000, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
	printk("Address of mmap memory is %lx\n", addr);

	printk("Using size = %lx\n", 40320000);
	addr = ukl_mmap(NULL, 40320000, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
	printk("Address of mmap memory is %lx\n", addr);

	printk("Using size = %lx\n", 40310000);
	addr = ukl_mmap(NULL, 40310000, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
	printk("Address of mmap memory is %lx\n", addr);

	printk("Using size = %lx\n", 40300000);
	addr = ukl_mmap(NULL, 40300000, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
	printk("Address of mmap memory is %lx\n", addr);

	while(1);

	return 0;
}