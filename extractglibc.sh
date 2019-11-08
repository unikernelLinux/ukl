#!/bin/bash

rm libc.a
rm libpthread.a
cp ../build-glibc/glibc-build/libc.a .
cp ../build-glibc/glibc-build/nptl/libpthread.a .
rm -rf libc
mkdir libc
rm -rf libpthread
mkdir libpthread
cp libc.a libc/
cp libpthread.a libpthread/
cd libc
ar -x libc.a
rm libc.a
cd ../libpthread
ar -x libpthread.a
rm libpthread.a
cd ..
