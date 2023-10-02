#include "main.h"
/**
 * _memmset - A function that fills a memory block
 * @b: the value to be entered
 * @s: memory to be filled
 * @n: the number of bytes being changed
 * Return: address of memory to be filled
 */
char *_memset(char *s, char b, unsigned int n)
{
char *x = s;
char *y = s + n;
while (s < y)
{
*s = b;
s++;
}
return (x);
}


