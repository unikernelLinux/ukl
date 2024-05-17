#!/bin/bash

# this makes libukl-syms.so from a set of symbol names and
# corresponding absolute addresses -Ross Mikulskis
EMPTY_OBJ=empty.o
touch $EMPTY_OBJ

CMD="ld -shared -o /data/libuklsyms.so empty.o"
arg_count=0
sym_name=""
sym_def=""

for arg in $(./initlib $(cat ukl-syms.txt)); do
    if ((arg_count % 2 == 0)); then
        sym_name=$arg
    else
	sym_def=$arg
        CMD+=" --defsym=$sym_name=$sym_def"
    fi
    ((arg_count++))
done

eval "$CMD"

rm $EMPTY_OBJ
