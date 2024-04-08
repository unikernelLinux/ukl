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
	*~ *.o *.so  *.so.2 \
	stamp-glibc-configure \
	stamp-linux-headers \
	ukl-initrd.cpio.xz \
	data.tar.gz \
	vmlinuz

clean-all:
	-$(MAKE) glibc-clean
	-$(MAKE) app-clean
	-$(MAKE) kern-clean
	-$(MAKE) initrd-clean
	-find -name config.cache -delete

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
	-rm -rf glibc-build/*
	-rm -rf linux-headers
	-rm stamp-glibc-configure
	-rm stamp-linux-headers

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
	    ld-linux-x86-64.so.2 entry-patch.o

entry-patch.o: entry-patch.c
	gcc entry-patch.c -c -fPIC -nostdlib $(GLIBC_CFLAGS)

glibc: FORCE
	-rm $(LIBC_OBJS)
	make $(LIBC_OBJS)

libc.so: entry-patch.o stamp-glibc-configure
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
	touch $@
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

#----------------------------------------------------------------------
# Build Linux kernel linked with UKL.a

noinst_DATA += vmlinuz

vmlinuz: linux/arch/x86/boot/bzImage
	cp $< $@

linux/arch/x86/boot/bzImage: linux/.config
	$(MAKE) -C $(srcdir)/linux olddefconfig O=$(abs_builddir)/linux
	$(MAKE) -C $(srcdir)/linux WERROR=0 O=$(abs_builddir)/linux
	$(MAKE) -C $(srcdir)/linux scripts_gdb

linux/.config: saveconfig
	rm -f $@
	cp $(srcdir)/saveconfig $@
	echo CONFIG_UNIKERNEL_LINUX=y >> $@
	echo # CONFIG_UKL_TLS=y >> $@
	echo CONFIG_UKL_NAME=$(TRIGGER) >> $@
# enable lx-symbol python scripts in gdb
	echo CONFIG_GDB_SCRIPTS=y >> $@
	echo CONFIG_KGDB=y >> $@
	echo CONFIG_FRAME_POINTER=y >> $@
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
	-rm -rf linux-headers
	cd linux && make headers_install INSTALL_HDR_PATH=$(abs_top_srcdir)/tmp
	mv tmp/include linux-headers
	rm -r tmp
	touch $@


#----------------------------------------------------------------------
# Compile the program.

export LIBC_OBJS

data.tar.gz: $(LIBC_OBJS)
	-mkdir data
	-rm -r data/*
	cd $(PROGRAM) && make UKL	
	cp $(LIBC_OBJS) data
	cp $(PROGRAM)/UKL data
	ln data/libc.so data/libc.so.6
	tar -czf data.tar.gz data
	rm -r data
	cp $@ initrd	

#----------------------------------------------------------------------
# Build the initramfs

noinst_DATA += ukl-initrd.cpio.xz

initrd: FORCE
	-rm ukl-initrd.cpio.xz
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
	    -append "console=ttyS0 net.ifnames=0 biosdevname=0 nowatchdog clearcpuid=smap,smep mitigations=off mds=off ip=192.168.122.128:::255.255.255.0::eth0:none" \
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
