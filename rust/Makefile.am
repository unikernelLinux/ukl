# Unikernel Linux
# Copyright (C) 2018-2022 Red Hat Inc., Boston University,
# Ali Raza, Tommy Unger, Eric Munson, Richard W.M. Jones.
#
# This library is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 2 of the License, or (at your option) any later version.
#
# This library is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public
# License along with this library; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA

CLEANFILES = *~ *.o *.a

noinst_DATA = UKL.a

# Libraries built in the top build directory.
CRT_STARTS  = $(abs_top_builddir)/crt1.o $(abs_top_builddir)/crti.o \
		  $(abs_top_builddir)/crtbeginT.o
CRT_ENDS    = $(abs_top_builddir)/crtend.o $(abs_top_builddir)/crtn.o
C_LIB       = $(abs_top_builddir)/libc.a
PTHREAD_LIB = $(abs_top_builddir)/libpthread.a
RT_LIB      = $(abs_top_builddir)/librt.a
MATH_LIB    = $(abs_top_builddir)/libm.a
GCC_LIBS    = $(abs_top_builddir)/libgcc.a $(abs_top_builddir)/libgcc_eh.a

AM_CFLAGS   = -ggdb -mno-red-zone -mcmodel=kernel -static


UKL.a: hello-rust/main.o hello-rust/foo.o hello-rust/target/debug/deps/libhello-5695cc53afc7ce62.a undefined_sys_hack.o
	rm -f $@ temp.o
	ld -r -o temp.o -allow-multiple-definition \
		$(CRT_STARTS) \
		$< hello-rust/foo.o hello-rust/target/debug/deps/libhello-5695cc53afc7ce62.a \
		--start-group \
		--whole-archive \
		$(GCC_LIBS) $(C_LIB) \
		--no-whole-archive \
		--end-group \
		$(CRT_ENDS)
	ar cr UKL.a temp.o undefined_sys_hack.o
	rm temp.o
	objcopy --prefix-symbols=ukl_ $@
	objcopy --redefine-syms=$(top_srcdir)/redef_sym_names $@

hello-rust/target/debug/deps/libhello-5695cc53afc7ce62.a:
	rm -f $@
	if ! test -d /target/debug/deps/libhello-5695cc53afc7ce62.a; then \
		cargo build; \
	fi
	touch $@

hello-rust/main.o:
	rm -f $@
	if ! test -d /hello-rust/main.o; then \
		gcc -c hello-rust/main.c -o hello-rust/main.o; \
	fi
	touch $@

hello-rust/foo.o:
	rm -f $@
	if ! test -d /hello-rust/foo.o; then \
		gcc -c hello-rust/foo.c -o hello-rust/foo.o; \
	fi
	touch $@

undefined_sys_hack.c: $(top_builddir)/undefined_sys_hack.c
	cp $< $@

# automake doesn't add this rule unless we were to specify a C program
# to compile, which we don't want to do because of the very special
# linking requirements.
.c.o:
	$(CC) $(CFLAGS) $(AM_CFLAGS) -c $< -o $@
