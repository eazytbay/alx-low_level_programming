#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @b: the character to be copied
 * @s: the memory area to be filled
 * @n: the frequency b is expected to be copied
 * Return: the pointer to memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;
for (x = 0; x < n; x++)
{
s[x] = b;
}
return (s);
}
