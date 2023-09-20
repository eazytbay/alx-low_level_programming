#include "main.h"
/**
 * reverse_array - A functionthat reverses the content of an array of integers
 * @a: points to array
 * @n: number of elments of an array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int temp, count;
n = n - 1;
count = 0;
while (count <= n)
{
temp = a[count];
a[count++] = a[n];
a[n--] = temp;
}
}
