#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

MODULE_AUTHOR("Vance R. and Ross K.");
MODULE_DESCRIPTION("ELF shared object representation of vmlinux");
MODULE_LICENSE("Whatever Linux uses");
MODULE_VERSION("0.1");

static int __init kasdyn_init(void)
{
	printk(KERN_INFO "Hello world\n");
	return 0;
}

static void __exit kasdyn_exit(void)
{
	printk(KERN_INFO "(while sick sax riff plays) Goodbye\n");
}

module_init(kasdyn_init);
module_exit(kasdyn_exit);
