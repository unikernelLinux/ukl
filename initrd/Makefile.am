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

CLEANFILES = ukl-initrd.cpio.xz data.tar.gz stamp-initrd


CONTAINER:="init-builder"

clean:
	rm -f $(CLEANFILES)
	docker rm -f $(CONTAINER)

stamp-initrd: buildinitrd.sh set-passwd.sh
	docker pull fedora:36
	-docker stop $(CONTAINER)
	-docker rm -f $(CONTAINER)
	docker run --privileged --name=$(CONTAINER) -v $(abs_builddir):/src -dit fedora:36 /bin/bash
	docker exec -it $(CONTAINER) dnf -y update
	docker exec -it $(CONTAINER) dnf -y install sed elfutils-libelf-devel bc hostname perl dropbear \
		msr-tools wget dnf-plugins-core bzip2 curl xz cpio shadow-utils procps-ng iproute pciutils net-tools
	docker exec -it $(CONTAINER) yum -y install gdb
	docker exec -w /src/ -it $(CONTAINER) rm -rf ukl-initrd
	docker exec -w /src/ -it $(CONTAINER) ./set-passwd.sh
	docker exec -w /src/ -it $(CONTAINER) ./buildinitrd.sh ukl-initrd
	docker stop $(CONTAINER) > /dev/null
	touch $@

data.tar.gz:
	cd .. && $(MAKE) $@	

ukl-initrd.cpio.xz: stamp-initrd data.tar.gz init install-data.sh
	docker start $(CONTAINER) > /dev/null
	docker exec -w /src/ -it $(CONTAINER) ./install-data.sh ukl-initrd
	docker stop $(CONTAINER) & > /dev/null

all: ukl-initrd.cpio.xz
