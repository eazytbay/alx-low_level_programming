#include "main.h"
/**
 * is_prime_number - A function that retuns i if the input integer is
 * a prime number
 * @n: Number to check if it is a prime number
 * @x: the divisor
 * Return: 1 if the integer is a prime number otherwise return 0
 */
int is_prime_recursive(int n, int x);
int is_prime_number(int n)
{
return (is_prime_recursive(n, 2));
}
/**
 * is_prime_recursive - a recursive function responsible for determining
 * whether the given number n is prime
 * @x: the divisor
 * @n: number to check if it is a prime number
 * Return: 1 if the integer is a prime number otherwise return 0
 */
int is_prime_recursive(int n, int x)
{
if (n <= 1)
{
return (0); /*0 and 1 are not prime numbers*/
}
if (x * x > n)
{
return (1); /*n is prime, no divisors found*/
}
if (n % x == 0)
{
return (0); /*n is divisible by divisor, so it's not prime.*/
}
return (is_prime_recursive(n, x + 1)); /* Check the next divisor.*/
}
