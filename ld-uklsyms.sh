#!/usr/bin/env bash

CMD="ld empty.o -o libuklsyms.so -shared"

# get special ukl symbols from the kernel binary
while read -r line; do
  sym=$(echo $line | cut -d " " -f 3)
  CMD+=" --defsym $sym=0x0"
done < <(nm linux/vmlinux | grep ukl_)

# get any symbols that need to be defined as equal to another symbol (for now this is just fcntl64)
while read -r line; do
  sym=$(echo $line | cut -d "=" -f 1)
  CMD+=" --defsym $sym=0x0"
done < uklsyms_syms_map

# get symbols needed for shortcut mode
while read -r line; do
  sym=$line
  CMD+=" --defsym $sym=0x0"
done < uklsyms_shortcuts

eval "$CMD"
