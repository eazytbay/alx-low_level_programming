#include "search_algos.h"

/**
  * advanced_binary_recursive - This is a function that searches recursively
  * for a value in a sorted array of integers using binary search.
  * @array: ptr to the first element of the [sub]array to search.
  * @left: starting index of the [sub]array to search.
  * @right: ending index of the [sub]array to search.
  * @value: The value to search for.
  *
  * Return: the index where the value is located, or -1
  * if the value is not present.
  *
  */

int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t x;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (x = left; x < right; x++)
		printf("%d, ", array[x]);
	printf("%d\n", array[x]);

	x = left + (right - left) / 2;
	if (array[x] == value && (x == left || array[x - 1] != value))
		return (x);
	if (array[x] >= value)
		return (advanced_binary_recursive(array, left, x, value));
	return (advanced_binary_recursive(array, x + 1, right, value));
}

/**
  * advanced_binary - This function searches for a value in a sorted
  * array of integers using advanced binary search.
  * @array: pointer to the first element of the array to search.
  * @size: no. of elements in the array.
  * @value: the value to search for.
  *
  * Return: the first index where the value is located. or -1
  *	if the value is not present or the array is NULL.
  */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
