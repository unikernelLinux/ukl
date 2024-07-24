FROM fedora:36

RUN dnf update -y
RUN dnf -y install sed elfutils-libelf-devel bc hostname perl dropbear \
        msr-tools wget dnf-plugins-core bzip2 curl xz cpio shadow-utils procps-ng iproute \
	pciutils net-tools openssh-server
