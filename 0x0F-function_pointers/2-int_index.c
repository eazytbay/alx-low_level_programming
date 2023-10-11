#include "function_pointers.h"
/**
 * int_index - A function that searches for an integer
 * @array: The array
 * @size: The number of elements in the array
 * @cmp: function's pointer
 * Return: if no element matches, return -1, if size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int x = 0;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
while (x < size)
{
if (cmp(array[x]) != 0)
{
return (x);
}
x++;
}
return (-1);
}
