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
unsigned int x = 0;
char c, *separator = "", *ptr;
va_list args;
va_start(args, format);
while (format && format[x])
{
c = format[x];
switch (c)
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
separator = ", ";
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
separator = ", ";
break;
case 'f':
printf("%s%f", separator, va_arg(args, double));
separator = ", ";
break;
case 's':
{
ptr = va_arg(args, char*);
if (ptr == NULL)
{
printf("%s(nil)", separator);
}
else
{
printf("%s%s", separator, ptr);
}
separator = ", ";
break;
}
}
x++;
}
va_end(args);
printf("\n");
}
