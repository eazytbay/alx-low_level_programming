#include "function_pointers.h"
/**
 * array_iterator - A function that executes a function
 * @array: the array
 * @size: size of the array
 * @action: function pointer
 * Return: Does not return anything
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t x;
if (array == NULL || action == NULL)
return;
for (x = 0; x < size; x++)
{
action(array[x]);
}
}
