/* Determine various system internal values, Linux version.
   Copyright (C) 1996-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
   Contributed by Ulrich Drepper <drepper@cygnus.com>, 1996.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#include <alloca.h>
#include <assert.h>
#include <ctype.h>
#include <dirent.h>
#include <errno.h>
#include <fcntl.h>
#include <mntent.h>
#include <paths.h>
#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/sysinfo.h>

#include <atomic.h>
#include <not-cancel.h>


/* How we can determine the number of available processors depends on
   the configuration.  There is currently (as of version 2.0.21) no
   system call to determine the number.  It is planned for the 2.1.x
   series to add this, though.

   One possibility to implement it for systems using Linux 2.0 is to
   examine the pseudo file /proc/cpuinfo.  Here we have one entry for
   each processor.

   But not all systems have support for the /proc filesystem.  If it
   is not available we simply return 1 since there is no way.  */


/* Other architectures use different formats for /proc/cpuinfo.  This
   provides a hook for alternative parsers.  */
#ifndef GET_NPROCS_PARSER
# define GET_NPROCS_PARSER(FD, BUFFER, CP, RE, BUFFER_END, RESULT) \
  do									\
    {									\
      (RESULT) = 0;							\
      /* Read all lines and count the lines starting with the string	\
	 "processor".  We don't have to fear extremely long lines since	\
	 the kernel will not generate them.  8192 bytes are really	\
	 enough.  */							\
      char *l;								\
      while ((l = next_line (FD, BUFFER, &CP, &RE, BUFFER_END)) != NULL) \
	if (strncmp (l, "processor", 9) == 0)				\
	  ++(RESULT);							\
    }									\
  while (0)
#endif


static char *
next_line (int fd, char *const buffer, char **cp, char **re,
	   char *const buffer_end)
{
  char *res = *cp;
  char *nl = memchr (*cp, '\n', *re - *cp);
  if (nl == NULL)
    {
      if (*cp != buffer)
	{
	  if (*re == buffer_end)
	    {
	      memmove (buffer, *cp, *re - *cp);
	      *re = buffer + (*re - *cp);
	      *cp = buffer;

	      ssize_t n = __read_nocancel (fd, *re, buffer_end - *re);
	      if (n < 0)
		return NULL;

	      *re += n;

	      nl = memchr (*cp, '\n', *re - *cp);
	      while (nl == NULL && *re == buffer_end)
		{
		  /* Truncate too long lines.  */
		  *re = buffer + 3 * (buffer_end - buffer) / 4;
		  n = __read_nocancel (fd, *re, buffer_end - *re);
		  if (n < 0)
		    return NULL;

		  nl = memchr (*re, '\n', n);
		  **re = '\n';
		  *re += n;
		}
	    }
	  else
	    nl = memchr (*cp, '\n', *re - *cp);

	  res = *cp;
	}

      if (nl == NULL)
	nl = *re - 1;
    }

  *cp = nl + 1;
  assert (*cp <= *re);

  return res == *re ? NULL : res;
}


int
__get_nprocs (void)
{
  static int cached_result = -1;
  static time_t timestamp;

  time_t now = time_now ();
  time_t prev = timestamp;
  atomic_read_barrier ();
  if (now == prev && cached_result > -1)
    return cached_result;

  /* XXX Here will come a test for the new system call.  */

  const size_t buffer_size = __libc_use_alloca (8192) ? 8192 : 512;
  char *buffer = alloca (buffer_size);
  char *buffer_end = buffer + buffer_size;
  char *cp = buffer_end;
  char *re = buffer_end;

  const int flags = O_RDONLY | O_CLOEXEC;
  int fd = __open_nocancel ("/sys/devices/system/cpu/online", flags);
  char *l;
  int result = 0;
  if (fd != -1)
    {
      l = next_line (fd, buffer, &cp, &re, buffer_end);
      if (l != NULL)
	do
	  {
	    char *endp;
	    unsigned long int n = strtoul (l, &endp, 10);
	    if (l == endp)
	      {
		result = 0;
		break;
	      }

	    unsigned long int m = n;
	    if (*endp == '-')
	      {
		l = endp + 1;
		m = strtoul (l, &endp, 10);
		if (l == endp)
		  {
		    result = 0;
		    break;
		  }
	      }

	    result += m - n + 1;

	    l = endp;
	    while (l < re && isspace (*l))
	      ++l;
	  }
	while (l < re);

      __close_nocancel_nostatus (fd);

      if (result > 0)
	goto out;
    }

  cp = buffer_end;
  re = buffer_end;

  /* Default to an SMP system in case we cannot obtain an accurate
     number.  */
  result = 2;

  /* The /proc/stat format is more uniform, use it by default.  */
  fd = __open_nocancel ("/proc/stat", flags);
  if (fd != -1)
    {
      result = 0;

      while ((l = next_line (fd, buffer, &cp, &re, buffer_end)) != NULL)
	/* The current format of /proc/stat has all the cpu* entries
	   at the front.  We assume here that stays this way.  */
	if (strncmp (l, "cpu", 3) != 0)
	  break;
	else if (isdigit (l[3]))
	  ++result;

      __close_nocancel_nostatus (fd);
    }
  else
    {
      fd = __open_nocancel ("/proc/cpuinfo", flags);
      if (fd != -1)
	{
	  GET_NPROCS_PARSER (fd, buffer, cp, re, buffer_end, result);
	  __close_nocancel_nostatus (fd);
	}
    }

 out:
  cached_result = result;
  atomic_write_barrier ();
  timestamp = now;

  return result;
}
libc_hidden_def (__get_nprocs)
weak_alias (__get_nprocs, get_nprocs)


