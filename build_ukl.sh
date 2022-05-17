#!/bin/bash

if [[ $# -eq 0 ]] ; then
    echo 'No arguments'
    echo 'usage: ./build_ukl.sh glibc_arg workload_dir'
    exit 1
fi

if [ $# -lt 2 ]; then
    echo 'Less arguments then expected'
    echo 'usage: ./build_ukl.sh glibc_arg workload_dir'
    exit 1
fi

if [ $# -gt 2 ]; then
    echo 'More arguments than expected'
    echo 'usage: ./build_ukl.sh glibc_arg workload_dir'
    exit 1
fi

case "$1" in
    0) echo 'you selected glibc no bypass i.e., UUKL_BP' ;;
    1) echo 'you selected glibc bypass i.e., DUKL_BP' ;;
    *) echo 'Incorrect glibc bypass argument: '$1; exit 1 ;;
esac

if [ -d "$2" ]
then
    echo "$2 directory  exists!"
else
    echo "$2 directory not found!"
    exit 1
fi

sleep 2

# deleting old files
rm -rf UKL.a
rm -rf linux/vmlinux

# building glibc
./cleanbuild.sh $1 |& tee log_build

# build gcc
# make gcc-build-cpp |& tee -a log_build

# build undefined_sys_hack.o
gcc -c -o undefined_sys_hack.o undefined_sys_hack.c -mcmodel=kernel -ggdb -mno-red-zone |& tee -a log_build

# build workload
make -C $2 |& tee -a log_build

# build unikernel
make linux-clean
sleep 2
make linux-build |& tee -a log_build
