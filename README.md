# UNIKERNEL LINUX

To build your application with UKL

1. You just need to build it (not link) with two flags, i.e., -mno-red-zone -mcmodel=kernel.
2. Then you need to do a partial link with the required libraries e.g., glibc, libgcc etc. (take a look at one of the three example projects' Makefile on how to do this)
3. Your partially linked application binary should be named UKL.a and needs to be copied in this base directory for the final kernel link stage.
4. The build_ukl.sh script automates this, all you need is to create a Makefile in your directory to create the above mentioned UKL.a.
5. new_lebench, redis and gapbs are example projects, see their Makefiles
