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

EXTRA_DIST = \
	.gitignore \
	glibc-build/.gitignore \
	LICENSE \
	README.md


CLEANFILES = \
	*~ *.o *.a *.so *.so.[0-9] *.txt \
	stamp-* \
	vmlinuz \
	data.tar.gz *.cpio.xz \
	enable-bypass

clean-all:
	-rm -rf linux-headers tmp
	rm -rf glibc-build/*
	cd linux && $(MAKE) clean
	cd initrd && $(MAKE) clean
	cd $(PROGRAM) && $(MAKE) clean
	-find -name config.cache -delete
	$(MAKE) clean

glibc-clean:
	-rm stamp-glibc-configure
	-rm $(LIBC_OBJS)
	-rm -rf glibc-build/*

DIST_SUBDIRS = dnsmasq hello memcached redis mpc-bench fio

FORCE:
	true

# Build glibc.

noinst_DATA = $(LIBC_OBJS)

GLIBC_CFLAGS = -g -O2 -mno-red-zone -fthread-jumps

if ENABLE_BYPASS
GLIBC_CFLAGS += -DUKL_BP
else
GLIBC_CFLAGS += -UUKL_BP
endif

LIBC_OBJS = libc.so.6 libc_nonshared.a \
	    ld-linux-x86-64.so.2 libuklsyms.so \
	    libm.so.6 undefined_sys_hack.o

glibc: FORCE
	-rm $(LIBC_OBJS)
	make $(LIBC_OBJS)

undefined_sys_hack.o: undefined_sys_hack.c
	gcc -c undefined_sys_hack.c

empty.o:
	echo "" | gcc -x c - -c -o $@	

libuklsyms.so: empty.o linux/vmlinux uklsyms_syms_map
	bash ld-uklsyms.sh

# XXX this fails in the iconv subdirectory because there is no general rule
# in the Makefiles to add libuklsyms.so to the linker's PATH, so just ignore
# the error and assume that if we have the libc.so binary, then the build 
# succeeded and all other deps (ld-linux-x86-64.so.2, libm.so, etc.) are also present
libc.so.6: libuklsyms.so stamp-glibc-configure undefined_sys_hack.o
	$(MAKE) -C glibc-build
	cp glibc-build/libc.so $@

libm.so.6: libc.so.6
	$(MAKE) -C glibc-build subdirs=math
	cp glibc-build/math/libm.so $@

libc_nonshared.a: libc.so.6
	cp glibc-build/$@ $@

ld-linux-x86-64.so.2: libc.so.6
	cp glibc-build/elf/$@ $@

stamp-glibc-configure: stamp-linux-headers
	mkdir -p glibc-build
	cd glibc-build && \
	$(abs_top_srcdir)/glibc/configure \
	    CFLAGS="$(GLIBC_CFLAGS)"  \
	    --prefix=$(abs_builddir) \
	    --with-headers=$(abs_top_srcdir)/linux-headers \
	    --enable-hacker-mode \
	    --enable-timezone-tools \
	    --disable-build-nscd \
	    --disable-nscd \
	    --disable-tunables \
	    --disable-pt_chown \
	    --disable-werror 
	touch $@

#----------------------------------------------------------------------
# Build Linux kernel linked with UKL.a

noinst_DATA += vmlinuz

linux: FORCE
	-rm vmlinuz linux/arch/x86/boot/bzImage
	$(MAKE) vmlinuz

vmlinuz: linux/arch/x86/boot/bzImage
	cp $< $@

linux/vmlinux: linux/arch/x86/boot/bzImage

linux/arch/x86/boot/bzImage: linux/.config
	$(MAKE) -C $(srcdir)/linux olddefconfig O=$(abs_builddir)/linux
	-$(MAKE) -C $(srcdir)/linux WERROR=0 O=$(abs_builddir)/linux

linux/.config: saveconfig
	rm -f $@
	cp $(srcdir)/saveconfig $@
	echo CONFIG_UNIKERNEL_LINUX=y >> $@
	echo CONFIG_UKL_TLS=y >> $@
	echo CONFIG_UKL_NAME=$(TRIGGER) >> $@
if ENABLE_SAME_STACK
	echo CONFIG_UKL_SAME_STACK=y >> $@
endif
if ENABLE_USE_RET
	echo CONFIG_UKL_USE_RET=y >> $@
endif
if ENABLE_USE_IST_PF
	echo CONFIG_UKL_USE_IST_PF=y >> $@
endif
if ENABLE_SHORTCUT
	echo CONFIG_UKL_DEEP_SHORTCUT=y >> $@
endif

stamp-linux-headers: linux/.config
	-rm -rf linux-headers tmp
	cd linux && make headers_install INSTALL_HDR_PATH=$(abs_top_srcdir)/tmp
	mv tmp/include linux-headers
	rm -r tmp
	touch $@

#----------------------------------------------------------------------
# Compile the program.

export LIBC_OBJS

# XXX This compiles with the crt* files of the host system
$(PROGRAM)/UKL: $(LIBC_OBJS)
	cd $(PROGRAM) && $(MAKE) UKL

ukl-getsyms/initlib: ukl-getsyms/ukl-getsyms.c ukl-getsyms/ukl-initlib.c
	cd ukl-getsyms && $(MAKE)

enable-bypass: enable-bypass.c libuklsyms.so
	gcc -o $@ $< -L. -luklsyms -Wl,-rpath=/data -Wl,--dynamic-linker=/data/ld-linux-x86-64.so.2

data.tar.gz: $(LIBC_OBJS) libc.so $(PROGRAM)/UKL empty.o ukl-getsyms/initlib enable-bypass
	-rm -rf data
	-mkdir data
	cp $(LIBC_OBJS) data
	cp libc.so data
# XXX libm.so is supposed to be a linker script that includes libmvec.so as-needed
	ln -s data/libm.so.6 data/libm.so
	cp ukl-getsyms/initlib data
	cp ukl-getsyms/ukl-makeso.sh data
	cp ukl-getsyms/ukl-getsyms.ko data
	cp uklsyms_syms_map data
	cp empty.o data
# it's expected that the PROGRAM subdir create it's own data dir with the UKL application, 
# any data that app needs to run, and and an entry.sh entrypoint script
	cp -r $(PROGRAM)/data/* data
	cp enable-bypass data
	tar -czf data.tar.gz data
	cp $@ initrd	

#----------------------------------------------------------------------
# Build the initramfs

noinst_DATA += ukl-initrd.cpio.xz

ukl-initrd.cpio.xz: stamp-initrd

stamp-initrd: data.tar.gz
	$(MAKE) -C $(srcdir)/initrd stamp-initrd
	cp initrd/ukl-initrd.cpio.xz .
	touch $@

#----------------------------------------------------------------------
# Boot the unikernel under qemu.

# Non-privileged:
boot:
	qemu-system-x86_64 \
	    -cpu host,-smap,-smep -accel kvm -m 4G \
	    -kernel vmlinuz \
	    -initrd ./ukl-initrd.cpio.xz \
	    -nodefaults -nographic -serial stdio \
	    -append "console=ttyS0 net.ifnames=0 biosdevname=0 nowatchdog clearcpuid=smap,smep mitigations=off mds=off ip=192.168.122.128:::255.255.255.0::eth0:none init=/bin/bash" \
	    -net user

# Privileged (probably required if the kernel is expecting incoming
# network connections).
boot-priv:
	sudo qemu-system-x86_64 \
	    -cpu host,-smap,-smep -accel kvm -m 4G \
	    -kernel vmlinuz \
	    -initrd ./ukl-initrd.cpio.xz \
	    -nodefaults -nographic -serial stdio \
	    -append "console=ttyS0 net.ifnames=0 biosdevname=0 nowatchdog clearcpuid=smap,smep mitigations=off mds=off ip=192.168.122.128:::255.255.255.0::eth0:none" \
	    -net nic -net bridge,br=virbr0

# Run for the purposes of debugging.
# In a separate terminal inside of gdb run 
#	(gdb) target remote :1234
#	(gdb) symbol-file linux/vmlinux
#
# note that if you wish to set a breakpoint before the kernel has had the opportunity to set
# up its VAS, you will need to use a hardware breakpoint (hbreak)
boot-gdb:
	qemu-system-x86_64 \
	    -cpu host,-smap,-smep -accel kvm -m 4G \
	    -kernel vmlinuz \
	    -initrd ./ukl-initrd.cpio.xz \
	    -nodefaults -nographic -serial stdio \
	    -append "console=ttyS0 net.ifnames=0 biosdevname=0 nowatchdog clearcpuid=smap,smep mitigations=off mds=off ip=192.168.122.128:::255.255.255.0::eth0:none" \
	    -net user \
	    -s -S

boot-gdb-priv:
	sudo qemu-system-x86_64 \
	    -cpu host,-smap,-smep -accel kvm -m 4G \
	    -kernel vmlinuz \
	    -initrd ./ukl-initrd.cpio.xz \
	    -nodefaults -nographic -serial stdio \
	    -append "console=ttyS0 net.ifnames=0 biosdevname=0 nowatchdog clearcpuid=smap,smep mitigations=off mds=off ip=192.168.122.128:::255.255.255.0::eth0:none" \
	    -net nic -net bridge,br=virbr0 \
	    -s -S


#----------------------------------------------------------------------
# Maintainers only!

# Check no files are missing from EXTRA_DIST rules, and that all
# generated files have been included in the tarball.  (Note you must
# have done 'make dist')
maintainer-check-extra-dist:
	@zcat $(PACKAGE_NAME)-$(VERSION).tar.gz | tar tf - | sort | \
	  sed 's,^$(PACKAGE_NAME)-$(VERSION)/,,' > tarfiles
	@git ls-files | \
	    sort > gitfiles
	@comm -13 tarfiles gitfiles > comm-out
	@echo Checking for differences between EXTRA_DIST and git ...
	@cat comm-out
	@[ ! -s comm-out ]
	@rm tarfiles gitfiles comm-out
	@echo PASS: EXTRA_DIST tests

# Commit everything in the current directory and set the commit
# message to the current version number.
maintainer-commit:
	git commit -a -m "Version $(VERSION)."

# Tag HEAD with the current version.
maintainer-tag:
	git tag -a v$(VERSION) -m "Version $(VERSION)." -f
