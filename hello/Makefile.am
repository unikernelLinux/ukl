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

CLEANFILES = UKL

noinst_DATA = UKL

UKL: hello-world.c
	gcc -o hello-world  \
	    -ggdb -mno-red-zone \
	    -Wl,-rpath=/data -L$(abs_top_builddir) \
	    -Wl,-rpath-link=$(abs_top_builddir) \
	    -L$(abs_top_builddir) \
	    -Wl,--dynamic-linker=/data/ld-linux-x86-64.so.2 \
	    $< \
	    -lc -luklsyms
	mv hello-world data
