#include "main.h"
/**
 * leet - A function that encodes a string into 1337
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @str: the string to be encoded
 * Return: pointer to p.
 */
char *leet(char *str)
{
char *p = str;
while (*p)
{
char replace = 0;
if (*p == 'a' || *p == 'A')
{
replace = '4';
}
else if (*p == 'e' || *p == 'E')
{
replace = '3';
}
else if (*p == 'o' || *p == 'O')
{
replace = '0';
}
else if (*p == 't' || *p == 'T')
{
replace = '7';
}
else if (*p == 'l' || *p == 'L')
{
replace = '1';
}
if (replace)
{
*p = replace;
}
p++;
}
return (str);
}

