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

EXTRA_DIST = dnsmasq.conf

CLEANFILES = \
	*~ *.o *.a \
	stamp-dnsmasq-dir

clean-local:
	-cd dnsmasq && $(MAKE) clean

distclean-local:
	rm -rf dnsmasq

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

UKL.a: dnsmasq.o undefined_sys_hack.o
	rm -f $@
	ar cr UKL.a $^
	objcopy --prefix-symbols=ukl_ $@
	objcopy --redefine-syms=$(top_srcdir)/redef_sym_names $@

dnsmasq.o: stamp-dnsmasq-dir
	rm -f $@
	$(MAKE) -C dnsmasq clean
	$(MAKE) -C dnsmasq all CFLAGS="-O2 $(AM_CFLAGS)"
	rm dnsmasq/src/dnsmasq
	ld -r -o $@ -allow-multiple-definition \
	    $(CRT_STARTS) \
	    dnsmasq/src/*.o \
	    --start-group \
	    --whole-archive \
	    $(MATH_LIB) $(RT_LIB) $(PTHREAD_LIB) $(C_LIB) \
	    --no-whole-archive \
	    $(GCC_LIBS) \
	    --end-group \
	    $(CRT_ENDS)

# Check out a local copy of dnsmasq (XXX submodules!).
stamp-dnsmasq-dir:
	rm -f $@
	if ! test -d dnsmasq; then \
	    git clone http://thekelleys.org.uk/git/dnsmasq.git && \
	    cd dnsmasq && \
	    git checkout -b 2.86 cac9ca38f62437c65464f58fc54342c7f294c40b; \
	fi
	touch $@

undefined_sys_hack.c: $(top_builddir)/undefined_sys_hack.c
	cp $< $@

# automake doesn't add this rule unless we were to specify a C program
# to compile, which we don't want to do because of the very special
# linking requirements.
.c.o:
	$(CC) $(CFLAGS) $(AM_CFLAGS) -c $< -o $@

# Configuration file used by dnsmasq.
data.tar.gz: dnsmasq.conf
	rm -f $@
	mkdir etc
	cp $< etc
	tar -zcf $@ etc
	rm -r etc
