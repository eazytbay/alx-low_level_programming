#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - A program that adds postive numbers
 * @argv: argument array
 * @argc: argument number
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int sum = 0;
int a = 1;
int b = 0;
int num = _atoi(argv[a]);
if (argc < 2)
{
printf("0\n");
return (0);
}
while (a < argc)
{
while (argv[a][b] != '\0')
{
if (!isdigit(argv[a][b]))
{
printf("Error\n");
b++;
}
return (1);
}
}
{
if (num > 0)
{
sum += num;
}
a++;
}
printf("%d\n", sum);
return (0);
}
