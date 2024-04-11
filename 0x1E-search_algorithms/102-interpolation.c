#include "search_algos.h"

/**
  * interpolation_search - This function searches for a value in a sorted array
  * of integers using the Interpolation search algorithm.
  * @array: points to the first element of the array to search.
  * @size: no. of elements in the array.
  * @value: the value to search for.
  *
  * Return: the first index where the value is located, or -1
  *	if the value is not present or the array is NULL.
  *
  * Description: Prints a value every time it is compared in the array..
  */

int interpolation_search(int *array, size_t size, int value)
{
	size_t x, y, z;

	if (array == NULL)
		return (-1);

	for (y = 0, z = size - 1; z >= y;)
	{
		x = y + (((double)(z - y) / (array[z] - array[y])) * (value - array[y]));
		if (x < size)
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", x);
			break;
		}

		if (array[x] == value)
			return (x);
		if (array[x] > value)
			z = x - 1;
		else
			y = x + 1;
	}

	return (-1);
}
