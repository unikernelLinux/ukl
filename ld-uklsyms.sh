#!/usr/bin/env bash

CMD="ld empty.o -o libuklsyms.so -shared"

while read -r line; do
  sym=$(echo $line | cut -d " " -f 3)
  CMD+=" --defsym $sym=0x0"
done < <(nm linux/vmlinux | grep ukl_)

while read -r line; do
  sym=$(echo $line | cut -d "=" -f 1)
  CMD+=" --defsym $sym=0x0"
done < uklsyms_syms_map


echo $CMD

eval "$CMD"
