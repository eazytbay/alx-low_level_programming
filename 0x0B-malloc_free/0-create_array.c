#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - A function that creates an array of chars and initializes
 * it with a specific char
 * @c: The charcter whose array is to be created
 * @size: size of array
 * Return: Pointer to array NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
unsigned int x;
char *alph;
if (size == 0)
{
return (NULL);
}
alph = (char *)malloc(size * sizeof(char));
if (alph == NULL)
{
return (NULL);
}
x = 0;
while (x < size)
{
alph[x] = c;
x++;
}
return (alph);
}
