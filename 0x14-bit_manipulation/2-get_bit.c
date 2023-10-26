#include "main.h"
/**
 * get_bit - A function that Retrieves the value of a
 * specific bit at the given index.
 * @n: The number from which to extract the bit.
 * @index: The position of the bit to be retrieved (0-based index).
 * Return: The value of the bit at the specified
 * index, or -1 if there's an error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);
return ((n >> index) & 1);
}

