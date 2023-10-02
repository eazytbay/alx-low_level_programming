#include "main.h"
/**
 * _memcpy - A function that copies memorry area
 * @src: represents the bytesfrom the memory area
 * @dest: represents the memory area
 * @n: represents the function copies
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x = 0;
while (x < n)
{
dest[x] = src[x];
x++;
}
return (dest);
}
