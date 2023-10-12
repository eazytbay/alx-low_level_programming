#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - A function that prints just about anything
 * @format: This is a list of all types of arguments; from char to integer
 * to float and to char
 * Return: nill if the string is NULL
 */
void print_all(const char * const format, ...)
{
int x = 0;
char *ptr, *div = "";
va_list y;
va_start(y, format);
if (format)
{
while (format[x])
{
switch (format[x])
{
case 'c':
printf("%s%c", div, va_arg(y, int));
break;
case 'i':
printf("%s%d", div, va_arg(y, int));
break;
case 'f':
printf("%s%f", div, va_arg(y, double));
break;
case 's':
ptr = va_arg(y, char *);
if (!ptr)
ptr = "(nil)";
printf("%s%s", div, ptr);
break;
default:
x++;
continue;
}
div = ", ";
x++;
}
}
printf("\n");
va_end(y);
}

