#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - A function that returns the sum of two numbers
 * @a: The first number to be added
 * @b: The second number to be added
 * Return: The sum of the two numbers
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - A function that returns the difference between two numbers
 * @a: The first number to be subtracted
 * @b: The second number to be subtracted
 * Return: The differnce of the two numbers
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - A function that returns the product of two numbers
 * @a: The first number to be multiplied
 * @b: The second number to be added
 * Return: The product of the two numbers
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - A function that divides two numbers
 * @a: The numerator
 * @b: The denominator
 * Return: The result of the division
 */
int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - A function that returns the remainder of the division
 * @a: The first number to be divided
 * @b: The second number to be divided
 * Return: The remainder after dividing a and b
 */
int op_mod(int a, int b)
{
return (a % b);
}
