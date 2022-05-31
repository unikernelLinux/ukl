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
	stamp-glibc-configure \
	stamp-libgcc-build \
	stamp-libgcc-configure \
	vmlinuz

clean-local:
	-cd glibc-build && $(MAKE) clean
	-cd libgcc-build && $(MAKE) clean
	-cd linux && $(MAKE) mrproper
	rm -rf initrd supermin.d
	-find -name config.cache -delete

DIST_SUBDIRS = hello redis

#----------------------------------------------------------------------
# Build libgcc and static libstdc++.
#
# XXX We only want libgcc.  Can we build this in a way which doesn't
# build the whole of gcc?

# C runtime objects.
CRT_OBJS = crtbeginT.o crtend.o libgcc.a libgcc_eh.a

noinst_DATA = $(CRT_OBJS) libstdc++.a

$(CRT_OBJS): stamp-libgcc-build
stamp-libgcc-build: stamp-libgcc-configure
	rm -f $@
	cd libgcc-build && $(MAKE) all-gcc
	-cd libgcc-build && $(MAKE) all-target-libgcc \
	    CFLAGS_FOR_TARGET='-ggdb -O2 -mno-red-zone -mcmodel=kernel' \
	    CXXFLAGS_FOR_TARGET='-ggdb -O2 -mno-red-zone -mcmodel=kernel'
# XXX The kernel memory model doesn't support -fpic, but GCC adds it
# unconditionally, even though we used --disable-shared.
	$(SED) -i 's/PICFLAG/#PICFLAG/g' \
	    libgcc-build/x86_64-pc-linux-gnu/libgcc/Makefile
	cd libgcc-build && $(MAKE) all-target-libgcc \
	    CFLAGS_FOR_TARGET='-ggdb -O2 -mno-red-zone -mcmodel=kernel' \
	    CXXFLAGS_FOR_TARGET='-ggdb -O2 -mno-red-zone -mcmodel=kernel'
# libgcc_eh.a is not built automatically when we use --disable-shared,
# but it still builds fine.
	cd libgcc-build/x86_64-pc-linux-gnu/libgcc && \
	    $(MAKE) libgcc_eh.a \
	    CFLAGS_FOR_TARGET='-ggdb -O2 -mno-red-zone -mcmodel=kernel' \
	    CXXFLAGS_FOR_TARGET='-ggdb -O2 -mno-red-zone -mcmodel=kernel'
	cd libgcc-build/x86_64-pc-linux-gnu/libgcc && \
	cp $(CRT_OBJS) $(abs_builddir)
	touch $@

libstdc++.a: stamp-libgcc-build
	rm -f $@
	cd libgcc-build && $(MAKE) all-target-libstdc++-v3 \
	    CFLAGS_FOR_TARGET='-ggdb -O2 -mno-red-zone -mcmodel=kernel' \
	    CXXFLAGS_FOR_TARGET='-ggdb -O2 -mno-red-zone -mcmodel=kernel'
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

LIBC_OBJS = libc.a libpthread.a libm.a librt.a crt1.o crti.o crtn.o

noinst_DATA += $(LIBC_OBJS)

GLIBC_CFLAGS = -g -O2 -fthread-jumps -mcmodel=kernel -mno-red-zone
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

vmlinuz: linux/arch/x86/boot/bzImage
	cp $< $@

linux/arch/x86/boot/bzImage: linux/.config UKL.a
	mkdir -p linux
	$(MAKE) -C $(srcdir)/linux olddefconfig O=$(abs_builddir)/linux
	$(MAKE) -C $(srcdir)/linux WERROR=0 O=$(abs_builddir)/linux

linux/.config: saveconfig
	rm -f $@
	mkdir -p linux
	cp $(srcdir)/saveconfig $@
	echo CONFIG_UNIKERNEL_LINUX=y >> $@
if ENABLE_SAME_STACK
	echo CONFIG_UKL_SAME_STACK=y >> $@
endif
if ENABLE_USE_RET
	echo CONFIG_UKL_USE_RET=y >> $@
endif
if ENABLE_USE_IST_PF
	echo CONFIG_UKL_USE_IST_PF=y >> $@
endif
if ENABLE_AFTERSPACE
	echo CONFIG_UKL_CREATE_AFTERSPACE=y >> $@
endif

#----------------------------------------------------------------------
# Compile the program.

UKL.a: $(PROGRAM)/UKL.a
	cp $< $@

$(PROGRAM)/UKL.a: $(CRT_OBJS) $(LIBC_OBJS)
	cd $(PROGRAM) && $(MAKE) UKL.a

#----------------------------------------------------------------------
# Build the initramfs and root filesystem.

INITRD_PACKAGES = \
	bash \
	coreutils \
	ethtool \
	iproute \
	iputils \
	kmod \
	net-tools \
	pciutils \
	perf \
	procps-ng \
	python \
	strace \
	strace \
	util-linux \
	vim

noinst_DATA += initrd/root

initrd/root: supermin.d/packages \
	     supermin.d/init.tar.gz \
	     supermin.d/program.tar.gz
	$(SUPERMIN) --build \
	    --size 8G --if-newer --format ext2 \
	    supermin.d -o initrd
	touch $@

supermin.d/packages:
	mkdir -p supermin.d
	$(SUPERMIN) --prepare $(INITRD_PACKAGES) -o supermin.d

supermin.d/init.tar.gz: init
	mkdir -p supermin.d
	tar -zcf $@ $^

# XXX Hack for redis configuration.  TODO: Work out how to allow
# target programs to have their own files/configuration.
supermin.d/program.tar.gz: redis/myredis.conf
	mkdir -p supermin.d
	tar -zcf $@ -C $(srcdir)/redis myredis.conf

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
