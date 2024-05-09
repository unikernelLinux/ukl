/* Tunable type information.

   Copyright (C) 2016-2020 Free Software Foundation, Inc.
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

#ifndef _TUNABLE_TYPES_H_
# define _TUNABLE_TYPES_H_
#include <stddef.h>

typedef enum
{
  TUNABLE_TYPE_INT_32,
  TUNABLE_TYPE_UINT_64,
  TUNABLE_TYPE_SIZE_T,
  TUNABLE_TYPE_STRING
} tunable_type_code_t;

typedef struct
{
  tunable_type_code_t type_code;
  int64_t min;
  int64_t max;
} tunable_type_t;

typedef union
{
  int64_t numval;
  const char *strval;
} tunable_val_t;

typedef void (*tunable_callback_t) (tunable_val_t *);

/* Security level for tunables.  This decides what to do with individual
   tunables for AT_SECURE binaries.  */
typedef enum
{
  /* Erase the tunable for AT_SECURE binaries so that child processes don't
     read it.  */
  TUNABLE_SECLEVEL_SXID_ERASE = 0,
  /* Ignore the tunable for AT_SECURE binaries, but don't erase it, so that
     child processes can read it.  */
  TUNABLE_SECLEVEL_SXID_IGNORE = 1,
  /* Read the tunable.  */
  TUNABLE_SECLEVEL_NONE = 2,
} tunable_seclevel_t;


#endif
