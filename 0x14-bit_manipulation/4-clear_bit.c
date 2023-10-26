#include "main.h"
/**
 * clear_bit - A function that sets a specific bit at
 * the given index to the value 0.
 * @n: The number in which to clear the bit.
 * @index: The position of the bit to be cleared (0-based index).
 * Return: 1 on success, or -1 if there's an error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);
*n = *n & ~(1UL << index);
return (1);
}
