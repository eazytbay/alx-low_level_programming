#include "main.h"
#include <stdio.h>
/**
 * main - A program that prints its name
 * @argv: argument array
 * @argc: argument number
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
if (argc > 0)
{
printf("%s\n", argv[0]);
}
else
{
printf("cannot find the Program's name\n");
}
return (0);
}
