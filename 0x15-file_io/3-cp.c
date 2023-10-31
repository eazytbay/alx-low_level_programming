#include "main.h"
#include <error.h>
#include <stdio.h>
#define BUFF_SIZE 1024
/**
 * exit_error_98 - Looks into error 98
 * @first_dest: whats being checked
 * @buffer: simply the buffer
 * @argv: command line argument
 */
void exit_error_98(int first_dest, char *buffer, char *argv)
{
if (first_dest < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
free(buffer);
exit(98);
}
}
/**
 * exit_error_99 - Looks into error 99
 * @first_dest: whats being checked
 * @buffer: simply the buffer
 * @argv: command line argument
 */
void exit_error_99(int first_dest, char *buffer, char *argv)
{
if (first_dest < 0)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
free(buffer);
exit(99);
}
}
/**
 * exit_error_100 - Looks into error 100
 * @first_dest: whats being checked
 * @buffer: simply the buffer
 */
void exit_error_100(int first_dest, char *buffer)
{
if (first_dest < 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", first_dest);
free(buffer);
exit(100);
}
}
/**
 * main - A program that copies the content of one file to another.
 * @argc: arguments number.
 * @argv: command line arguments
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
int first_dest, second_dest, rs1, rs2;
char *buffer;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage cp file_from file_to\n");
exit(97);
}
buffer = malloc(sizeof(char) * BUFF_SIZE);
if (!buffer)
return (0);
second_dest = open(argv[1], O_RDONLY);
exit_error_98(second_dest, buffer, argv[1]);
first_dest = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
exit_error_99(first_dest, buffer, argv[2]);
do {
rs1 = read(second_dest, buffer, BUFF_SIZE);
if (rs1 == 0)
break;
exit_error_98(rs1, buffer, argv[1]);
rs2 = write(first_dest, buffer, rs1);
exit_error_99(rs2, buffer, argv[2]);
} while (rs2 >= BUFF_SIZE);
rs1 = close(first_dest);
exit_error_100(rs1, buffer);
rs1 = close(second_dest);
exit_error_100(rs1, buffer);
free(buffer);
return (0);
}
