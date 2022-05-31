# Unikernel Linux (UKL)

Unikernel Linux (UKL) is a small patch to Linux and glibc which allows
you to build many programs, unmodified, as unikernels.  That means
they are linked with the Linux kernel into a final `vmlinuz` and run
in kernel space.  You can boot these kernels on baremetal or inside a
virtual machine.  Almost all features and drivers in Linux are
available for use by the unikernel.

## Requirements

* autoconf & automake
* GCC or Clang
* GNU make
* GNU sed
* supermin (https://github.com/libguestfs/supermin)
* qemu, if you want to test boot in a virtual machine

## Building the included programs

```
git clone https://github.com/unikernelLinux/ukl
cd ukl
git submodule update --init
autoreconf -i
./configure --with-program=hello
make -j`nproc`
```

To test it (requires qemu):

```
make boot
```

If the program requires incoming network connections, use this target
instead.  Note this runs qemu with `sudo`:

```
make boot-priv
```

`hello` is a simple hello world example.  You can try one of the other
programs (see subdirectories in the source) by adjusting
`./configure --with-program=...`

Currently you must `make clean -C linux` if you change the program.
(This is a bug which we should fix.)

## Configuration options

Some additional options are available to turn on and off features of
UKL:

```
$ ./configure --help
...
  --enable-bypass         enable glibc bypass (UKL_BP) [default=no]
  --enable-same-stack     enable same stack (CONFIG_UKL_SAME_STACK)
                          [default=no]
  --enable-use-ret        use ret instead of iret (CONFIG_UKL_USE_RET)
                          [default=no]
  --enable-use-ist-pf     use IST for PF instead of DF (CONFIG_UKL_USE_IST_PF)
                          [default=no]
  --enable-afterspace     enable afterspace (CONFIG_UKL_CREATE_AFTERSPACE)
                          [default=no]
```

## Building into a separate build directory

If you want to build different configurations of UKL from the same
source tree, you can do this by creating separate build directories,
eg:

```
mkdir build-hello
pushd build-hello
../configure --with-program=hello
make -j`nproc`
popd

mkdir build-redis
pushd build-redis
../configure --with-program=redis
make -j`nproc`
popd
```

## Building your own program

We would strongly recommend looking at the example hello world program
in the `hello/` subdirectory.

1. You need to build it (not link) with two flags: `-mno-red-zone -mcmodel=kernel`
2. Then you need to do a partial link with the required libraries, glibc, libgcc etc.
3. Your partially linked application binary should be named UKL.a and needs to be copied to the top build directory for the final kernel link stage.
