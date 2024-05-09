/* xstat64 using 64-bit MIPS stat system call.
   Copyright (C) 1991-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

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

#include <errno.h>
#include <stddef.h>
#include <sys/stat.h>
#include <kernel_stat.h>

#include <sysdep.h>
#include <sys/syscall.h>

#include <xstatconv.h>

/* Get information about the file NAME in BUF.  */

int
__xstat64 (int vers, const char *name, struct stat64 *buf)
{
  int result;
  struct kernel_stat kbuf;

  result = INLINE_SYSCALL (stat, 2, name, &kbuf);
  if (result == 0)
    result = __xstat64_conv (vers, &kbuf, buf);

  return result;
}

hidden_def (__xstat64)
