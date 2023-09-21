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
char replacements[128] = {0};
replacements['a'] = replacements['A'] = '4';
replacements['e'] = replacements['E'] = '3';
replacements['o'] = replacements['O'] = '0';
replacements['t'] = replacements['T'] = '7';
replacements['l'] = replacements['L'] = '1';
while (*p)
{
char replace = replacements[(int)*p];
if (replace)
{
*p = replace;
}
p++;
}
return (str);
}
