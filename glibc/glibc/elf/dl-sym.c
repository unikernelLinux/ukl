/* Look up a symbol in a shared object loaded by `dlopen'.
   Copyright (C) 1999-2020 Free Software Foundation, Inc.
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

#include <assert.h>
#include <stddef.h>
#include <setjmp.h>
#include <stdlib.h>
#include <libintl.h>

#include <dlfcn.h>
#include <ldsodefs.h>
#include <dl-hash.h>
#include <sysdep-cancel.h>
#include <dl-tls.h>
#include <dl-irel.h>


#ifdef SHARED
/* Systems which do not have tls_index also probably have to define
   DONT_USE_TLS_INDEX.  */

# ifndef __TLS_GET_ADDR
#  define __TLS_GET_ADDR __tls_get_addr
# endif

/* Return the symbol address given the map of the module it is in and
   the symbol record.  This is used in dl-sym.c.  */
static void *
_dl_tls_symaddr (struct link_map *map, const ElfW(Sym) *ref)
{
# ifndef DONT_USE_TLS_INDEX
  tls_index tmp =
    {
      .ti_module = map->l_tls_modid,
      .ti_offset = ref->st_value
    };

  return __TLS_GET_ADDR (&tmp);
# else
  return __TLS_GET_ADDR (map->l_tls_modid, ref->st_value);
# endif
}
#endif


struct call_dl_lookup_args
{
  /* Arguments to do_dlsym.  */
  struct link_map *map;
  const char *name;
  struct r_found_version *vers;
  int flags;

  /* Return values of do_dlsym.  */
  lookup_t loadbase;
  const ElfW(Sym) **refp;
};

static void
call_dl_lookup (void *ptr)
{
  struct call_dl_lookup_args *args = (struct call_dl_lookup_args *) ptr;
  args->map = GLRO(dl_lookup_symbol_x) (args->name, args->map, args->refp,
					args->map->l_scope, args->vers, 0,
					args->flags, NULL);
}

/* Return the link map containing the caller address.  */
static inline struct link_map *
find_caller_link_map (ElfW(Addr) caller)
{
  struct link_map *l = _dl_find_dso_for_object (caller);
  if (l != NULL)
    return l;
  else
    /* If the address is not recognized the call comes from the main
       program (we hope).  */
    return GL(dl_ns)[LM_ID_BASE]._ns_loaded;
}

static void *
do_sym (void *handle, const char *name, void *who,
	struct r_found_version *vers, int flags)
{
  const ElfW(Sym) *ref = NULL;
  lookup_t result;
  ElfW(Addr) caller = (ElfW(Addr)) who;

  /* Link map of the caller if needed.  */
  struct link_map *match = NULL;

  if (handle == RTLD_DEFAULT)
    {
      match = find_caller_link_map (caller);

      /* Search the global scope.  We have the simple case where
	 we look up in the scope of an object which was part of
	 the initial binary.  And then the more complex part
	 where the object is dynamically loaded and the scope
	 array can change.  */
      if (RTLD_SINGLE_THREAD_P)
	result = GLRO(dl_lookup_symbol_x) (name, match, &ref,
					   match->l_scope, vers, 0,
					   flags | DL_LOOKUP_ADD_DEPENDENCY,
					   NULL);
      else
	{
	  struct call_dl_lookup_args args;
	  args.name = name;
	  args.map = match;
	  args.vers = vers;
	  args.flags
	    = flags | DL_LOOKUP_ADD_DEPENDENCY | DL_LOOKUP_GSCOPE_LOCK;
	  args.refp = &ref;

	  THREAD_GSCOPE_SET_FLAG ();
	  struct dl_exception exception;
	  int err = _dl_catch_exception (&exception, call_dl_lookup, &args);
	  THREAD_GSCOPE_RESET_FLAG ();
	  if (__glibc_unlikely (exception.errstring != NULL))
	    _dl_signal_exception (err, &exception, NULL);

	  result = args.map;
	}
    }
  else if (handle == RTLD_NEXT)
    {
      match = find_caller_link_map (caller);

      if (__glibc_unlikely (match == GL(dl_ns)[LM_ID_BASE]._ns_loaded))
	{
	  if (match == NULL
	      || caller < match->l_map_start
	      || caller >= match->l_map_end)
	    _dl_signal_error (0, NULL, NULL, N_("\
RTLD_NEXT used in code not dynamically loaded"));
	}

      struct link_map *l = match;
      while (l->l_loader != NULL)
	l = l->l_loader;

      result = GLRO(dl_lookup_symbol_x) (name, match, &ref, l->l_local_scope,
					 vers, 0, 0, match);
    }
  else
    {
      /* Search the scope of the given object.  */
      struct link_map *map = handle;
      result = GLRO(dl_lookup_symbol_x) (name, map, &ref, map->l_local_scope,
					 vers, 0, flags, NULL);
    }

