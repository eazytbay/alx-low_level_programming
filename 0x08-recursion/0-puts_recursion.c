#include "main.h"
/**
 * _puts_recursion - A function to print a string
 * @s: character to be printed
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s); /*Print the current character*/
_puts_recursion(s + 1);
}

