#include "main.h"
/**
 * print_rev - A function that prints a string in reverse
 * @inrev: used as a string to reference the pointer
 * Return: 0
 */
void print_rev(char *inrev)
{
int comm = 0;
while (inrev[comm])
comm++;
while (comm--)
_putchar(inrev[comm]);
_putchar('\n');
}
