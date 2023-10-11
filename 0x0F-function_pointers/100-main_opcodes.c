#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that is capable of printing its own opcodes
 * @argc: argument number
 * @argv: array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int b, x;
char *ptr;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
b = atoi(argv[1]);
if (b < 0)
{
printf("Error\n");
exit(2);
}
ptr = (char *)main;
for (x = 0; x < b; x++)
{
if (x == b - 1)
{
printf("%02hhx\n", ptr[x]);
break;
}
printf("%02hhx ", ptr[x]);
}
return (0);
}
