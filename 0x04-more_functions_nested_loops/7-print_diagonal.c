#include "main.h"
/**
 * print_diagonal - prints diagonal lines
 * @i: input variable
 * Return: void
 */
void print_diagonal(int i)
{
int a, b;
if (i <= 0)
_putchar('\n');
for (a = 0; a < i; a++)
{
for (b = 0; b < a; b++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
