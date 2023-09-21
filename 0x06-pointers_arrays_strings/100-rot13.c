#include "main.h"
/**
 * rot13 - A function that encodes a string
 * @str: variable to be encoded
 * Return: str
 */
char *rot13(char *str)
{
char *p = str;
while (*p)
{
char is_upper = (*p >= 'A' && *p <= 'Z');
char is_lower = (*p >= 'a' && *p <= 'z');
if (is_upper || is_lower)
{
char base = (is_upper) ? 'A' : 'a';
*p = (((*p - base) + 13) % 26) + base;
}
p++;
}
return (str);
}
