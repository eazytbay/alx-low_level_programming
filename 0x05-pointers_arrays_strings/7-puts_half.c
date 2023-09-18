#include "main.h"
/**
 * puts_half - A function that prints half of a string
 * @str: inputed string
 * Return: 0
 */
void puts_half(char *str)
{
int complete_string, half_complete_string;
complete_string = 0;
while (str[complete_string] != '\0')
complete_string++;
half_complete_string = complete_string / 2;
if (complete_string % 2 == 1)
half_complete_string++;
while (half_complete_string < complete_string)
{
_putchar(str[half_complete_string]);
half_complete_string++;
}
_putchar('\n');
}
