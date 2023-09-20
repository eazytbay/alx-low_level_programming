#include "main.h"
/**
 * _strcmp - A function that compares two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: value less than 0 if string is less than the other,
 * value greater than 0
 * if the string is grerater than the other 0 if strings are equal.
 */
int _strcmp(char *s1, char *s2)
{
int count = 0;
int comp;
while (s1[count] == s2[count] && s1[count] != '\0')
{
count++;
}
if (s1[count] == '\0' && s2[count] == '\0')
{
comp = 0;
}
else
{
comp = s1[count] - s2[count];
}
return (comp);
}
