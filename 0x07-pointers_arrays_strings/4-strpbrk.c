#include "main.h"
/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * @accept: the set of bytes being searched for
 * @s: the string being searched for
 * Return: a pointer to the matched byte if a set is matched
 * NULL if not set is matched
 */
char *_strpbrk(char *s, char *accept)
{
int a;
while (*s)
{
for (a = 0; accept[a]; a++)
{
if (*s == accept[a])
return (s);
}
s++;
}
return ('\0');
}
