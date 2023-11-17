# UKL_DYNAMIC

UKL initrd build system copies this directory `ukl-getsyms` into the initrd. This kernel module builds a shared object with all the kernel symbols we may need for shortcutting in UKL for accelerated workflows.

## Getting started
Simply run `./ukl-makeso.sh` and this will produce a shared object, `libukl-syms.so`, with all of the kernel symbols specified in `ukl-syms.txt`. We inlude `test.sh` to insmod and handle the node creation for the first time you use this module.

## Changes to the kernel
We export `kallsyms_lookup_name` in the kernel config for use in `ukl-getsyms.c`.
