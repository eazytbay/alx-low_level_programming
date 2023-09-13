#include "main.h"
/**
 * _islower - checks for lowercase charcters
 * @c: The charcters to be checked
 * Return: 1 for lowercase character or 0 for any other result
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}

