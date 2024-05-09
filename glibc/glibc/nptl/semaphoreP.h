/* Copyright (C) 2002-2020 Free Software Foundation, Inc.
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

#include <semaphore.h>
#include "pthreadP.h"

#define SEM_SHM_PREFIX  "sem."

/* Keeping track of currently used mappings.  */
struct inuse_sem
{
  dev_t dev;
  ino_t ino;
  int refcnt;
  sem_t *sem;
  char name[0];
};


/* The search tree for existing mappings.  */
extern void *__sem_mappings attribute_hidden;

/* Lock to protect the search tree.  */
extern int __sem_mappings_lock attribute_hidden;


/* Comparison function for search in tree with existing mappings.  */
extern int __sem_search (const void *a, const void *b) attribute_hidden;


/* Prototypes of functions with multiple interfaces.  */
extern int __new_sem_init (sem_t *sem, int pshared, unsigned int value);
extern int __old_sem_init (sem_t *sem, int pshared, unsigned int value);
extern int __new_sem_destroy (sem_t *sem);
extern int __new_sem_post (sem_t *sem);
extern int __new_sem_wait (sem_t *sem);
extern int __old_sem_wait (sem_t *sem);
extern int __new_sem_trywait (sem_t *sem);
extern int __new_sem_getvalue (sem_t *sem, int *sval);
