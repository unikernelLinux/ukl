Cd into hello-rust

Compile rust library with command
`RUSTFLAGS=' --emit=obj -C no-redzone=off -C linker-plugin-lto=no -C code-model=kernel -C lto=off -C relocation-model=static' cargo build -v`


gcc -c main.c foo.c

./link.sh (change the relative paths in the script)

You can do the final linking by running `ld howdy`, but you can't run `nm howdy`. This produces the same error as running the UKL makefile to link with the kernel. `LLVM ERROR: Invalid encoding`.


