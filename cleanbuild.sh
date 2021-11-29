#!/bin/bash

rm -rf log
rm -rf glibc-build
mkdir glibc-build
cd glibc-build
../glibc/configure CFLAGS="-g -O2 -fthread-jumps -mcmodel=kernel -mno-red-zone -UUKL_BP -Wno-stringop-overflow" --prefix=/home/fedora/unikernel/build-glibc/glibc-build --enable-hacker-mode --enable-timezone-tools --disable-build-nscd --disable-nscd --disable-pt_chown --enable-static-nss x86_64-ukl --disable-shared --disable-tunables build_alias=x86_64-ukl host_alias=x86_64-ukl target_alias=x86_64-ukl |& tee -a ../log
make -j10 |& tee -a ../log
make -j10 subdirs=nptl |& tee -a ../log
make -j10 subdirs=math |& tee -a ../log
make -j10 subdirs=rt |& tee -a ../log
cd ..

ls glibc-build/libc.a
ls glibc-build/nptl/libpthread.a

