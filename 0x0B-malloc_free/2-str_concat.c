#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * str_concat - A function that concatenates two strings
 * @s1: The first string to be concatenated
 * @s2: The second string to be concatenated
 * Return: NULL on failure 0 on success
 */
char *str_concat(char *s1, char *s2)
{
int length_s1;
int length_s2;
int x;
int y;
char *rslt;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
length_s1 = 0;
length_s2 = 0;
while (s1[length_s1] != '\0')
{
length_s1++;
}
while (s2[length_s2] != '\0')
{
length_s2++;
}
rslt = (char *)malloc((length_s1 + length_s2 + 1) * sizeof(char));
if (rslt == NULL)
{
return (NULL);
}
x = 0;
while (s1[x] != '\0')
{
rslt[x] = s1[x];
x++;
}
y = 0;
while (s2[y] != '\0')
{
rslt[x + y] = s2[y];
y++;
}
rslt[x + y] = '\0';
return (rslt);
}
