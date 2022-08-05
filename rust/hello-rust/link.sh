#!/bin/bash

# ld -r -plugin /usr/libexec/gcc/x86_64-redhat-linux/12/liblto_plugin.so -plugin-opt=/usr/libexec/gcc/x86_64-redhat-linux/12/lto-wrapper -plugin-opt=-fresolution=/tmp/cc8XaiYf.res -plugin-opt=-pass-through=-lgcc -plugin-opt=-pass-through=-lgcc_eh -plugin-opt=-pass-through=-lc --build-id --no-add-needed --hash-style=gnu -m elf_x86_64 -static -o main2.o main.o target/x86_64-unknown-linux-gnu/release/libhello.a 

#-L/home/jonocameron/.rustup/toolchains/stable-x86_64-unknown-linux-gnu/lib  -lstd-69edc9ac8de4d39c

ld -r -static -m elf_x86_64 -o howdy /usr/lib/gcc/x86_64-redhat-linux/12/../../../../lib64/crt1.o /usr/lib/gcc/x86_64-redhat-linux/12/../../../../lib64/crti.o /usr/lib/gcc/x86_64-redhat-linux/12/crtbeginT.o -L/usr/lib/gcc/x86_64-redhat-linux/12 -L/usr/lib/gcc/x86_64-redhat-linux/12/../../../../lib64 -L/lib/../lib64 -L/usr/lib/../lib64 -L/usr/lib/gcc/x86_64-redhat-linux/12/../../..  main.o foo.o target/debug/deps/libhello.a  --start-group -lgcc -lgcc_eh -lc --end-group /usr/lib/gcc/x86_64-redhat-linux/12/crtend.o /usr/lib/gcc/x86_64-redhat-linux/12/../../../../lib64/crtn.o

