/* Copyright (C) 1999-2020 Free Software Foundation, Inc.
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

#define ntp_gettime ntp_gettime_redirect

#include <sys/timex.h>

#undef ntp_gettime

#ifndef MOD_OFFSET
# define modes mode
#endif


int
ntp_gettime (struct ntptimeval *ntv)
{
  struct timex tntx;
  int result;

  tntx.modes = 0;
  result = __adjtimex (&tntx);
  ntv->time = tntx.time;
  ntv->maxerror = tntx.maxerror;
  ntv->esterror = tntx.esterror;
  return result;
}
