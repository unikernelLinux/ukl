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

EXTRA_DIST = valkey.conf

CLEANFILES = \
	*~ *.o *.a \
	stamp-valkey-dir

clean-local:
	-cd valkey && $(MAKE) clean

distclean-local:
	rm -rf valkey

deps:
	@echo "Building dependencies..."
	-(cd valkey/deps && $(MAKE) hiredis linenoise hdr_histogram fpconv lua jemalloc) > /dev/null || true

data: trigger.sh
	-rm -rf $@
	mkdir $@
	cp valkey/valkey.conf $@
	cp trigger.sh $@

UKL: deps data
	@echo "Building valkey..."
	cd valkey && $(MAKE) MALLOC=libc 
	cd valkey/src && cp valkey-server ../../data/UKL

# Check out a local copy of valkey.
stamp-valkey-dir:
	rm -f $@
	if ! test -d valkey; then \
	    git clone -b 8.0 https://github.com/unikernelLinux/valkey.git; \
	fi
	touch $@

# Configuration file used by valkey.
data.tar.gz: valkey.conf
	rm -f $@
	tar -zcf $@ -C $(srcdir) valkey.conf
