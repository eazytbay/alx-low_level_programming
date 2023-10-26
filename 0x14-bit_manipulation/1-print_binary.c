#include "main.h"
/**
 * power_base - A function that calculates the base of a number
 * raised to its power
 * @base: the base of the nomber
 * @exp: the power the base is to be raised to
 * Return: The result of the expression (base ^ exp)
 */
unsigned long int power_base(unsigned int base, unsigned int exp)
{
unsigned long int rslt = 1;
unsigned int x;
for (x = 0; x < exp; x++)
rslt *= base;
return (rslt);
}
/**
 * print_binary - A function that prints the binary representation of a number
 * @n: Represents the number to be printed
 */
void print_binary(unsigned long int n)
{
unsigned long int d, c;
char print_flag = 0;
d = power(2, sizeof(unsigned long int) * 8 - 1);
for (; d > 0; d >>= 1)
{
c = n & d;
if (c == d)
{
print_flag = 1;
_putchar('1');
}
else if (print_flag || d == 1)
{
_putchar('0');
}
}
}
