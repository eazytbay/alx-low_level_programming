#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * argstostr - A function that concatenates all the arguments
 * @ac: the first argument
 * @av: the second argument
 * Return: pointer to a new string NULL on error
 */
char *argstostr(int ac, char **av)
{
int x = 0, y = 0, z = 0;
char *arg;
int add_length = 0;
char *rslt;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (x = 0; x < ac; x++)
{
arg = av[x];
while (arg[y] != '\0')
{
add_length++;
y++;
}
add_length++;
}
rslt = (char *)malloc(add_length + 1);
if (rslt == NULL)
{
return (NULL);
}
for (x = 0; x < ac; x++)
{
arg = av[x];
while (arg[y] != '\0')
{
rslt[z] = arg[y];
y++;
z++;
}
rslt[z] = '\n';
z++;
}
rslt[z] = '\0';
return (rslt);
}
