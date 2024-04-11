#include <stdio.h>
/**
 * binary_search - A function that searches a sorted array of integers
 * using binary search
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in the array
 * @value: the exact value being searched for
 * Return: index of the value or -1 if not found
 *
 */
int binary_search(int *array, size_t size, int value)
{
	int x, y, a, b;

	if (array == NULL)
		return (-1);
	y = 0;
	a = (int)size - 1;
	while (y <= a)
	{
		printf("Searching in array: ");
		for (x = y; x <= a; x++)
		{
			if (x > y)
				printf(", ");
			printf("%d", array[x]);
		}
		printf("\n");
		b = y + (a - y) / 2;

		if (array[b] < value)
			y = b + 1;
		else if (array[b] > value)
			a = b - 1;
		else
			return (b);
	}
	return (-1);
}
