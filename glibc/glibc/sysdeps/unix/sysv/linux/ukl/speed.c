#define INLINE_SYSCALL_ERROR_RETURN_VALUE(val) ({ errno = val; -1; })
#include "../speed.c"

