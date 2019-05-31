#include <sys/types.h>
#include <sys/mman.h>
#include <err.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/* Does not work on OS X, as you can't mmap over /dev/zero */
int main(void)
{
        const char str1[] = "string 1";
        const char str2[] = "string 2";
        pid_t parpid = getpid(), childpid;
        int fd = -1;
        char *anon;

        anon = (char*)mmap(NULL, 0x40300000, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
        // addr = ukl_mmap(NULL, 940390000, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
        
        if (anon == MAP_FAILED)
                errx(1, "either mmap");

        printf("PID %d:\tanonymous %s\n", parpid, anon);
        strcpy(anon, str1);

        printf("PID %d:\tanonymous %s\n", parpid, anon);
        strcpy(anon, str2);

        printf("PID %d:\tanonymous %s\n", parpid, anon);
        munmap(anon, 0x40300000);
        return EXIT_SUCCESS;
}