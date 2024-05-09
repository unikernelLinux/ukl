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

#include <assert.h>
#include <errno.h>
#include <limits.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/param.h>
#include <sys/resource.h>
#include <pthreadP.h>
#include <atomic.h>
#include <ldsodefs.h>
#include <tls.h>
#include <list.h>
#include <fork.h>
#include <version.h>
#include <shlib-compat.h>
#include <smp.h>
#include <lowlevellock.h>
#include <futex-internal.h>
#include <kernel-features.h>
#include <libc-pointer-arith.h>
#include <pthread-pids.h>
#include <pthread_mutex_conf.h>

#ifndef TLS_MULTIPLE_THREADS_IN_TCB
/* Pointer to the corresponding variable in libc.  */
int *__libc_multiple_threads_ptr attribute_hidden;
#endif

/* Size and alignment of static TLS block.  */
size_t __static_tls_size;
size_t __static_tls_align_m1;

#ifndef __ASSUME_SET_ROBUST_LIST
/* Negative if we do not have the system call and we can use it.  */
int __set_robust_list_avail;
# define set_robust_list_not_avail() \
  __set_robust_list_avail = -1
#else
# define set_robust_list_not_avail() do { } while (0)
#endif

/* Version of the library, used in libthread_db to detect mismatches.  */
static const char nptl_version[] __attribute_used__ = VERSION;


#ifdef SHARED
static
#else
extern
#endif
void __nptl_set_robust (struct pthread *);

#ifdef SHARED
static const struct pthread_functions pthread_functions =
  {
    .ptr_pthread_attr_getschedpolicy = __pthread_attr_getschedpolicy,
    .ptr_pthread_attr_setschedpolicy = __pthread_attr_setschedpolicy,
    .ptr_pthread_attr_getscope = __pthread_attr_getscope,
    .ptr_pthread_attr_setscope = __pthread_attr_setscope,
    .ptr_pthread_condattr_destroy = __pthread_condattr_destroy,
    .ptr_pthread_condattr_init = __pthread_condattr_init,
    .ptr___pthread_cond_broadcast = __pthread_cond_broadcast,
    .ptr___pthread_cond_destroy = __pthread_cond_destroy,
    .ptr___pthread_cond_init = __pthread_cond_init,
    .ptr___pthread_cond_signal = __pthread_cond_signal,
    .ptr___pthread_cond_wait = __pthread_cond_wait,
    .ptr___pthread_cond_timedwait = __pthread_cond_timedwait,
# if SHLIB_COMPAT(libpthread, GLIBC_2_0, GLIBC_2_3_2)
    .ptr___pthread_cond_broadcast_2_0 = __pthread_cond_broadcast_2_0,
    .ptr___pthread_cond_destroy_2_0 = __pthread_cond_destroy_2_0,
    .ptr___pthread_cond_init_2_0 = __pthread_cond_init_2_0,
    .ptr___pthread_cond_signal_2_0 = __pthread_cond_signal_2_0,
    .ptr___pthread_cond_wait_2_0 = __pthread_cond_wait_2_0,
    .ptr___pthread_cond_timedwait_2_0 = __pthread_cond_timedwait_2_0,
# endif
    .ptr___pthread_exit = __pthread_exit,
    .ptr_pthread_getschedparam = __pthread_getschedparam,
    .ptr_pthread_setschedparam = __pthread_setschedparam,
    .ptr_pthread_mutex_destroy = __pthread_mutex_destroy,
    .ptr_pthread_mutex_init = __pthread_mutex_init,
    .ptr_pthread_mutex_lock = __pthread_mutex_lock,
    .ptr_pthread_mutex_unlock = __pthread_mutex_unlock,
    .ptr___pthread_setcancelstate = __pthread_setcancelstate,
    .ptr_pthread_setcanceltype = __pthread_setcanceltype,
    .ptr___pthread_cleanup_upto = __pthread_cleanup_upto,
    .ptr___pthread_once = __pthread_once,
    .ptr___pthread_rwlock_rdlock = __pthread_rwlock_rdlock,
    .ptr___pthread_rwlock_wrlock = __pthread_rwlock_wrlock,
    .ptr___pthread_rwlock_unlock = __pthread_rwlock_unlock,
    .ptr___pthread_key_create = __pthread_key_create,
    .ptr___pthread_getspecific = __pthread_getspecific,
    .ptr___pthread_setspecific = __pthread_setspecific,
    .ptr__pthread_cleanup_push_defer = __pthread_cleanup_push_defer,
    .ptr__pthread_cleanup_pop_restore = __pthread_cleanup_pop_restore,
    .ptr_nthreads = &__nptl_nthreads,
    .ptr___pthread_unwind = &__pthread_unwind,
    .ptr__nptl_deallocate_tsd = __nptl_deallocate_tsd,
    .ptr__nptl_setxid = __nptl_setxid,
    .ptr_set_robust = __nptl_set_robust
  };
