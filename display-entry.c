#include <stdio.h>

extern long entry_SYSCALL_64;

int main(){
	printf("%p",entry_SYSCALL_64);
	return 0;
}
