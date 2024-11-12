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

EXTRA_DIST =

CLEANFILES = \
        *~ *.o *.a *.so

AM_CFLAGS   = $(TARGET_CFLAGS) -ggdb -mno-red-zone -mcmodel=kernel -static
if DEFAULT_PIE
AM_CFLAGS += -fno-PIC -no-pie -fno-PIE
endif

noinst_DATA = libupcall.a

libupcall.a: upcall.o
	ar cr libupcall.a upcall.o

.c.o:
	$(CC) $(CFLAGS) $(AM_CFLAGS) -c $< -o $@
