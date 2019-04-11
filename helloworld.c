#include <stdio.h>
#include <sys/mman.h>

// __thread int me = 800;

int kmain(){

	// me = me + 1;
	// printf("me = %d", me);
	// long *addr;                  /* Pointer to shared memory region */

    /* Parent creates mapped region prior to calling fork() */

    /* Use MAP_ANONYMOUS */
    // addr = mmap(NULL, 0x40000000, PROT_READ | PROT_WRITE, MAP_ANONYMOUS, -1, 0);
    // printf("Address of mmap memory is %lx\n", addr);

	printf("Hello World\n");

	while(1);

	return 0;
}