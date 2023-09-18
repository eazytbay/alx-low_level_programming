#include "main.h"
/**
 * rev_string - A function that reverses a string
 * @s: pointer pointing to the string
 * Return: Always 0
 */
void rev_string(char *s)
{
int length, n, mid;
char ephem;
for (length = 0; s[length] != '\0'; length++)
n = 0;
mid = length / 2;
while (mid--)
{
ephem = s[length - n - 1];
s[length - n - 1] = s[n];
s[n] = ephem;
n++;
}
}

