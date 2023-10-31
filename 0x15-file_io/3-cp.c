#include "main.h"
#include <stdio.h>

/**
 * check_file_errors - A function that Checks and handle file open errors.
 * @file_from: Source file descriptor.
 * @dest_fd: Destination file descriptor.
 * @argv: Command-line arguments.
 * Return: absolutely nothing
 */
void check_file_errors(int file_from, int file_to, char *argv[])
{
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
exit(98);
}
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
exit(99);
}
}
/**
 * main - A program that copies the content of one file to another.
 * @argc: arguments number.
 * @argv: command line arguments
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
int file_from, file_to, close_err;
ssize_t num_chars, num_written;
char buffer[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
check_file_errors(file_from, file_to, argv);
for (num_chars = read(file_from, buffer, 1024);
num_chars > 0;
num_chars = read(file_from, buffer, 1024))
{
if (num_chars == -1)
check_file_errors(-1, 0, argv);
num_written = write(file_to, buffer, num_chars);
if (num_written == -1)
check_file_errors(0, -1, argv);
}
close_err = close(file_from);
if (close_err == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}
close_err = close(file_to);
if (close_err == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
exit(100);
}
return (0);
}
