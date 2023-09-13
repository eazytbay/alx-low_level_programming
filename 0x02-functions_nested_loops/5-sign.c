#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @a: The number to be checked
 * Return: 1 for positive num, -1 for negative num or 0 for
 *  any other thing
 */
int print_sign(int a)
{
if (a > 0)
_putchar(43);
return (1);
}
else if (a < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}

}

