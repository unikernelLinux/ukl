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
#include <unistd.h>
#include <sysdep.h>
#include <sys/inotify.h>

int
__inotify_init (void)
{
  return INLINE_SYSCALL(inotify_init, 0);
}
weak_alias (__inotify_init, inotify_init)

int
__inotify_init1 (int flags)
{
  return INLINE_SYSCALL(inotify_init1, 1, flags);
}
weak_alias (__inotify_init1, inotify_init1)

