#include "main.h"
/**
 * string_toupper - A function that changes all lowercase letters of
 * string to upperse
 * @y: pointer to the string
 * Return: pointer to uppercase string
 */
char *string_toupper(char *y)
{
int string_length = 0;
while (y[string_length] != '\0')
{
if (y[string_length] >= 97 && y[string_length] <= 122)
{
y[string_length] = y[string_length] - 32;
}
string_length++;
}
return (y);
}

