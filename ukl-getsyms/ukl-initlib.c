#include <stdio.h>

int main (int argc, char *argv[])
{
  int i;

  for (i = 1; i < argc; i++)
    printf ("%s %p\n", argv[i], 0xDEADBEEF + i);
  
  return 0;
}
