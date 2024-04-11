#include "search_algos.h"
#include <math.h>

/**
 * jump_search - This is a function that searches for a
 * value in an array of integers that is sorted using the
 * Jump search algorithm.
 * @array: The ptr to the first element of the array to search.
 * @size: no. of elements in the array.
 * @value: the value to search for.
 *
 * Return: the first index where the value is located, or -1 if
 * the value is not present or the array is NULL.
 *
 */

int jump_search(int *array, size_t size, int value)
{
	size_t x, jp, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (x = jp = 0; jp < size && array[jp] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jp, array[jp]);
		x = jp;
		jp += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", x, jp);

	jp = jp < size - 1 ? jp : size - 1;
	for (; x < jp && array[x] < value; x++)
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	printf("Value checked array[%ld] = [%d]\n", x, array[x]);

	return (array[x] == value ? (int)x : -1);
}
