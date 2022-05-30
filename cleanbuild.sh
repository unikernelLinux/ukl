#!/bin/bash

set -e
set -x

if [[ $# -eq 0 ]] ; then
    echo 'glibc bypass arg missing'
    echo '0 for no bypass, 1 for bypass on'
    exit 0
fi

case "$1" in
    0) echo 'you selected no bypass i.e., UUKL_BP'; BP_FLAG=-UUKL_BP ;;
    1) echo 'you selected bypass i.e., DUKL_BP'; BP_FLAG=-DUKL_BP ;;
    *) echo 'Incorrect value'; exit 0 ;;
esac

sleep 2

rm -rf log
rm -rf glibc-build
mkdir glibc-build
cd glibc-build
../glibc/configure CFLAGS="-g -O2 -fthread-jumps -mcmodel=kernel -mno-red-zone ${BP_FLAG}" --prefix=/home/fedora/unikernel/build-glibc/glibc-build --enable-hacker-mode --enable-timezone-tools --disable-build-nscd --disable-nscd --disable-pt_chown --enable-static-nss x86_64-ukl --disable-shared --disable-tunables --disable-werror build_alias=x86_64-ukl host_alias=x86_64-ukl target_alias=x86_64-ukl
make -j10
make -j10 subdirs=nptl
make -j10 subdirs=math
make -j10 subdirs=rt
cd ..

ls glibc-build/libc.a
ls glibc-build/nptl/libpthread.a

