/*
 * when glibc is being built, it wants to make ld-linux.so,
 * but there's no way for us to know where entry_SYSCALL_64
 * is actually going to be if we want to turn KASLR on 
 */
void (*entry_SYSCALL_64)(void) = 0xffffffff82200190;

