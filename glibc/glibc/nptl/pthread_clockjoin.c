/* Join with a terminated thread using an specific clock.
   Copyright (C) 2019-2020 Free Software Foundation, Inc.
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
   <http://www.gnu.org/licenses/>.  */

#include "pthreadP.h"

int
__pthread_clockjoin_np (pthread_t threadid, void **thread_return,
			clockid_t clockid,
			const struct timespec *abstime)
{
  return __pthread_clockjoin_ex (threadid, thread_return,
                                 clockid, abstime, true);
}
weak_alias (__pthread_clockjoin_np, pthread_clockjoin_np)
