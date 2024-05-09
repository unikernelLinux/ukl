/* Copyright (C) 2018 Free Software Foundation, Inc.
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

#include <sys/mman.h>
#include <stdarg.h>
#include <sysdep.h>

// TODO: header file

void *
__mremap (void *old_address, size_t old_size, size_t new_size, int flags, ... /* void *new_address */)
{
  if (flags & MREMAP_FIXED)
    {
      va_list ap;
      va_start (ap, flags);
      void *new_address = va_arg (ap, void *);
      va_end (ap);
      return (void *) INLINE_SYSCALL(mremap, 5, old_address, old_size, new_size, flags, new_address);
    }
  else
    return (void *) INLINE_SYSCALL(mremap, 4, old_address, old_size, new_size, flags);
}
libc_hidden_def (__mremap)
weak_alias (__mremap, mremap)
