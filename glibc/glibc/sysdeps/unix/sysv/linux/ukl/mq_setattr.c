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
#include <mqueue.h>
#include <stddef.h>
#include <sysdep.h>

int
__mq_setattr(mqd_t mqdes, const struct mq_attr *newattr, struct mq_attr *oldattr)
{
	return INLINE_SYSCALL(mq_getsetattr, 3, mqdes, newattr, oldattr);
}
libc_hidden_def (__mq_setattr)

strong_alias (__mq_setattr, mq_setattr)
