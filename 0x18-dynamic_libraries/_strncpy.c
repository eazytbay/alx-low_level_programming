#include "main.h"

/**
 * _strncpy - A function that copies a string
 * @dest: destination string pointer.
 * @src: source string pointer
 * @nb: number of bytes to be used
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int nb)
{
int bytes_count;
for (bytes_count = 0; bytes_count < nb && src[bytes_count] != '\0';
bytes_count++)
dest[bytes_count] = src[bytes_count];
for (; bytes_count < nb; bytes_count++)
dest[bytes_count] = '\0';
return (dest);
}
