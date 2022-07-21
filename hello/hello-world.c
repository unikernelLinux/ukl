#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int
main(int argc, char *argv[])
{
  printf("hello, from the UKL world\n");

  if(fork() == 0){
        printf("Hello from Child!\n");

        char *args[2] = {"/bin/ksh", NULL};
        execve(args[0], args, NULL);
        printf("\n");
        return 0;
    }

    else
        printf("Hello from Parent!\n");
    

  for (;;)
    pause ();
  exit(EXIT_SUCCESS);
}