/* On some architectures it is possible to distinguish between configured
   and active cpus.  */
int
__get_nprocs_conf (void)
{
  /* XXX Here will come a test for the new system call.  */

  /* Try to use the sysfs filesystem.  It has actual information about
     online processors.  */
  DIR *dir = __opendir ("/sys/devices/system/cpu");
  if (dir != NULL)
    {
      int count = 0;
      struct dirent64 *d;

      while ((d = __readdir64 (dir)) != NULL)
	/* NB: the sysfs has d_type support.  */
	if (d->d_type == DT_DIR && strncmp (d->d_name, "cpu", 3) == 0)
	  {
	    char *endp;
	    unsigned long int nr = strtoul (d->d_name + 3, &endp, 10);
	    if (nr != ULONG_MAX && endp != d->d_name + 3 && *endp == '\0')
	      ++count;
	  }

      __closedir (dir);

      return count;
    }

  int result = 1;

#ifdef GET_NPROCS_CONF_PARSER
  /* If we haven't found an appropriate entry return 1.  */
  FILE *fp = fopen ("/proc/cpuinfo", "rce");
  if (fp != NULL)
    {
      char buffer[8192];

      /* No threads use this stream.  */
      __fsetlocking (fp, FSETLOCKING_BYCALLER);
      GET_NPROCS_CONF_PARSER (fp, buffer, result);
      fclose (fp);
    }
#else
  result = __get_nprocs ();
#endif

  return result;
}
libc_hidden_def (__get_nprocs_conf)
weak_alias (__get_nprocs_conf, get_nprocs_conf)


/* Compute (num*mem_unit)/pagesize, but avoid overflowing long int.
   In practice, mem_unit is never bigger than the page size, so after
   the first loop it is 1.  [In the kernel, it is initialized to
   PAGE_SIZE in mm/page_alloc.c:si_meminfo(), and then in
   kernel.sys.c:do_sysinfo() it is set to 1 if unsigned long can
   represent all the sizes measured in bytes].  */
static long int
sysinfo_mempages (unsigned long int num, unsigned int mem_unit)
{
  unsigned long int ps = __getpagesize ();

  while (mem_unit > 1 && ps > 1)
    {
      mem_unit >>= 1;
      ps >>= 1;
    }
  num *= mem_unit;
  while (ps > 1)
    {
      ps >>= 1;
      num >>= 1;
    }
  return num;
}

/* Return the number of pages of total/available physical memory in
   the system.  This used to be done by parsing /proc/meminfo, but
   that's unnecessarily expensive (and /proc is not always available).
   The sysinfo syscall provides the same information, and has been
   available at least since kernel 2.3.48.  */
long int
__get_phys_pages (void)
{
  struct sysinfo info;

  __sysinfo (&info);
  return sysinfo_mempages (info.totalram, info.mem_unit);
}
libc_hidden_def (__get_phys_pages)
weak_alias (__get_phys_pages, get_phys_pages)

long int
__get_avphys_pages (void)
{
  struct sysinfo info;

  __sysinfo (&info);
  return sysinfo_mempages (info.freeram, info.mem_unit);
}
libc_hidden_def (__get_avphys_pages)
weak_alias (__get_avphys_pages, get_avphys_pages)
