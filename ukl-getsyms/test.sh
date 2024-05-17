#!/bin/bash

insmod ukl-getsyms.ko
mknod /dev/ukl-getsyms c 248 1
./ukl-makeso.sh
nm /data/libuklsyms.so
