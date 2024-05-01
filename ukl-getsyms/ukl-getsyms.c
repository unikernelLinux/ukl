#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/fs.h>
#include <linux/uaccess.h>
#include <linux/slab.h>
#include <linux/ioctl.h>
#include <linux/kallsyms.h>
#include "ukl-getsyms.h"

static long ukl_getsyms_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
{
    struct ioctl_data user_data;
    int i, ret;
    void **defs;

    switch (cmd) {
        case IOCTL_GET_SYMBOLS:
            if (copy_from_user(&user_data, (struct ioctl_data *)arg, sizeof(struct ioctl_data)))
                return -EFAULT;

            defs = kmalloc(user_data.numSymbols * sizeof(void *), GFP_KERNEL);
            if (!defs)
                return -ENOMEM;

            for (i = 0; i < user_data.numSymbols; i++) {
                defs[i] = (void *)kallsyms_lookup_name(user_data.symNames[i]);
                if (!defs[i]) {
                    kfree(defs);
                    return -EINVAL;
                }
            }

            if (copy_to_user(user_data.symDefs, defs, user_data.numSymbols)) {
                kfree(defs);
                return -EFAULT;
            }

            kfree(defs);
            break;

        default:
            return -ENOTTY;
    }

    return 0;
}

static const struct file_operations ukl_getsyms_fops = {
    .unlocked_ioctl = ukl_getsyms_ioctl,
};

static int __init ukl_getsyms_init(void)
{
    printk(KERN_INFO "ukl-getsyms module loaded\n");
    if (register_chrdev(0, "ukl-getsyms", &ukl_getsyms_fops) < 0) {
        printk(KERN_ERR "Failed to register ukl-getsyms module\n");
        return -EINVAL;
    }
    return 0;
}

static void __exit ukl_getsyms_exit(void)
{
    unregister_chrdev(0, "ukl-getsyms");
    printk(KERN_INFO "ukl-getsyms module unloaded\n");
}

module_init(ukl_getsyms_init);
module_exit(ukl_getsyms_exit);

MODULE_AUTHOR("Vance R. and Ross M.");
MODULE_DESCRIPTION("ELF shared object representation of vmlinux");
MODULE_LICENSE("GPL");
