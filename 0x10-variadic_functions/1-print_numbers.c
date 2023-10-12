#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - A function that prints numbers
 * @separator: The string to be printed in between numbers
 * @n: The number of integers passed to the function above
 * Return: Do not print if separator is NULL
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int x = 0;
int digit;
va_list args;
va_start(args, n);
while (x < n)
{
digit = va_arg(args, int);
printf("%d", digit);
if (x < n - 1 && separator != NULL)
{
printf("%s", separator);
}
x++;
}
va_end(args);
printf("\n");
}
