#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void pirnt_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void pirnt_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - checks if a file is an Elf file
 * @e_ident: a pointer to an array containing ELF magic numbers
 *
 * Description: if the file is not an elf file exits code 98
 */

void check_elf(unsigned char *e_ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (e_ident[index] != 127 && e_ident[index] != 'E' && e_ident[index] != 'L' && e_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an Elf file\n");
			exit(98);
		}
	}
}
