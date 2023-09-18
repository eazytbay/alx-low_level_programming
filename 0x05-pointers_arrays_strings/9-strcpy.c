#include "main.h"
/**
 * _strcpy - A function that copies the string pointed to by scr
 * @dest: char type of string
 * @src: also a char type string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int a = -1;
do {
a++;
dest[a] = src[a];
} while (src[a] != '\0');
return (dest);
}

