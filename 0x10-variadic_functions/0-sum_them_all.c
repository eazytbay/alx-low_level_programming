#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - A function that returns the sum of parameters it is given
 * @n: The total number of parameters given to the function above
 * Return: 0 if n == 0 otherwise return the total sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
int add_rslt = 0;
unsigned int x = 0;
if (n == 0)
return (0);
va_start(args, n);
while (x < n)
{
add_rslt += va_arg(args, int);
x++;
}
va_end(args);
return (add_rslt);
}
