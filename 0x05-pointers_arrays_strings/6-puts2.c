#include "main.h"
/**
 * puts2 - A function that prints every other character of a string,
 * starting with the first character
 * @str: the string used as a reference
 * Return: Always 0
 */
void puts2(char *str)
{
int a = 0;
while (str[a] != '\0')
{
if (a % 2 == 0)
{
_putchar(str[a]);
}
a++;
}
_putchar('\n');
}

