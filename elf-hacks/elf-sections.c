#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "xelf-edit.h"


int main(int argc, char **argv) {
	Elf_File efile;
	int fd;
	long hi,lo,addr;

	fd = open(argv[1],O_RDWR);
	if (fd<0)
		return -1;
	
	xelf_load(&efile,fd);	
	
	for (int i = 0; i<efile.ehdr->e_phnum; i++){
		lo = efile.segments[i].p_vaddr;
		hi = lo + efile.segments[i].p_memsz;
		printf("Sections in segment %d:\n",i);
		for (int j = 0; j < efile.ehdr->e_shnum; j++){
			addr = efile.sections[j].sh_addr;
			if (lo <= addr && addr <= hi){
				printf("\t%s\n",sh_name(&efile.sections[j],&efile));
			}
		}
	}
	
	close(fd);
	return 0;
}
