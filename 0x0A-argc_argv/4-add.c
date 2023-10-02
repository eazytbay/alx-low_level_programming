#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * addPositiveNumbers - A function that adds postive numbers
 * @argv: argument array
 * @argc: argument number
 * Return: Always 0
 */
int addPositiveNumbers(int argc, char *argv[])
{
int sum = 0;
int x = 1;
int y = 0;
int num;
if (argc < 2)
{
return (0);
}
while (x < argc)
{
char *arg = argv[x];
while (arg[y] != '\0')
{
if (!isdigit(arg[y]))
{
return (-1);
}
y++;
}
num = atoi(arg);
if (num > 0)
{
sum += num;
}
x++;
}
return (sum);
}
/**
 * main - A program that adds postive numbers
 * @argv: argument array
 * @argc: argument number
 * Return: 1 on error 0 on success
 */
int main(int argc, char *argv[])
{
int result = addPositiveNumbers(argc, argv);
if (result < 0)
{
printf("Error\n");
return (1);
}
printf("%d\n", result);
return (0);
}
