#include "main.h"
/**
 * _strstr - A function that locates a substring
 * @haystack: the string being searched
 * @needle: the substring being located
 * Return: pointer to the beginning if substring is located
 * NULL if substring is not located
 */
char *_strstr(char *haystack, char *needle)
{
int x;
if (*needle == 0)
return (haystack);
while (*haystack)
{
x = 0;
if (haystack[x] == needle[x])
{
do {
if (needle[x + 1] == '\0')
return (haystack);
x++;
} while (haystack[x] == needle[x]);
}
haystack++;
}
return ('\0');
}
