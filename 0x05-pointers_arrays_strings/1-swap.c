#include "main.h"
/**
 * swap_int - A function that swaps the value of two integers
 * @a: first value to be swapped
 * @b: second value to be swapped
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
int temp_value;
temp_value = *b;
*b = *a;
*a = temp_value;
}
