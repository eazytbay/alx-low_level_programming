#include <stdio.h>
/**
 *  linear_search - A function that linearly searches for a
 * value in an array of integers
 * @array: The pointer to the first element of the array to search in
 * @size: size of the array
 * @value: the value to search for in an array
 * Return: value if present or -1 if not present
 *
 */
int linear_search(int *array, size_t size, int value)
{
int x;
if (array == NULL)
return (-1);
for (x = 0; x < (int)size; x++)
{
printf("Value checked array[%d] = [%d]\n", x,  array[x]);
if (array[x] == value)
return (x);
}
return (-1);
}
