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

AM_CFLAGS   = -ggdb -mno-red-zone -mcmodel=kernel -static -DVERSION='"UNKNOWN"'

# See dnsmasq/src/
dnsmasq_OBJECTS = \
	arp.o \
	auth.o \
	blockdata.o \
	bpf.o \
	cache.o \
	conntrack.o \
	crypto.o \
	dbus.o \
	dhcp6.o \
	dhcp-common.o \
	dhcp.o \
	dnsmasq.o \
	dnssec.o \
	domain-match.o \
	domain.o \
	dump.o \
	edns0.o \
	forward.o \
	hash-questions.o \
	helper.o \
	inotify.o \
	ipset.o \
	lease.o \
	log.o \
	loop.o \
	metrics.o \
	netlink.o \
	network.o \
	option.o \
	outpacket.o \
	pattern.o \
	poll.o \
	radv.o \
	rfc1035.o \
	rfc2131.o \
	rfc3315.o \
	rrfilter.o \
	slaac.o \
	tables.o \
	tftp.o \
	ubus.o \
	util.o

UKL.a: dnsmasq-full.o undefined_sys_hack.o
	rm -f $@
	ar cr UKL.a $^
	objcopy --prefix-symbols=ukl_ $@
	objcopy --redefine-syms=$(top_srcdir)/redef_sym_names $@

dnsmasq-full.o: $(dnsmasq_OBJECTS)
	ld -r -o $@ -allow-multiple-definition \
	    $(CRT_STARTS) \
	    $(dnsmasq_OBJECTS) \
	    --start-group \
	    --whole-archive \
	    $(MATH_LIB) $(RT_LIB) $(PTHREAD_LIB) $(C_LIB) \
	    --no-whole-archive \
	    $(GCC_LIBS) \
	    --end-group \
	    $(CRT_ENDS)

# automake doesn't add this rule unless we were to specify a C program
# to compile, which we don't want to do because of the very special
# linking requirements.
%.o: $(srcdir)/dnsmasq/src/%.c
	$(CC) $(CFLAGS) $(AM_CFLAGS) -c $< -o $@

undefined_sys_hack.c: $(top_builddir)/undefined_sys_hack.c
	cp $< $@
undefined_sys_hack.o: undefined_sys_hack.c
	$(CC) $(CFLAGS) $(AM_CFLAGS) -c $< -o $@

# Configuration file used by dnsmasq.
data.tar.gz: dnsmasq.conf
	rm -f $@
	mkdir etc
	cp $< etc
	tar -zcf $@ etc
	rm -r etc
