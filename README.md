# A unikernel based on Linux
https://next.redhat.com/2018/11/14/ukl-a-unikernel-based-on-linux/

An example of Linux unikernel: TCP echo server 

### Download
UKL requires other Git repos as well. Follow the directions below to download and build them.

1. This Makefile assumes that you have a main directory in which you have three further sub directories. Follow the commands below to get the correct directory layout. (This will not be necessary as we update the Makefile)  
```
    mkdir unikernel
    cd unikernel
    git clone git@github.com:razaaliraza/linux.git
    git clone git@github.com:razaaliraza/ukl.git
    git clone git@github.com:razaaliraza/min-initrd.git
```
2. Build Linux  
**Note: This will fail at the very end (linking step). Thats ok.**
```
    cd ../linux
    make olddefconfig
    make -j
```
3. Build usercode
```
    cd ../ukl
    make tcptest
```
This step will build tcp code and link everything together in a single bzImage

4. Run UKL
```
    make run
```
5. From a separate terminal, run telnet
```
    telnet 127.0.0.1 5555
```