  if (ref != NULL)
    {
      void *value;

#ifdef SHARED
      if (ELFW(ST_TYPE) (ref->st_info) == STT_TLS)
	/* The found symbol is a thread-local storage variable.
	   Return the address for to the current thread.  */
	value = _dl_tls_symaddr (result, ref);
      else
#endif
	value = DL_SYMBOL_ADDRESS (result, ref);

      /* Resolve indirect function address.  */
      if (__glibc_unlikely (ELFW(ST_TYPE) (ref->st_info) == STT_GNU_IFUNC))
	{
	  DL_FIXUP_VALUE_TYPE fixup
	    = DL_FIXUP_MAKE_VALUE (result, (ElfW(Addr)) value);
	  fixup = elf_ifunc_invoke (DL_FIXUP_VALUE_ADDR (fixup));
	  value = (void *) DL_FIXUP_VALUE_CODE_ADDR (fixup);
	}

#ifdef SHARED
      /* Auditing checkpoint: we have a new binding.  Provide the
	 auditing libraries the possibility to change the value and
	 tell us whether further auditing is wanted.  */
      if (__glibc_unlikely (GLRO(dl_naudit) > 0))
	{
	  const char *strtab = (const char *) D_PTR (result,
						     l_info[DT_STRTAB]);
	  /* Compute index of the symbol entry in the symbol table of
	     the DSO with the definition.  */
	  unsigned int ndx = (ref - (ElfW(Sym) *) D_PTR (result,
							 l_info[DT_SYMTAB]));

	  if (match == NULL)
	    match = find_caller_link_map (caller);

	  if ((match->l_audit_any_plt | result->l_audit_any_plt) != 0)
	    {
	      unsigned int altvalue = 0;
	      struct audit_ifaces *afct = GLRO(dl_audit);
	      /* Synthesize a symbol record where the st_value field is
		 the result.  */
	      ElfW(Sym) sym = *ref;
	      sym.st_value = (ElfW(Addr)) value;

	      for (unsigned int cnt = 0; cnt < GLRO(dl_naudit); ++cnt)
		{
		  struct auditstate *match_audit
		    = link_map_audit_state (match, cnt);
		  struct auditstate *result_audit
		    = link_map_audit_state (result, cnt);
		  if (afct->symbind != NULL
		      && ((match_audit->bindflags & LA_FLG_BINDFROM) != 0
			  || ((result_audit->bindflags & LA_FLG_BINDTO)
			      != 0)))
		    {
		      unsigned int flags = altvalue | LA_SYMB_DLSYM;
		      uintptr_t new_value
			= afct->symbind (&sym, ndx,
					 &match_audit->cookie,
					 &result_audit->cookie,
					 &flags, strtab + ref->st_name);
		      if (new_value != (uintptr_t) sym.st_value)
			{
			  altvalue = LA_SYMB_ALTVALUE;
			  sym.st_value = new_value;
			}
		    }

		  afct = afct->next;
		}

	      value = (void *) sym.st_value;
	    }
	}
#endif

      return value;
    }

  return NULL;
}


void *
_dl_vsym (void *handle, const char *name, const char *version, void *who)
{
  struct r_found_version vers;

  /* Compute hash value to the version string.  */
  vers.name = version;
  vers.hidden = 1;
  vers.hash = _dl_elf_hash (version);
  /* We don't have a specific file where the symbol can be found.  */
  vers.filename = NULL;

  return do_sym (handle, name, who, &vers, 0);
}


void *
_dl_sym (void *handle, const char *name, void *who)
{
  return do_sym (handle, name, who, NULL, DL_LOOKUP_RETURN_NEWEST);
}
