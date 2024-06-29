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

clean-all:
	-rm *.o
	-rm stamp-*
	-rm *.tar.gz
	-$(MAKE) glibc-clean
	-$(MAKE) app-clean
	-$(MAKE) kern-clean
	-$(MAKE) initrd-clean
	-find -name config.cache -delete
	-$(MAKE) $(PROGRAM)-clean
	$(MAKE) clean

min-clean:
	-cd linux && $(MAKE) clean
	-rm UKL
	-cd $(PROGRAM) && $(MAKE) clean

kern-clean:
	-rm vmlinuz
	-cd linux && $(MAKE) clean

initrd-clean:
	-rm -rf data.tar.gz
	-rm $(PROGRAM)/UKL
	-rm -f ukl-initrd.cpio.xz
	cd initrd && $(MAKE) clean

glibc-clean:
	-rm -f $(LIBC_OBJS)
	-rm -rf glibc-build
	-rm -rf linux-headers
	-rm stamp-glibc-configure
	-rm stamp-linux-headers
	-rm -r tmp

$(PROGRAM)-clean:
	cd $(PROGRAM) && $(MAKE) clean

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


LIBC_OBJS = libc.so libpthread.so libm.so librt.so libcrypt.so \
	    ld-linux-x86-64.so.2 libuklsyms.so

glibc-tst:
	make glibc-clean
	$(MAKE) 2>&1 | tee $(shell $d)/glibc.make

glibc: FORCE
	-rm $(LIBC_OBJS)
	make $(LIBC_OBJS)

entry-patch.o: entry-patch.c
	gcc -o $@ $< -fPIC -c

undefined_sys_hack.o: undefined_sys_hack.c
	gcc -o $@ $< -fPIC -c

libuklsyms.so: uklsyms-Wl-opts.py linux/vmlinux
	touch tmp
	gcc tmp -o $@ -shared `nm linux/vmlinux | python uklsyms-Wl-opts.py`
	rm tmp

libc.so: libuklsyms.so stamp-glibc-configure entry-patch.o undefined_sys_hack.o
	-cd glibc-build && $(MAKE)
# XXX This fails in the iconv subdirectory, and there seems to be
# no way to disable that feature.  So instead just continue past
# the failure and hope if libc.a has not been created then the
# build will fail on the next line.
	cp glibc-build/$@ $@

libpthread.so: libc.so
	rm -f $@
	cd glibc-build && $(MAKE) subdirs=nptl
	cp glibc-build/nptl/libpthread.so $@

libm.so: libpthread.so
	rm -f $@
	cd glibc-build && $(MAKE) subdirs=math
	cp glibc-build/math/libm.so $@

librt.so: libm.so
	rm -f $@
	cd glibc-build && $(MAKE) subdirs=rt
	cp glibc-build/rt/librt.so $@

libcrypt.so: libm.so
	rm -f $@
	cd glibc-build && $(MAKE) subdirs=crypt
	cp glibc-build/crypt/libcrypt.so $@

ld-linux-x86-64.so.2: libc.so
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
	    --disable-werror \
	    x86_64-ukl \
	    build_alias=x86_64-ukl \
	    host_alias=x86_64-ukl \
	    target_alias=x86_64-ukl 
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

$(PROGRAM)/UKL: $(LIBC_OBJS)
	cd $(PROGRAM) && $(MAKE) UKL

empty.o:
	touch empty.c
	gcc empty.c -c
	rm empty.c

ukl-getsyms/initlib:
	cd ukl-getsyms && $(MAKE)

data.tar.gz: $(LIBC_OBJS) $(PROGRAM)/UKL empty.o ukl-getsyms/initlib
	-mkdir data
	-rm -r data/*	
	cp $(LIBC_OBJS) data
	cp $(PROGRAM)/UKL data
	cp ukl-getsyms/initlib data
	cp ukl-getsyms/ukl-makeso.sh data
	cp ukl-getsyms/ukl-getsyms.ko data
	cp undefined_sys_hack.o data
	mv empty.o data
	ln data/libc.so data/libc.so.6
	ln data/libm.so data/libm.so.6
	ln data/libpthread.so data/libpthread.so.0
	tar -czf data.tar.gz data
	rm -r data
	cp $@ initrd	

#----------------------------------------------------------------------
# Build the initramfs

noinst_DATA += ukl-initrd.cpio.xz


initrd: FORCE
	-rm -f ukl-initrd.cpio.xz initrd/ukl-initrd.cpio.xz
	$(MAKE) ukl-initrd.cpio.xz	

ukl-initrd.cpio.xz: data.tar.gz
	$(MAKE) -C $(srcdir)/initrd $@
	cp initrd/$@ $@

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
