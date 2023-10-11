#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - A function that prints opcodes
 * @num_bytes: The number of bytes to print
 * Return: Error is byte is negative
 */
void print_opcodes(int num_bytes)
{
int x;
unsigned char *ptr = (unsigned char *)&print_opcodes;
for (x = 0; x < num_bytes; x++)
{
if (x == num_bytes - 1)
{
printf("%02hhx\n", ptr[x]);
}
else
{
printf("%02hhx ", ptr[x]);
}
}
}
/**
 * main - A program that is capable of printing its own opcodes
 * @argc: argument number
 * @argv: array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
exit(1);
}
int num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
printf("Error\n");
exit(2);
}
print_opcodes(num_bytes);
return (0);
}


