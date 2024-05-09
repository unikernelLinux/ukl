/* Obtain handle for an open file via a handle.  Linux implementation.
   Copyright (C) 2017-2020 Free Software Foundation, Inc.
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

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sysdep-cancel.h>

int
open_by_handle_at (int mount_fd, struct file_handle *handle, int flags)
{
#ifdef __NR_open_by_handle_at
  return SYSCALL_CANCEL (open_by_handle_at, mount_fd, handle, flags);
#else
  __set_errno (ENOSYS);
  return -1;
#endif
}

#ifndef __NR_open_by_handle_at
stub_warning (open_by_handle_at)
#endif
