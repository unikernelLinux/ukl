/* Copyright (C) 2002-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
   Contributed by Ulrich Drepper <drepper@redhat.com>, 2002.

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

#include <stdlib.h>
#include "pthreadP.h"
#include <unistd.h>


void
__pthread_exit (void *value)
{
  THREAD_SETMEM (THREAD_SELF, result, value);
  syscall(60, 0);
  __builtin_unreachable();
}
weak_alias (__pthread_exit, pthread_exit)

/* After a thread terminates, __libc_start_main decrements
   __nptl_nthreads defined in pthread_create.c.  */
PTHREAD_STATIC_FN_REQUIRE (__pthread_create)
