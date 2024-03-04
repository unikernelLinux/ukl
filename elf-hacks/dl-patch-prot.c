#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <stdio.h>

#include "xelf-edit.h"


int main(int argc, char **argv) {
	int fd;
	Elf_File efile;
	
	if (argc != 2)
		return -1;

	fd = open(argv[1],O_RDWR);
	if (fd < 0)
		return -1;

	xelf_load(&efile,fd);
	efile.segments[3].p_flags |= PF_X;
	close(fd);

	return 0;
}
