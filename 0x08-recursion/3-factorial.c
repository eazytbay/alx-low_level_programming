#include "main.h"
/**
 * factorial - A function that returns the factorial of a given number
 * @n: number whose factorial is to be retuned
 * Return: n factorial
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (1);
}
return (n * factorial(n - 1));
}
