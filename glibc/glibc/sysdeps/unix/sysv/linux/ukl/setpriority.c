/* Copyright (C) 1991-2020 Free Software Foundation, Inc.
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
#include <sys/resource.h>

#include <sysdep.h>
#include <sys/syscall.h>

/* Set the priority of all processes specified by WHICH and WHO
   to PRIO.  Returns 0 on success, -1 on errors.  */
int
__setpriority (enum __priority_which which, id_t who, int prio)
{
   return INLINE_SYSCALL (setpriority, 3, (int) which, who, prio);
}
libc_hidden_def(__setpriority)

weak_alias (__setpriority, setpriority)
