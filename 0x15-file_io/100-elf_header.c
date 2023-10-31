#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void check_elf_header(Elf64_Ehdr *header);
void display_elf_info(Elf64_Ehdr *header);
void close_file(int fd);
void check_elf_header(Elf64_Ehdr *header)
{
if (header->e_ident[EI_MAG0] != ELFMAG0 ||
header->e_ident[EI_MAG1] != ELFMAG1 ||
header->e_ident[EI_MAG2] != ELFMAG2 ||
header->e_ident[EI_MAG3] != ELFMAG3)
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98);
}
}
void display_elf_info(Elf64_Ehdr *header)
{
printf("ELF Header:\n");
printf("  Magic:   ");
for (int i = 0; i < EI_NIDENT; i++)
{
printf("%02x", header->e_ident[i]);
if (i < EI_NIDENT - 1)
{
printf(" ");
}
}
printf("\n");
printf("  Class:                             ");
if (header->e_ident[EI_CLASS] == ELFCLASS32)
{
printf("ELF32\n");
}
else if (header->e_ident[EI_CLASS] == ELFCLASS64)
{
printf("ELF64\n");
}
else
{
printf("<unknown: %x>\n", header->e_ident[EI_CLASS]);
}
printf("  Data:                              ");
if (header->e_ident[EI_DATA] == ELFDATA2LSB)
{
printf("2's complement, little endian\n");
}
else if (header->e_ident[EI_DATA] == ELFDATA2MSB)
{
printf("2's complement, big endian\n");
}
else
{
printf("<unknown: %x>\n", header->e_ident[EI_DATA]);
}
printf("  Version:                           %d", header->e_ident[EI_VERSION]);
if (header->e_ident[EI_VERSION] == EV_CURRENT)
{
printf(" (current)\n");
}
else
{
printf("\n");
}
printf("  OS/ABI:                            ");
switch (header->e_ident[EI_OSABI])
{
case ELFOSABI_NONE:
printf("UNIX - System V\n");
break;
case ELFOSABI_HPUX:
printf("UNIX - HP-UX\n");
break;
case ELFOSABI_NETBSD:
printf("UNIX - NetBSD\n");
break;
case ELFOSABI_LINUX:
printf("UNIX - Linux\n");
break;
case ELFOSABI_SOLARIS:
printf("UNIX - Solaris\n");
break;
case ELFOSABI_IRIX:
printf("UNIX - IRIX\n");
break;
case ELFOSABI_FREEBSD:
printf("UNIX - FreeBSD\n");
break;
case ELFOSABI_TRU64:
printf("UNIX - TRU64\n");
break;
case ELFOSABI_ARM:
printf("ARM\n");
break;
case ELFOSABI_STANDALONE:
printf("Standalone App\n");
break;
default:
printf("<unknown: %x>\n", header->e_ident[EI_OSABI]);
}
printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
printf("  Type:                              ");
if (header->e_type == ET_NONE)
{
printf("NONE (None)\n");
}
else if (header->e_type == ET_REL)
{
printf("REL (Relocatable file)\n");
}
else if (header->e_type == ET_EXEC)
{
printf("EXEC (Executable file)\n");
}
else if (header->e_type == ET_DYN)
{
printf("DYN (Shared object file)\n");
}
else if (header->e_type == ET_CORE)
{
printf("CORE (Core file)\n");
}
else
{
printf("<unknown: %x>\n", header->e_type);
}
printf("  Entry point address:               %#lx\n", header->e_entry);
}
void close_file(int fd)
{
if (close(fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(98);
}
}
int main(int argc, char *argv[])
{
if (argc != 2) {
dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
exit(98);
}
int fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}
Elf64_Ehdr header;
ssize_t n = read(fd, &header, sizeof(header));
if (n != sizeof(header))
{
close_file(fd);
dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
exit(98);
}
check_elf_header(&header);
display_elf_info(&header);
close_file(fd);
return (0);
}

