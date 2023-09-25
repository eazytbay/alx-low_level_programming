#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - A function that prints the sum of the two diagonals
 * of a sqaure matrix of integers
 * @a: matrix of integers
 * @size: the size of the matrix
 */
void print_diagsums(int *a, int size)
{
int i, value1 = 0, value2 = 0;
for (i = 0; i < size; i++)
{
value1 += a[i];
a += size;
}
a -= size;
for (i = 0; i < size; i++)
{
value2 += a[i];
a -= size;
}
printf("%d, %d\n", value1, value2);
}
