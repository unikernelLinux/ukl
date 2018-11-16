# UKL

A unikernel based on Linux.
https://next.redhat.com/2018/11/14/ukl-a-unikernel-based-on-linux/

## To Run

Assuming you are running Fedora.

1. You need the following packages. Run the following command to install them.
	1. QEMU
	2. supermin
	3. git
	4. some kernel development tools
```
    sudo dnf install qemu supermin git elfutils-devel kernel-devel
    sudo dnf groupinstall "C Development Tools and Libraries"
```

2. This Makefile assumes that you have a main directory in which you have three further sub directories. Follow the commands below to get the correct directory layout. (This will not be necessary as we update the Makefile)
```
    mkdir unikernel
    cd unikernel
    git clone git@github.com:torvalds/linux.git
    git clone git@github.com:razaaliraza/ukl.git
    git clone git@github.com:razaaliraza/min-initrd.git
```