#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - A function that concatenates two string
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * @n: The number of bytes
 * Return: pointer to newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int length1 = 0;
unsigned int length2 = 0;
unsigned int x, y;
char *rslt;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[length1])
length1++;
while (s2[length2])
length2++;
if (n >= length2)
n = length2;
rslt = (char *)malloc(length1 + n + 1);
if (rslt == NULL)
return (NULL);
for (x = 0; x < length1; x++)
rslt[x] = s1[x];
for (y = 0; y < n; y++, x++)
rslt[x] = s2[y];
rslt[x] = '\0';
return (rslt);
}
