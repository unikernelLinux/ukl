#include <stdio.h>
#include <stdlib.h>

extern int printk(const char *fmt, ...);

int kmain()
{

    int i;

    char *ptr, *newptr;

    long long n, diff = 0, valdiff = 0;

    n = 15;

    ptr = (char *) malloc(n);
    printk("Malloc returned\n");
    printk("Value at start pointer %lx is %d\n", ptr, *ptr);
    // if(ptr == NULL)                     
    // {
    //     printk("Error! memory not allocated.");
    //     exit(0);
    // }

    // for(i = 0; i < n; i++)
    // {
    //     newptr = ptr + i;
    //     *newptr = i*2;
    // }

    // diff = newptr-ptr;
    // valdiff = *newptr-*ptr;
    // printk("Value at end pointer %lx is %d\n", newptr, *newptr);
    // printk("Difference between start and end pointer is %lu\n", diff);
    // printk("Value difference between start and end pointer is %lu\n", valdiff);

    // //=================================================

    // n = 1000*1000;

    // ptr = (int*) malloc(n * sizeof(int));
    // printk("Malloc returned\n");
    // printk("Value at start pointer %lx is %d\n", ptr, *ptr);
    // if(ptr == NULL)                     
    // {
    //     printk("Error! memory not allocated.");
    //     exit(0);
    // }

    // for(i = 0; i < n; i++)
    // {
    //     newptr = ptr + i;
    //     *newptr = i*2;
    // }

    // diff = newptr-ptr;
    // valdiff = *newptr-*ptr;
    // printk("Value at end pointer %lx is %d\n", newptr, *newptr);
    // printk("Difference between start and end pointer is %lu\n", diff);
    // printk("Value difference between start and end pointer is %lu\n", valdiff);

    return 0;
}