# define ptr_pthread_functions &pthread_functions
#else
# define ptr_pthread_functions NULL
#endif


#ifdef SHARED
static
#endif
void
__nptl_set_robust (struct pthread *self)
{
#ifdef __NR_set_robust_list
  INTERNAL_SYSCALL_DECL (err);
  INTERNAL_SYSCALL (set_robust_list, err, 2, &self->robust_head,
		    sizeof (struct robust_list_head));
#endif
}


/* For asynchronous cancellation we use a signal.  This is the handler.  */
static void
sigcancel_handler (int sig, siginfo_t *si, void *ctx)
{
  /* Safety check.  It would be possible to call this function for
     other signals and send a signal from another process.  This is not
     correct and might even be a security problem.  Try to catch as
     many incorrect invocations as possible.  */
  if (sig != SIGCANCEL
      || si->si_pid != __getpid()
      || si->si_code != SI_TKILL)
    return;

  struct pthread *self = THREAD_SELF;

  int oldval = THREAD_GETMEM (self, cancelhandling);
  while (1)
    {
      /* We are canceled now.  When canceled by another thread this flag
	 is already set but if the signal is directly send (internally or
	 from another process) is has to be done here.  */
      int newval = oldval | CANCELING_BITMASK | CANCELED_BITMASK;

      if (oldval == newval || (oldval & EXITING_BITMASK) != 0)
	/* Already canceled or exiting.  */
	break;

      int curval = THREAD_ATOMIC_CMPXCHG_VAL (self, cancelhandling, newval,
					      oldval);
      if (curval == oldval)
	{
	  /* Set the return value.  */
	  THREAD_SETMEM (self, result, PTHREAD_CANCELED);

	  /* Make sure asynchronous cancellation is still enabled.  */
	  if ((newval & CANCELTYPE_BITMASK) != 0)
	    /* Run the registered destructors and terminate the thread.  */
	    __do_cancel ();

	  break;
	}

      oldval = curval;
    }
}


struct xid_command *__xidcmd attribute_hidden;

/* We use the SIGSETXID signal in the setuid, setgid, etc. implementations to
   tell each thread to call the respective setxid syscall on itself.  This is
   the handler.  */
static void
sighandler_setxid (int sig, siginfo_t *si, void *ctx)
{
  int result;

  /* Safety check.  It would be possible to call this function for
     other signals and send a signal from another process.  This is not
     correct and might even be a security problem.  Try to catch as
     many incorrect invocations as possible.  */
  if (sig != SIGSETXID
      || si->si_pid != __getpid ()
      || si->si_code != SI_TKILL)
    return;

  INTERNAL_SYSCALL_DECL (err);
  result = INTERNAL_SYSCALL_NCS (__xidcmd->syscall_no, err, 3, __xidcmd->id[0],
				 __xidcmd->id[1], __xidcmd->id[2]);
  int error = 0;
  if (__glibc_unlikely (INTERNAL_SYSCALL_ERROR_P (result, err)))
    error = INTERNAL_SYSCALL_ERRNO (result, err);
  __nptl_setxid_error (__xidcmd, error);

  /* Reset the SETXID flag.  */
  struct pthread *self = THREAD_SELF;
  int flags, newval;
  do
    {
      flags = THREAD_GETMEM (self, cancelhandling);
      newval = THREAD_ATOMIC_CMPXCHG_VAL (self, cancelhandling,
					  flags & ~SETXID_BITMASK, flags);
    }
  while (flags != newval);

  /* And release the futex.  */
  self->setxid_futex = 1;
  futex_wake (&self->setxid_futex, 1, FUTEX_PRIVATE);

  if (atomic_decrement_val (&__xidcmd->cntr) == 0)
    futex_wake ((unsigned int *) &__xidcmd->cntr, 1, FUTEX_PRIVATE);
}


