#include "main.h"
#include <stdio.h>
/**
 * _atoi -  A function that converts a string to an integer
 * @s: The string being converted
 * Return: the integer that is being converted
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;
if (*s == '-')
{
sign = -1;
s++;
}
else if (*s == '+')
{
s++;
}
while (*s >= '0' && *s <= '9')
{
result = result * 10 + (*s - '0');
s++;
}
return (result *sign);
}
/**
 * main - A program that multiplies two numbers
 * @argv: argument array
 * @argc: argument number
 * Return: 1 if it does not receive two arguments 0 on success
 */
int main(int argc, char *argv[])
{
int x, y, rslt;
if (argc != 3)
{
printf("Error\n");
return (1);
}
x = _atoi(argv[1]);
y = _atoi(argv[2]);
rslt = x *y;
printf("%d\n", rslt);
return (0);
}
