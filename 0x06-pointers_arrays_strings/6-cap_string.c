#include "main.h"
/**
 * cap_string - A function that capitalizes all words of a string
 * @c: pointer to string
 * Return: pointer to c
 */
char *cap_string(char *c)
{
int string_num;
string_num = 0;
while (c[string_num] != '\0')
if (c[0] >= 97
