/* Copyright (C) 2003-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
   Contributed by Martin Schwidefsky <schwidefsky@de.ibm.com>, 2003.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#include "pthread_rwlock_common.c"

/* See pthread_rwlock_common.c.  */
int
__pthread_rwlock_wrlock (pthread_rwlock_t *rwlock)
{
  LIBC_PROBE (wrlock_entry, 1, rwlock);

  int result = __pthread_rwlock_wrlock_full (rwlock, CLOCK_REALTIME, NULL);
  LIBC_PROBE (wrlock_acquire_write, 1, rwlock);
  return result;
}

weak_alias (__pthread_rwlock_wrlock, pthread_rwlock_wrlock)
hidden_def (__pthread_rwlock_wrlock)
