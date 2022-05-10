.PHONY: redis

PARALLEL= -j$(shell nproc)

UKL_FLAGS=-ggdb -mno-red-zone -mcmodel=kernel

redis: cloneRepos
	./build_ukl.sh 0 redis

cloneRepos:
	make min-initrd-dir
	make all -C min-initrd/
	make linux-dir

#-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------

#LINUX
linux-dir:
	git clone --branch ukl-main-5.14-nolib git@github.com:unikernelLinux/linux.git

linux-clean:
	make distclean -C linux/
	cp saveconfig linux/.config
	make -C linux menuconfig
	cat linux/.config |& tee -a log_build

linux-build:
	- rm -rf linux/vmlinux
	make -C linux LLVM=1 LLVM_IAS=1 $(PARALLEL) |& tee out

linux-copy:
	cp linux/arch/x86/boot/bzImage /var/lib/tftpboot/ukl/

#-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------

#MIN_INITRD
min-initrd-dir:
	git clone git@github.com:unikernelLinux/min-initrd.git

#-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------

#RUN
run:
	make runU -C min-initrd

debug:
	make debugU -C min-initrd

#-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------

#MOUNT/UNMOUNT
mnt:
	mount min-initrd/min-initrd.d/root mntpt

umnt:
	umount mntpt
