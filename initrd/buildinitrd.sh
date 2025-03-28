#!/bin/bash
# This file based in part on the mkinitramfs script for the LFS LiveCD
# written by Alexander E. Patrakov and Jeremy Huntwork.

copy()
{
  local file

  if [ "$2" = "lib" ]; then
    file=$(PATH=/usr/lib:/usr/lib64 type -p $1)
  else
    file=$(type -p $1)
  fi

  if [ -n "$file" ] ; then
    cp $file $WDIR/$file
  else
    echo "Missing required file: $1 for directory $2"
    rm -rf $WDIR
    exit 1
  fi
}

printf "Creating initramfs structure ... "

cp ./perf /usr/sbin/

binfiles="cat ls mkdir mknod mount bash top touch awk less"
binfiles="$binfiles umount sed sleep ln rm uname grep nproc"
binfiles="$binfiles readlink basename chmod ps pidof pgrep pkill"
binfiles="$binfiles cut netstat"

sbinfiles="halt dropbear ip rdmsr wrmsr lspci perf ethtool"

unsorted=$(mktemp /tmp/unsorted.XXXXXXXXXX)

INITIN=./init

# Create a temporary working directory
WDIR=$1

# Create base directory structure
mkdir -p $WDIR/{dev,etc/dropbear,run,sys,proc,usr/{bin,lib,lib64,sbin},var/run}
ln -s usr/bin  $WDIR/bin
ln -s usr/lib  $WDIR/lib
ln -s usr/sbin $WDIR/sbin
ln -s lib      $WDIR/lib64

# Create necessary device nodes
mknod -m 640 $WDIR/dev/tty0    c 4 0
mknod -m 640 $WDIR/dev/tty1    c 4 1
mknod -m 640 $WDIR/dev/tty     c 5 0
mknod -m 640 $WDIR/dev/console c 5 1
mknod -m 644 $WDIR/dev/ptmx    c 5 2
mknod -m 664 $WDIR/dev/null    c 1 3
mknod -m 664 $WDIR/dev/zero    c 1 5
mknod -m 664 $WDIR/dev/random  c 1 8
mknod -m 664 $WDIR/dev/urandom c 1 9
mknod -m 664 $WDIR/dev/loop0   b 7 0
mknod -m 664 $WDIR/dev/loop1   b 7 1
mkdir -m 755 $WDIR/dev/pts
mknod -m 600 $WDIR/dev/pts/0   c 136 0
mknod -m 000 $WDIR/dev/pts/ptmx c 5 2


# Install the init file
install -m0755 $INITIN $WDIR/init

# At somepoint dropbear stopped supporting scp directly and now requires access
# to an sftp server so we have to pull in enough of openssh to make that work
mkdir -p $WDIR/usr/libexec/openssh/
ldd /usr/libexec/openssh/sftp-server | sed "s/\t//" | cut -d " " -f1 >> $unsorted
copy /usr/libexec/openssh/sftp-server usr/libexec/openssh/

# Install basic binaries
for f in $binfiles ; do
  ldd /usr/bin/$f | sed "s/\t//" | cut -d " " -f1 >> $unsorted
  copy /usr/bin/$f bin
done

ln -s bash $WDIR/usr/bin/sh

for f in $sbinfiles ; do
  ldd /usr/sbin/$f | sed "s/\t//" | cut -d " " -f1 >> $unsorted
  copy $f sbin
done

# Install libraries
sort $unsorted | uniq | while read library ; do
# linux-vdso and linux-gate are pseudo libraries and do not correspond to a file
# libsystemd-shared is in /lib/systemd, so it is not found by copy, and
# it is copied below anyway
  if [[ "$library" == linux-vdso.so.1 ]] ||
     [[ "$library" == linux-gate.so.1 ]] ||
     [[ "$library" == libsystemd-shared* ]]; then
    continue
  fi

  copy $library lib
done

mkdir -p $WDIR/usr/share

cp -r /usr/share/terminfo $WDIR/usr/share

conf="bashrc bash_completion.d group hosts passwd profile"
conf="$conf shells shadow sysconfig"
for f in $conf ; do
  cp -r /etc/$f $WDIR/etc/$f
done

if [ -z "$2" -a -s "$2" ] ; then
	cp $2 $WDIR/usr/bin/
fi

if [ -s data.tar.gz ] ; then
	tar xf data.tar.gz -C ${WDIR}
fi

cp -r exp ${WDIR}

rm -f $unsorted

pushd $WDIR
find . | cpio -o -H newc | xz --format=lzma > ../ukl-initrd.cpio.xz
popd

printf "done.\n"
