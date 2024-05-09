#include <errno.h>
#include <string.h>
#include <linux/prctl.h>

#include <sysdep.h>
#include <sys/syscall.h>

int
__prctl (int option, unsigned long arg2, unsigned long arg3,
          unsigned long arg4, unsigned long arg5)
{
  return INLINE_SYSCALL (prctl, 5, option, arg2, arg3, arg4, arg5);
}
weak_alias (__prctl, prctl)
