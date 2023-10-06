#include "main.h"
#include <stdlib.h>
/**
 * array_range - A function that creates an array of integers
 * @min: the minimum value of integer
 * @max: the maximum value of integer
 * Return: the pointer to the newly created array, NULL on error
 */
int *array_range(int min, int max)
{
int x;
int *array;
if (min > max)
{
return (NULL);
}
array = (int *)malloc(sizeof(int) * (max - min + 1));
if (array != NULL)
{
for (x = 0; min <= max; x++, min++)
{
array[x] = min;
}
}
return (array);
}
