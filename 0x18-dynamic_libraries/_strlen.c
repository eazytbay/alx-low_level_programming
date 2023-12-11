#include "main.h"
/**
 * _strlen - A function that returns the length of a string
 * @c: string to be checked
 * Return: length of the string
 */
int _strlen(char *c)
{
int length_string = 0;
while (c[length_string])
length_string++;
return (length_string);
}
