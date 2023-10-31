#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * exit_with_error - A function that Checks and handle file open errors.
 * @exit_code: An integer representing the exit code for the program when an
 * error occurs. It determines the exit status of the program
 * @message: A string that contains an error message to be displayed
 * @file: A string representing the name of the file associated with the error
 * Return: absolutely nothing
 */
void exit_with_error(int exit_code, const char *message, const char *file)
{
dprintf(STDERR_FILENO, message, file);
exit(exit_code);
}
/**
 * main - A program that copies the content of one file to another.
 * @argc: arguments number.
 * @argv: command line arguments
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
const char *file_from = argv[1], *file_to = argv[2];
int fd_from, fd_to;
ssize_t n;
char buffer[1024];
if (argc != 3)
{
exit_with_error(97, "Usage: cp file_from file_to\n", "");
}
fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
{
exit_with_error(98, "Error: Can't read from file %s\n", file_from);
}
fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
exit_with_error(99, "Error: Can't write to %s\n", file_to);
}
while ((n = read(fd_from, buffer, sizeof(buffer)) > 0))
{
if (write(fd_to, buffer, n) != n)
{
exit_with_error(99, "Error: Can't write to %s\n", file_to);
}
}
if (n == -1)
{
exit_with_error(98, "Error: Can't read from file %s\n", file_from);
}
if (close(fd_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
exit(100);
}
if (close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
exit(100);
}
return (0);
}
