#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

const char interp_section[] __attribute__((section(".interp"))) = "/data/ld-linux-x86-64.so.2";

int
main(int argc, char *argv[])
{
  printf("hello, from the UKL world\n");
  for (;;)
    pause ();
  exit(EXIT_SUCCESS);
}
