#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint -A function that converts a binary number to an unsigned int.
 * @b: The pointer pointing to a string of 0 and 1 character
 * Return: the converted number or 0 if there are more char that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int rslt = 0;
int bp = 0;
if (b == NULL)
return (0);
while (b[bp] != '\0')
{
if (b[bp] == '0' || b[bp] == '1')
{
rslt = (rslt << 1) | (b[bp] - '0');
bp++;
}
else
{
return (0);
}
}
return (rslt);
}
