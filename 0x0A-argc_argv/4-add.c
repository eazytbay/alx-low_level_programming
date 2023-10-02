#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
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
int num = atoi(argv[a]);
if (argc < 2)
{
printf("0\n");
return (0);
}
while (a < argc)
{
printf("processing argument: %s\n", argv[a]);
while (argv[a][b] != '\0')
{
printf("checking character: %c\n", argv[a][b]);
if (!isdigit(argv[a][b]))
{
printf("Error\n");
return (1);
}
b++;
}
if (num > 0)
{
sum += num;
}
a++;
}
printf("%d\n", sum);
return (0);
}
