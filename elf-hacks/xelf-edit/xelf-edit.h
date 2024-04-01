#include <elf.h>

typedef struct {
	Elf64_Ehdr *ehdr;
	Elf64_Shdr *sections;
	Elf64_Phdr *segments;
	char *strtab;
} Elf_File;

int xelf_load(Elf_File *efile, int fd);
char *sh_name(Elf64_Shdr *shdr, Elf_File *efile);
Elf64_Shdr *get_section(char *name, Elf_File *efile);
