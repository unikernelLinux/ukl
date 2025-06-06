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
	linux/.config \
	vmlinuz

clean-local:
	-rm -rf glibc-build/* libgcc-build/*
	-cd linux && $(MAKE) clean
	-cd $(PROGRAM) && $(MAKE) clean
	-cd initrd && $(MAKE) clean
	-find -name config.cache -delete

min-clean: app-clean kern-clean

app-clean:
	-cd libupcall && $(MAKE) clean
	-rm UKL.a vmlinuz linux/vmlinux linux/arch/x86/boot/bzImage
	-cd $(PROGRAM) && $(MAKE) clean

kern-clean:
	-rm vmlinuz
	-cd initrd && $(MAKE) clean
	-cd linux && $(MAKE) clean && rm .config

DIST_SUBDIRS = dnsmasq hello memcached valkey mpc-bench fio

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

LIBC_OBJS = libc.a libpthread.a libm.a librt.a libcrypt.a crt1.o crti.o crtn.o

noinst_DATA += $(LIBC_OBJS)

GLIBC_CFLAGS = -g -O2 -fthread-jumps -mcmodel=kernel -mno-red-zone
if DEFAULT_PIE
GLIBC_CFLAGS += -fno-PIC -no-pie -fno-PIE
endif
if ENABLE_BYPASS
GLIBC_CFLAGS += -DUKL_BP
else
GLIBC_CFLAGS += -UUKL_BP
endif

libc.a: stamp-glibc-configure
	rm -f $@
# XXX This fails in the iconv subdirectory, and there seems to be
# no way to disable that feature.  So instead just continue past
# the failure and hope if libc.a has not been created then the
# build will fail on the next line.
	-cd glibc-build && $(MAKE)
	cp glibc-build/libc.a $@

libpthread.a: stamp-glibc-configure libc.a
	rm -f $@
	cd glibc-build && $(MAKE) subdirs=nptl
	cp glibc-build/nptl/libpthread.a $@

libm.a: stamp-glibc-configure libpthread.a
	rm -f $@
	cd glibc-build && $(MAKE) subdirs=math
	cp glibc-build/math/libm.a $@

librt.a: stamp-glibc-configure libm.a
	rm -f $@
	cd glibc-build && $(MAKE) subdirs=rt
	cp glibc-build/rt/librt.a $@

libcrypt.a: stamp-glibc-configure libm.a
	rm -f $@
	cd glibc-build && $(MAKE) subdirs=crypt
	cp glibc-build/crypt/libcrypt.a $@

crt1.o crti.o crtn.o: librt.a
	rm -f $@
	cp glibc-build/csu/$(basename $@).o $@

stamp-glibc-configure:
	rm -f $@
	mkdir -p glibc-build
	cd glibc-build && \
	$(abs_top_srcdir)/glibc/configure \
	    CFLAGS="$(GLIBC_CFLAGS)" \
	    --prefix=$(abs_builddir) \
	    --enable-hacker-mode \
	    --enable-timezone-tools \
	    --disable-build-nscd \
	    --disable-default-pie \
	    --disable-pic \
	    --disable-pie \
	    --disable-nscd \
	    --disable-pt_chown \
	    --enable-static-nss \
	    --disable-shared \
	    --disable-tunables \
	    --disable-werror \
	    x86_64-ukl \
	    build_alias=x86_64-ukl \
	    host_alias=x86_64-ukl \
	    target_alias=x86_64-ukl
	touch $@

#----------------------------------------------------------------------
# Build Linux kernel linked with UKL.a

noinst_DATA += vmlinuz

initrd/perf: linux/tools/perf/perf
	cp $< $@

linux/tools/perf/perf:
	$(MAKE) -C $(srcdir)/linux/tools perf

vmlinuz: linux/arch/x86/boot/bzImage
	cp $< $@

linux/arch/x86/boot/bzImage: linux/.config UKL.a
	$(MAKE) -C $(srcdir)/linux olddefconfig O=$(abs_builddir)/linux
	$(MAKE) -C $(srcdir)/linux WERROR=0 O=$(abs_builddir)/linux
	$(MAKE) -C $(srcdir)/linux scripts_gdb

linux/.config: saveconfig
	rm -f $@
	cp $(srcdir)/saveconfig $@
	echo CONFIG_UNIKERNEL_LINUX=y >> $@
	echo CONFIG_UKL_TLS=y >> $@
	echo CONFIG_UKL_ARCHIVE_PATH=$(ARCHIVE) >> $@
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

#----------------------------------------------------------------------
# Compile the program.

if ENABLE_LIBUPCALL
UPCALL_LIB = $(abs_top_builddir)/libupcall/libupcall.a
else
UPCALL_LIB =
endif

$(abs_top_builddir)/libupcall/libupcall.a:
	cd $(abs_top_builddir)/libupcall && $(MAKE) 

UKL.a: $(PROGRAM)/UKL.a
	cp $< $@

$(PROGRAM)/UKL.a: $(CRT_OBJS) $(LIBC_OBJS) $(UPCALL_LIB)
	cd $(PROGRAM) && $(MAKE) UKL.a

#----------------------------------------------------------------------
# Per-program configuration and data files (if required).

$(PROGRAM)/data.tar.gz:
	rm -f $@
	-cd $(PROGRAM) && $(MAKE) data.tar.gz
	if ! test -f $@; then tar zcf $@ --no-recursion . ; fi

#----------------------------------------------------------------------
# Build the initramfs

noinst_DATA += ukl-initrd.cpio.xz

ukl-initrd.cpio.xz: $(PROGRAM)/data.tar.gz vmlinuz initrd/perf
	cp $(PROGRAM)/data.tar.gz initrd/
	$(MAKE) -C $(srcdir)/initrd $@
	cp initrd/$@ $@

#----------------------------------------------------------------------
# Boot the unikernel under qemu.

# Non-privileged:
boot: vmlinuz ukl-initrd.cpio.xz
	./run_ukl_qemu.sh $^

# Privileged (probably required if the kernel is expecting incoming
# network connections).
boot-priv: vmlinuz ukl-initrd.cpio.xz
	sudo run_ukl_net_qemu.sh $^

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
