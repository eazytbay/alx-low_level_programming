#include "main.h"
/**
 * _isdigit - checks for a digit
 * @n: The character to be checked
 * Return: 1 for the digit character or 0 for anything else
 */
int _isdigit(int n)
{
if (n >= 48 && n <= 57)
{
return (1);
}
return (0);
}
