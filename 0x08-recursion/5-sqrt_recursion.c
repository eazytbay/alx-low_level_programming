#include "main.h"
/**
 * _sqrt_recursion - A function that returns the
 * natural square root of a number
 * @n: number whose square root is being calculated
 * Return: outcome of the square root of n
 */
int find_sqrt(int n, int x);
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1); /* -1 is returned as an error if n is negative.*/
}
if (n == 0 || n == 1)
{
return (n);
}
return (find_sqrt(n, 1));
}
/**
 * find_sqrt - a recursion to find the natural square root of a number
 * @x: A variable that iterates through
 * possible values to find the square root of the given number n
 * @n: the number whose square root is being calculated
 * Return: outcome of find_sqrt
 */
int find_sqrt(int n, int x)
{
if (x * x == n)
{
return (x); /* square root found.*/
}
if (x * x > n)
{
return (-1); /* indicates that n does not have a natural square root.*/
}
return (find_sqrt(n, x + 1)); /* x is Incremented and the search continues*/
}
