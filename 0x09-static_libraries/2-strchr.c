#include "main.h"
/**
 * _strchr - A function that locates a character in a string
 * @c: The character being located
 * @s: The string being searched
 * Return: a pointer to the first occurence
 * NULL if c is not found
 */
char *_strchr(char *s, char c)
{
int a;
for (a = 0; s[a] >= '\0'; a++)
{
if (s[a] == c)
return (s + a);
}
return ('\0');
}
