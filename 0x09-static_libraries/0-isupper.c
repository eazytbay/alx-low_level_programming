#include "main.h"
/**
 * _isupper - A function that checks for uppercase characters
 * @b: The character to be checked
 * Return: 1 for upper case character and 0 for anything else
 */
int _isupper(int b)
{
if (b >= 65 && b <= 90)
{
return (1);
}
return (0);
}
