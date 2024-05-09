/* Hardware capability support for run-time dynamic loader.
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

#include <elf/dl-tunables.h>

#if HAVE_TUNABLES
# define GET_HWCAP_MASK() TUNABLE_GET (glibc, cpu, hwcap_mask, uint64_t, NULL)
#else
# ifdef SHARED
#   define GET_HWCAP_MASK() GLRO(dl_hwcap_mask)
# else
/* HWCAP_MASK is ignored in static binaries when built without tunables.  */
#  define GET_HWCAP_MASK() (0)
# endif
#endif
