#include "main.h"
/**
 * print_last_digit - Prints that very last digit of a number
 * @d: The number to be used
 *Return: Value of the last digit of f the number
 */
int print_last_digit(int d)
{
int last;
last = d % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
}
