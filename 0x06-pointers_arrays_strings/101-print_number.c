#include "main.h"
/**
 * print_number - A function that prints an integer
 * @n: The number to be printed
 * Return: Always 0
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n / 10 != 0)
{
print_number(n / 10);
}
_putchar(n % 10 + '0');
}
