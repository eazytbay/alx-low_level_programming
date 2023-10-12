#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings -  A function that prints strings
 * @separator: The string to be printed in between strings
 * @n: The number of strings passed to the function
 * Return: nill if one of the string is NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int x = 0;
char *ptr;
va_list args;
va_start(args, n);
while (x < n)
{
ptr = va_arg(args, char*);
if (ptr != NULL)
{
printf("%s", ptr);
}
else
{
printf("(nil)");
}
if (x < n - 1 && separator != NULL)
{
printf("%s", separator);
}
x++;
}
va_end(args);
printf("\n");
}
