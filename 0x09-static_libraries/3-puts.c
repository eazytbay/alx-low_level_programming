#include "main.h"
/**
 * _puts - A function that prints a string
 * @str: represents the pointer to the string
 * Return: string follweed by a new line
 */
void _puts(char *str)
{
int x = 0;
while (str[x])
{
_putchar(str[x]);
x++;
}
_putchar('\n');
}

