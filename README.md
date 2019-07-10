# A unikernel based on Linux

[HotOS paper](https://razaaliraza.github.io/papers/UKL.pdf)   
[Blog post](https://next.redhat.com/2018/11/14/ukl-a-unikernel-based-on-linux/)

## An example of Linux unikernel: TCP echo server  ##

Assuming you are running Fedora, you need the following packages. Run the following command to install them.
```
    sudo dnf install qemu supermin git elfutils-devel kernel-devel openssl-devel
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
3. Build usercode
```
    cd ../ukl
    make tcptest
```
This step will build tcp code and link everything together in a single bzImage

4. Run UKL. This step might take a while because supermin has to create an initrd. 
```
    make run
```
 If this step fails because you dont have KVM enabled on your machine, go to min-initrd directory and open Makefile. Delete enable-kvm flag from run command.  
   
 If you get messages about module version mismatch when the kernel boots up, you might want to look at this [Supermin](http://libguestfs.org/supermin.1.html#USING-A-CUSTOM-KERNEL-AND-KERNEL-MODULES) page.

5. From a separate terminal, run telnet
```
    telnet 127.0.0.1 5555
```
