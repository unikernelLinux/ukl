#!/bin/bash

set -x

WDIR=$1

install -m0755 ./init $WDIR/init

if [ -s data.tar.gz ] ; then
	tar xf data.tar.gz -C ${WDIR}
fi

cp -r perf ${WDIR}

rm -f $unsorted

pushd $WDIR
find . | cpio -o -H newc | xz --format=lzma > ../ukl-initrd.cpio.xz
popd
