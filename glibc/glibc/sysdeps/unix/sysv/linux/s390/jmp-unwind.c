/* Clean up stack frames unwound by longjmp.  Linux/s390 version.
   Copyright (C) 2003-2020 Free Software Foundation, Inc.
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

#include <setjmp.h>
#include <stddef.h>
#include <libc-lock.h>

extern void __pthread_cleanup_upto (__jmp_buf env, char *targetframe);
#pragma weak __pthread_cleanup_upto


void
_longjmp_unwind (jmp_buf env, int val)
{
  char local_var;

  __libc_ptf_call (__pthread_cleanup_upto, (env->__jmpbuf, &local_var), 0);
}
