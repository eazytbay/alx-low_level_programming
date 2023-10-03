#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - A function that returns a pointer to newly allocated space
 * in memory
 * @str: the string
 * Return: function to the pointer on success and NULL on error
 */
char *_strdup(char *str)
{
int x;
int y;
char *cpy;
if (str == NULL)
{
return (NULL);
}
y = 0;
while (str[y] != '\0')
{
y++;
}
cpy = (char *)malloc((y + 1) * sizeof(char));
if (cpy == NULL)
{
return (NULL);
}
x = 0;
while (str[x] != '\0')
{
cpy[x] = str[x];
x++;
}
cpy[x] = '\0';
return (cpy);
}