/* When using __thread for this, we do it in libc so as not
   to give libpthread its own TLS segment just for this.  */
extern void **__libc_dl_error_tsd (void) __attribute__ ((const));


/* This can be set by the debugger before initialization is complete.  */
static bool __nptl_initial_report_events __attribute_used__;

void
__pthread_initialize_minimal_internal (void)
{
  /* Minimal initialization of the thread descriptor.  */
  struct pthread *pd = THREAD_SELF;
  __pthread_initialize_pids (pd);
  THREAD_SETMEM (pd, specific[0], &pd->specific_1stblock[0]);
  THREAD_SETMEM (pd, user_stack, true);

  /* Initialize the robust mutex data.  */
  {
#if __PTHREAD_MUTEX_HAVE_PREV
    pd->robust_prev = &pd->robust_head;
#endif
    pd->robust_head.list = &pd->robust_head;
#ifdef __NR_set_robust_list
    pd->robust_head.futex_offset = (offsetof (pthread_mutex_t, __data.__lock)
				    - offsetof (pthread_mutex_t,
						__data.__list.__next));
    INTERNAL_SYSCALL_DECL (err);
    int res = INTERNAL_SYSCALL (set_robust_list, err, 2, &pd->robust_head,
				sizeof (struct robust_list_head));
    if (INTERNAL_SYSCALL_ERROR_P (res, err))
#endif
      set_robust_list_not_avail ();
  }

  /* Set initial thread's stack block from 0 up to __libc_stack_end.
     It will be bigger than it actually is, but for unwind.c/pt-longjmp.c
     purposes this is good enough.  */
  THREAD_SETMEM (pd, stackblock_size, (size_t) __libc_stack_end);

  /* Initialize the list of all running threads with the main thread.  */
  INIT_LIST_HEAD (&__stack_user);
  list_add (&pd->list, &__stack_user);

  /* Before initializing __stack_user, the debugger could not find us and
     had to set __nptl_initial_report_events.  Propagate its setting.  */
  THREAD_SETMEM (pd, report_events, __nptl_initial_report_events);

  struct sigaction sa;
  __sigemptyset (&sa.sa_mask);

  /* Install the cancellation signal handler.  If for some reason we
     cannot install the handler we do not abort.  Maybe we should, but
     it is only asynchronous cancellation which is affected.  */
  sa.sa_sigaction = sigcancel_handler;
  sa.sa_flags = SA_SIGINFO;
  (void) __libc_sigaction (SIGCANCEL, &sa, NULL);

  /* Install the handle to change the threads' uid/gid.  */
  sa.sa_sigaction = sighandler_setxid;
  sa.sa_flags = SA_SIGINFO | SA_RESTART;
  (void) __libc_sigaction (SIGSETXID, &sa, NULL);

  /* The parent process might have left the signals blocked.  Just in
     case, unblock it.  We reuse the signal mask in the sigaction
     structure.  It is already cleared.  */
  __sigaddset (&sa.sa_mask, SIGCANCEL);
  __sigaddset (&sa.sa_mask, SIGSETXID);
  {
    INTERNAL_SYSCALL_DECL (err);
    (void) INTERNAL_SYSCALL (rt_sigprocmask, err, 4, SIG_UNBLOCK, &sa.sa_mask,
			     NULL, _NSIG / 8);
  }

  /* Get the size of the static and alignment requirements for the TLS
     block.  */
  size_t static_tls_align;
  _dl_get_tls_static_info (&__static_tls_size, &static_tls_align);

  /* Make sure the size takes all the alignments into account.  */
  if (STACK_ALIGN > static_tls_align)
    static_tls_align = STACK_ALIGN;
  __static_tls_align_m1 = static_tls_align - 1;

  __static_tls_size = roundup (__static_tls_size, static_tls_align);

  /* Determine the default allowed stack size.  This is the size used
     in case the user does not specify one.  */
  struct rlimit limit;
  if (__getrlimit (RLIMIT_STACK, &limit) != 0
      || limit.rlim_cur == RLIM_INFINITY)
    /* The system limit is not usable.  Use an architecture-specific
       default.  */
    limit.rlim_cur = ARCH_STACK_DEFAULT_SIZE;
  else if (limit.rlim_cur < PTHREAD_STACK_MIN)
    /* The system limit is unusably small.
       Use the minimal size acceptable.  */
    limit.rlim_cur = PTHREAD_STACK_MIN;

  /* Make sure it meets the minimum size that allocate_stack
     (allocatestack.c) will demand, which depends on the page size.  */
  const uintptr_t pagesz = GLRO(dl_pagesize);
  const size_t minstack = pagesz + __static_tls_size + MINIMAL_REST_STACK;
  if (limit.rlim_cur < minstack)
    limit.rlim_cur = minstack;

  /* Round the resource limit up to page size.  */
  limit.rlim_cur = ALIGN_UP (limit.rlim_cur, pagesz);
  lll_lock (__default_pthread_attr_lock, LLL_PRIVATE);
  __default_pthread_attr.stacksize = limit.rlim_cur;
  __default_pthread_attr.guardsize = GLRO (dl_pagesize);
  lll_unlock (__default_pthread_attr_lock, LLL_PRIVATE);

#ifdef SHARED
  /* Make __rtld_lock_{,un}lock_recursive use pthread_mutex_{,un}lock,
     keep the lock count from the ld.so implementation.  */
  GL(dl_rtld_lock_recursive) = (void *) __pthread_mutex_lock;
  GL(dl_rtld_unlock_recursive) = (void *) __pthread_mutex_unlock;
  unsigned int rtld_lock_count = GL(dl_load_lock).mutex.__data.__count;
  GL(dl_load_lock).mutex.__data.__count = 0;
  while (rtld_lock_count-- > 0)
    __pthread_mutex_lock (&GL(dl_load_lock).mutex);

  GL(dl_make_stack_executable_hook) = &__make_stacks_executable;
#endif

  GL(dl_init_static_tls) = &__pthread_init_static_tls;

  GL(dl_wait_lookup_done) = &__wait_lookup_done;

  /* Register the fork generation counter with the libc.  */
#ifndef TLS_MULTIPLE_THREADS_IN_TCB
  __libc_multiple_threads_ptr =
#endif
    __libc_pthread_init (&__fork_generation, __reclaim_stacks,
			 ptr_pthread_functions);

  /* Determine whether the machine is SMP or not.  */
  __is_smp = is_smp_system ();

#if HAVE_TUNABLES
  __pthread_tunables_init ();
#endif
}
strong_alias (__pthread_initialize_minimal_internal,
	      __pthread_initialize_minimal)


/* This function is internal (it has a GLIBC_PRIVATE) version, but it
   is widely used (either via weak symbol, or dlsym) to obtain the
   __static_tls_size value.  This value is then used to adjust the
   value of the stack size attribute, so that applications receive the
   full requested stack size, not diminished by the TCB and static TLS
   allocation on the stack.  Once the TCB is separately allocated,
   this function should be removed or renamed (if it is still
   necessary at that point).  */
size_t
__pthread_get_minstack (const pthread_attr_t *attr)
{
  return GLRO(dl_pagesize) + __static_tls_size + PTHREAD_STACK_MIN;
}
