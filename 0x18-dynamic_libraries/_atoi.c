#include "main.h"
/**
 * _atoi - A function that converts a string to an integer
 * @c: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *c)
{
int i, j, n, length, f, digit;
i = 0;
j = 0;
n = 0;
length = 0;
f = 0;
digit = 0;
while (c[length] != '\0')
length++;
while (i < length && f == 0)
{
if (c[i] == '-')
++j;
if (c[i] >= '0' && c[i] <= '9')
{
digit = c[i] - '0';
if (j % 2)
digit = -digit;
n = n * 10 + digit;
f = 1;
if (c[i + 1] < '0' || c[i + 1] > '9')
break;
f = 0;
}
i++;
}
if (f == 0)
return (0);
return (n);
}
