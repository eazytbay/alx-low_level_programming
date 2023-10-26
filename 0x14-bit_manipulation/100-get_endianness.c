#include "main.h"
/**
 * get_endianness - Checks the endianness of the system.
 * Return: 0 if it's big endian, 1 if it's little endian.
 */
int get_endianness(void)
{
unsigned int dig = 1;
char *endian_check = (char *)&dig;
if (*endian_check == 1)
{
return (1);
}
else
{
return (0);
}
}
