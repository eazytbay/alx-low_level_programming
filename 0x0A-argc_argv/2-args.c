#include "main.h"
#include <stdio.h>
/**
 * main - A program that prints all arguments passed to it
 * @argv: argument array
 * @argc: argument number
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int x = 0;
while (x < argc)
{
printf("%s\n", argv[x]);
x++;
}
return (0);
}
