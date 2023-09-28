#include "main.h"
/**
 * wildcmp - A function that compares two strings
 * wildcmp_recursive - compares the strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: Always 0
 */
int wildcmp_recursive(char *s1, char *s2);
int wildcmp(char *s1, char *s2)
{
return (wildcmp_recursive(s1, s2));
}
/**
 * wildcmp_recursive - Handles the logic for comparing
 * the two strings
 * @s1: fisrt string to be compared
 * @s2: second string to be compared
 * Return: 1 if the strings are identical, otherwise return 0
 */
int wildcmp_recursive(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}
if (*s2 == '*')
{
if (wildcmp_recursive(s1, s2 + 1))
{
return (1);
}
if (*s1 != '\0' && wildcmp_recursive(s1 + 1, s2))
{
return (1);
}
}
if (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
{
return (wildcmp_recursive(s1 + 1, s2 + 1));
}
return (0);
}


