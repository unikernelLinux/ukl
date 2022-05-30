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
	*~ *.o *.a \
	stamp-glibc-configure

clean-local:
	-cd glibc-build && $(MAKE) clean

#----------------------------------------------------------------------
# Build glibc.

LIBC_OBJS = libc.a libpthread.a libm.a librt.a crt1.o crti.o crtn.o

noinst_DATA = $(LIBC_OBJS)

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
