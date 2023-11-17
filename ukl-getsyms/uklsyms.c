/* signature doesn't matter, will redefine addresses in ukl-initlib.c */
#define SYM_NAME(name) \
  void __attribute__((weak)) name (void) {}

SYM_NAME (ksys_write)
SYM_NAME (entry_SYSCALL_64)
SYM_NAME (ksysread)
