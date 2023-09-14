#include "main.h"
/**
 * print_square - function that prints a square
 * @s: size of square
 * Return: void
 */
void print_square(int s)
{
int a, b;
if (s <= 0)
_putchar('\n');
for (a = 0; a < s; a++)
{
for (b = 0; b < s; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
