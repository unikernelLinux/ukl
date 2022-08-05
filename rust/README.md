Cd into hello-rust

gcc -c main.c foo.c

./link.sh (change the relative paths in the script)

You can do the final linking by running `ld howdy`, but you can't run `nm howdy`. This produces the same error as running the UKL makefile to link with the kernel. `LLVM ERROR: Invalid encoding`.


