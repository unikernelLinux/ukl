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
	libgcc-build/.gitignore \
	LICENSE \
	README.md

CLEANFILES = \
	*~ *.o *.a \
	stamp-gcc-prereq \
	stamp-h1 \
	stamp-glibc-configure \
	stamp-libgcc-build \
	stamp-libgcc-configure \
	ukl-initrd.cpio.xz \
	vmlinuz

clean-local:
	-rm -rf glibc-build/* libgcc-build/*
	-cd linux && $(MAKE) clean
	-cd $(PROGRAM) && $(MAKE) clean
	-cd initrd && $(MAKE) clean
	-find -name config.cache -delete

min-clean:
	-cd linux && $(MAKE) clean
	-rm UKL.a
	-cd $(PROGRAM) && $(MAKE) clean

app-clean:
	-rm UKL.a
	-cd $(PROGRAM) && $(MAKE) clean

kern-clean:
	-rm vmlinuz
	-cd linux && $(MAKE) clean

DIST_SUBDIRS = dnsmasq hello memcached redis mpc-bench fio

#----------------------------------------------------------------------
# Build libgcc and static libstdc++.
#
# XXX We only want libgcc.  Can we build this in a way which doesn't
# build the whole of gcc?

# C runtime objects.
CRT_OBJS = crtbeginT.o crtend.o libgcc.a libgcc_eh.a

noinst_DATA = $(CRT_OBJS) libstdc++.a

GCC_CFLAGS = -ggdb -O2 -mcmodel=kernel -mno-red-zone
if DEFAULT_PIE
GCC_CFLAGS += -fno-PIC -no-pie -fno-PIE
endif

$(CRT_OBJS): stamp-libgcc-build
stamp-libgcc-build: stamp-libgcc-configure
	rm -f $@
	cd libgcc-build && $(MAKE) all-gcc
	-cd libgcc-build && $(MAKE) all-target-libgcc \
	    CFLAGS_FOR_TARGET='$(GCC_CFLAGS)' \
	    CXXFLAGS_FOR_TARGET='$(GCC_CFLAGS)'
# XXX The kernel memory model doesn't support -fpic, but GCC adds it
# unconditionally, even though we used --disable-shared.
	$(SED) -i 's/PICFLAG/#PICFLAG/g' \
	    libgcc-build/x86_64-pc-linux-gnu/libgcc/Makefile
	cd libgcc-build && $(MAKE) all-target-libgcc \
	    CFLAGS_FOR_TARGET='$(GCC_CFLAGS)' \
	    CXXFLAGS_FOR_TARGET='$(GCC_CFLAGS)'
# libgcc_eh.a is not built automatically when we use --disable-shared,
# but it still builds fine.
	cd libgcc-build/x86_64-pc-linux-gnu/libgcc && \
	    $(MAKE) libgcc_eh.a \
	    CFLAGS_FOR_TARGET='$(GCC_CFLAGS)' \
	    CXXFLAGS_FOR_TARGET='$(GCC_CFLAGS)'
	cd libgcc-build/x86_64-pc-linux-gnu/libgcc && \
	cp $(CRT_OBJS) $(abs_builddir)
	touch $@

libstdc++.a: stamp-libgcc-build
	rm -f $@
	cd libgcc-build && $(MAKE) all-target-libstdc++-v3 \
	    CFLAGS_FOR_TARGET='$(GCC_CFLAGS)' \
	    CXXFLAGS_FOR_TARGET='$(GCC_CFLAGS)'
	cp libgcc-build/x86_64-pc-linux-gnu/libstdc++-v3/src/.libs/libstdc++.a $@

stamp-libgcc-configure: stamp-gcc-prereq
	rm -f $@
	mkdir -p libgcc-build
	cd libgcc-build && \
	$(abs_top_srcdir)/gcc/configure \
	    --prefix=$(abs_builddir) \
	    --enable-languages=c,c++ \
	    --disable-nls \
	    --without-headers \
	    --with-multilib-list=m64 \
	    --disable-multilib \
	    --disable-shared
	touch $@

stamp-gcc-prereq:
	rm -f $@
	cd $(srcdir)/gcc && contrib/download_prerequisites
	touch $@

#----------------------------------------------------------------------
# Build glibc.

LIBC_OBJS = libc.so libpthread.so libm.so librt.so libcrypt.so ld-linux-x86-64.so.2 crt1.o crti.o crtn.o

noinst_DATA += $(LIBC_OBJS)

GLIBC_CFLAGS = -g -O2 -fthread-jumps -mno-red-zone

if ENABLE_BYPASS
GLIBC_CFLAGS += -DUKL_BP
else
GLIBC_CFLAGS += -UUKL_BP
endif

libc.so: stamp-glibc-configure
	rm -f $@
# XXX This fails in the iconv subdirectory, and there seems to be
# no way to disable that feature.  So instead just continue past
# the failure and hope if libc.a has not been created then the
# build will fail on the next line.
	-cd glibc-build && $(MAKE)
	cp glibc-build/libc.so $@

libpthread.so: stamp-glibc-configure libc.so
	rm -f $@
	cd glibc-build && $(MAKE) subdirs=nptl
	cp glibc-build/nptl/libpthread.so $@

libm.so: stamp-glibc-configure libpthread.so
	rm -f $@
	cd glibc-build && $(MAKE) subdirs=math
	cp glibc-build/math/libm.so $@

librt.so: stamp-glibc-configure libm.so
	rm -f $@
	cd glibc-build && $(MAKE) subdirs=rt
	cp glibc-build/rt/librt.so $@

libcrypt.so: stamp-glibc-configure libm.so
	rm -f $@
	cd glibc-build && $(MAKE) subdirs=crypt
	cp glibc-build/crypt/libcrypt.so $@

crt1.o crti.o crtn.o: librt.so
	rm -f $@
	cp glibc-build/csu/$(basename $@).o $@

ld-linux-x86-64.so.2: glibc-build/elf/ld-linux-x86-64.so.2
	cp $< $@

stamp-glibc-configure: linux-headers
	rm -f $@
	mkdir -p glibc-build
	cd glibc-build && \
	$(abs_top_srcdir)/glibc/configure \
	    CFLAGS="$(GLIBC_CFLAGS)" \
	    --prefix=$(abs_builddir) \
	    --with-headers=$(abs_top_srcdir)/linux-headers \
	    --enable-hacker-mode \
	    --enable-timezone-tools \
	    --disable-build-nscd \
	    --disable-nscd \
	    --disable-pt_chown \
	    --disable-tunables \
	    --disable-werror \
	    x86_64-ukl \
	    build_alias=x86_64-ukl \
	    host_alias=x86_64-ukl \
	    target_alias=x86_64-ukl \
	touch $@

glibc-clean:
	-rm -f $(LIBC_OBJS)
	-rm -rf glibc-build/*
	-rm stamp-glibc-configure
#----------------------------------------------------------------------
# Build Linux kernel linked with UKL.a



noinst_DATA += vmlinuz

vmlinuz: linux/arch/x86/boot/bzImage
	cp $< $@

linux/arch/x86/boot/bzImage: linux/.config UKL
	$(MAKE) -C $(srcdir)/linux olddefconfig O=$(abs_builddir)/linux
	$(MAKE) -C $(srcdir)/linux WERROR=0 O=$(abs_builddir)/linux

linux/.config: saveconfig
	rm -f $@
	cp $(srcdir)/saveconfig $@
	echo CONFIG_UNIKERNEL_LINUX=y >> $@
	echo CONFIG_UKL_TLS=y >> $@
	echo CONFIG_UKL_NAME=$(TRIGGER) >> $@

linux-headers: linux/.config
	cd linux && make headers_install INSTALL_HDR_PATH=$(abs_top_srcdir)/tmp
	mv tmp/include linux-headers
	rm -r tmp

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

#----------------------------------------------------------------------
# Compile the program.

UKL: $(PROGRAM)/UKL
	cp $< $@

$(PROGRAM)/UKL: $(CRT_OBJS) $(LIBC_OBJS)
	cd $(PROGRAM) && $(MAKE) UKL

#----------------------------------------------------------------------
# Per-program configuration and data files (if required).

$(PROGRAM)/data.tar.gz:
	rm -f $@
	-cd $(PROGRAM) && $(MAKE) data.tar.gz
	if ! test -f $@; then tar zcf $@ --no-recursion . ; fi

#----------------------------------------------------------------------
# Build the initramfs

noinst_DATA += ukl-initrd.cpio.xz

ukl-initrd.cpio.xz: $(PROGRAM)/data.tar.gz vmlinuz
	cp $(PROGRAM)/data.tar.gz initrd/
	$(MAKE) -C $(srcdir)/initrd $@
	cp initrd/$@ $@

#----------------------------------------------------------------------
# Boot the unikernel under qemu.

# Non-privileged:
boot: ukl-initrd.cpio.xz vmlinuz
	qemu-system-x86_64 \
	    -cpu host,-smap,-smep -accel kvm -m 4G \
	    -kernel vmlinuz \
	    -initrd ./ukl-initrd.cpio.xz \
	    -nodefaults -nographic -serial stdio \
	    -append "console=ttyS0 net.ifnames=0 biosdevname=0 nowatchdog clearcpuid=smap,smep mitigations=off mds=off ip=192.168.122.128:::255.255.255.0::eth0:none" \
	    -net user

# Privileged (probably required if the kernel is expecting incoming
# network connections).
boot-priv: ukl-initrd.cpio.xz vmlinuz
	sudo qemu-system-x86_64 \
	    -cpu host,-smap,-smep -accel kvm -m 4G \
	    -kernel vmlinuz \
	    -initrd ./ukl-initrd.cpio.xz \
	    -nodefaults -nographic -serial stdio \
	    -append "console=ttyS0 net.ifnames=0 biosdevname=0 nowatchdog clearcpuid=smap,smep mitigations=off mds=off ip=192.168.122.128:::255.255.255.0::eth0:none" \
	    -net nic -net bridge,br=virbr0

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
