#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - A function that prints a name
 * @name: The name that's to be printed
 * @f:The function pointer
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
