/* Copyright (C) 1995-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
   Contributed by Ulrich Drepper <drepper@cygnus.com>, August 1995.

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

#include <sys/sem.h>
#include <ipc_priv.h>
#include <sysdep.h>
#include <errno.h>

/* Perform user-defined atomical operation of array of semaphores.  */

int
__semtimedop (int semid, struct sembuf *sops, size_t nsops,
	      const struct timespec *timeout)
{
  /* semtimedop wire-up syscall is not exported for 32-bit ABIs (they have
     semtimedop_time64 instead with uses a 64-bit time_t).  */
#if defined __ASSUME_DIRECT_SYSVIPC_SYSCALLS && defined __NR_semtimedop
  return INLINE_SYSCALL_CALL (semtimedop, semid, sops, nsops, timeout);
#else
  return INLINE_SYSCALL_CALL (ipc, IPCOP_semtimedop, semid,
			      SEMTIMEDOP_IPC_ARGS (nsops, sops, timeout));
#endif
}
weak_alias (__semtimedop, semtimedop)
