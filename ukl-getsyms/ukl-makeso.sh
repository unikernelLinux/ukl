#!/bin/bash

# this makes libukl-syms.so from a set of symbol names and
# corresponding absolute addresses -Ross Mikulskis

echo "called ukl-makeso.sh"
insmod /data/ukl-getsyms.ko
mknod /dev/ukl-getsyms c 248 1

CMD="ld /data/empty.o -shared -o /data/libuklsyms.so"
arg_count=0
sym_name=""
sym_def=""

UKL_SYMS=$(nm /data/libuklsyms.so | grep ' A ' | awk '{print $3}')

for arg in $(./initlib $UKL_SYMS); do
    if ((arg_count % 2 == 0)); then
        sym_name=$arg
    else
	sym_def=$arg
	if ((sym_def != 0)); then
           CMD+=" --defsym=$sym_name=$sym_def"
	fi
    fi
    ((arg_count++))
done

eval "$CMD"
