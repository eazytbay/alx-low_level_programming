#include "main.h"
/**
 * _strncat - A function that concatenates two strings
 * @dest: the destination string pointer
 * @src: source string pointer
 * @nb: number of bytes to be concatenated
 * Return: pointer to destination string
 */
char *_strncat(char *dest, char *src, int nb)
{
int string_length, x;
string_length = 0;
while (dest[string_length] != '\0')
{
string_length++;
}
for (x = 0; x < nb && src[x] != '\0'; x++, string_length++)
{
dest[string_length] = src[x];
}
dest[string_length] = '\0';
return (dest);
}
