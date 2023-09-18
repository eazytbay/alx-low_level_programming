#include "main.h"
#include <stdio.h>
/**
 * print_array - A function that prints n element
 * of an array of integers
 * @x: input array
 * @y: length of array
 * Return: 0
 */
void print_array(int *x, int y)
{
int array_index;
for (array_index = 0; array_index < y; array_index++)
{
printf("%d", x[array_index]);
if (array_index != (y - 1))
{
printf(", ");
}
}
putchar('\n');
}
