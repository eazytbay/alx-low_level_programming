#include "main.h"
/**
 * _strspn - A function the gets the length of a prefix substring
 * @s: the string being searched
 * @accept: the prefix being measured
 * Return: the number of bytes in s
 * consisting of on the bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int x = 0;
int y;
while (*s)
{
for (y = 0; accept[y]; y++)
{
if (*s == accept[y])
{
x++;
break;
}
else if (accept[y + 1] == '\0')
return (x);
}
s++;
}
return (x);
}
