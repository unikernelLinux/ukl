/* ABI compatibility for 'longjmp' and 'siglongjmp' symbols in libpthread ABI.
   Copyright (C) 2002-2020 Free Software Foundation, Inc.
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

#include <setjmp.h>
#include <shlib-compat.h>

/* libpthread once had its own longjmp (and siglongjmp alias), though there
   was no apparent reason for it.  There is no use in having a separate
   symbol in libpthread, but the historical ABI requires it.  For static
   linking, there is no need to provide anything here--the libc version
   will be linked in.  For shared library ABI compatibility, there must be
   longjmp and siglongjmp symbols in libpthread.so.

   With an IFUNC resolver, it would be possible to avoid the indirection,
   but the IFUNC resolver might run before the __libc_longjmp symbol has
   been relocated, in which case the IFUNC resolver would not be able to
   provide the correct address.  */

#if SHLIB_COMPAT (libpthread, GLIBC_2_0, GLIBC_2_22)

static void __attribute__ ((noreturn, used))
longjmp_compat (jmp_buf env, int val)
{
  __libc_longjmp (env, val);
}

strong_alias (longjmp_compat, longjmp_alias)
compat_symbol (libpthread, longjmp_alias, longjmp, GLIBC_2_0);

strong_alias (longjmp_alias, siglongjmp_alias)
compat_symbol (libpthread, siglongjmp_alias, siglongjmp, GLIBC_2_0);

#endif
