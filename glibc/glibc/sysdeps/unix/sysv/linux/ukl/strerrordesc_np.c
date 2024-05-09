#include <sysdep.h>
#include <libintl.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

/* Return a string describing the errno code in ERRNUM.
   The storage is good only until the next call to strerror.
   Writing to the storage causes undefined behavior.  */
libc_freeres_ptr (static char *buf);

char *
strerrordesc_np (int errnum)
{
  char *ret = __strerror_r (errnum, NULL, 0);
  int saved_errno;

  if (__glibc_likely (ret != NULL))
    return ret;
  saved_errno = errno;
  if (buf == NULL)
    buf = malloc (1024);
  __set_errno (saved_errno);
  if (buf == NULL)
    return _("Unknown error");
  return __strerror_r (errnum, buf, 1024);
}
