#include <string.h>
#include <unistd.h>
#include <sys/mman.h>

#include "xelf-edit.h"

/*
 * reads a segment header from the elf file into phdr
 */

#include <elf.h>

#define EF_REL ".rel"
#define EF_IS_RELA(shdr) strncmp(EF_REL,shdr->sh_name,strlen(EF_REL))
#define EF_ADDR_OF(offset) &((char*)(efile->ehdr))[offset]

typedef struct {
	Elf64_Ehdr *ehdr;
	Elf64_Shdr *sections;
	Elf64_Phdr *segments;
	char *strtab;
	Elf64_Rela **rels;	
} Elf_File;

int xelf_load(Elf_File *efile, int fd){
	int size, n_rel;
	char *mem;
	Elf64_Ehdr *ehdr;

	size = lseek(fd,0,SEEK_END); lseek(fd,0,SEEK_SET);
	efile->ehdr = mmap(NULL,size,PROT_READ|PROT_WRITE,MAP_SHARED,fd,0);
	ehdr = efile->ehdr;
	
	efile->segments = (Elf64_Phdr*) ADDR_OF(ehdr->e_phoff);
	efile->sections = (Elf64_Shdr*) ADDR_OF(ehdr->e_shoff);
	efile->strtab = (char*) ADDR_OF(efile->sections[ehdr->e_shstrndx].sh_offset);
	
	n_rel = get_n_rel(efile);
	// each element of efile->rels points to the relocation section of 
	efile->rels = (Elf64_Rela**) malloc(sizeof(void*)*n_rel);
	for (Elf64_Shdr shdr = efile->sections, Elf64_Rela **rel = efile->rels; rel < &efile->rels[n]; shdr++ ){
		if (EF_IS_RELA(shdr))
			*rel++=EF_ADDR_OF(shdr->sh_offset);	
	}
}

/*
 * get the string name of a section
 */
char *sh_name(Elf64_Shdr *shdr,Elf_File *efile){
	return &efile->strtab[shdr->sh_name];
}

/*
 * get a section based on it's name
 */
Elf64_Shdr *get_section(char *name, Elf_File *efile){
	for (int i = 0; i<efile->ehdr->e_shnum; i++){
		if (!strcmp(sh_name(&efile->sections[i],efile),name))
			return &efile->sections[i];
	}
	return NULL;
}

/*
 * get number of relocation sections
 */
int get_n_rel(Elf_File *efile){
	int n = 0;
	for (int i = 0; i < efile->ehdr->e_shnum; i++){
		if (EF_IS_RELA(&efile->sections[i]))
			n++;
	}
	return n;
}
