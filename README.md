# A unikernel based on Linux

## Publication ##
[Unikernels: The Next Stage of Linux’s Dominance](https://razaaliraza.github.io/papers/UKL.pdf) 
Bibtex entry
```
@inproceedings{raza2019unikernels,
  title={Unikernels: The Next Stage of Linux's Dominance},
  author={Raza, Ali and Sohal, Parul and Cadden, James and Appavoo, Jonathan and Drepper, Ulrich and Jones, Richard and Krieger, Orran and Mancuso, Renato and Woodman, Larry},
  booktitle={Proceedings of the Workshop on Hot Topics in Operating Systems},
  pages={7--13},
  year={2019},
  organization={ACM}
}
```

## An example of Linux unikernel: TCP echo server  ##

Assuming you are running Fedora, you need the following packages. Run the following command to install them.
```
    sudo dnf install bc elfutils-devel git hostname kernel-devel openssl-devel qemu supermin
    sudo dnf groupinstall "C Development Tools and Libraries"
```

UKL requires other Git repos as well. Follow the directions below to download and build them.

1. This Makefile assumes that you have a main directory in which you have three further sub directories. Follow the commands below to get the correct directory layout. (This will not be necessary as we update the Makefile)  
```
    mkdir unikernel
    cd unikernel
    git clone https://github.com/razaaliraza/linux.git
    git clone https://github.com/razaaliraza/ukl.git
    git clone https://github.com/razaaliraza/min-initrd.git
```
2. Build Linux  
Note: This will fail at the very end (linking step). Thats ok.
```
    cd linux
    make olddefconfig
    make -j `nproc`
```
3. Build the application
..1. For single threaded TCP echo server, run
```
    cd ../ukl
    make singlethreaded-tcp-server
```
..2. For multi threaded TCP echo server, run
```
    cd ../ukl
    make multithreaded-tcp-server
```
..3. To just see multiple threads printing, run
```
    cd ../ukl
    make multithreaded-printing
```
This step will build application code and link everything together in a single bzImage

4. Run UKL. This step might take a while because supermin has to create an initrd. 
```
    make run
```
 If this step fails because you dont have KVM enabled on your machine, go to min-initrd directory and open Makefile. Delete enable-kvm flag from run command.  
   
 If you get messages about module version mismatch when the kernel boots up, you might want to look at this [Supermin](http://libguestfs.org/supermin.1.html#USING-A-CUSTOM-KERNEL-AND-KERNEL-MODULES) page.

5. To test
..1. From a separate terminal, run telnet
```
    telnet 127.0.0.1 5555
```
..2. To test different threads of the multithreaded TCP server, you can build and run the client
```
    make client
    ./client 127.0.0.1
```

## Feedback and Suggestions ##
This is a work under development. If something does not work or breaks, either open an issue, or if you have an easy fix, create a pull request. Or please let me know and I will try to fix it.

If you have any comments suggestions, email me! aliraza@bu.edu
