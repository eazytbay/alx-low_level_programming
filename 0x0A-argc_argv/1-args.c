#include "main.h"
#include <stdio.h>
/**
 * main - A program that prints the number of arguments passed to it
 * @argv: argument array
 * @argc: argument number
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int x = 0;
int y = 1;
(void)argv;
while (y < argc)
{
x++;
y++;
}
printf("%d\n", x);
return (0);
}
