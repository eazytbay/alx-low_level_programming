#include "main.h"
/**
 * is_prime_number - A function that retuns i if the input integer is
 * a prime number
 * @n: Number to check if it is a prime number
 * Return: 1 if n is a prime number otherwise return 0.
 */
int is_prime_number(int n)
{
int x = 2;
if (n <= 1)
{
return (0);
}
while (x * x <= n)
{
if (n % x == 0)
{
return (0);
}
x++;
}
return (1);
}
