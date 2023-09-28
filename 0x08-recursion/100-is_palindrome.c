#include "main.h"
#include <string.h>
/**
 * is_palindrome - A function that returns 1 if a string is a palindrome
 * @s: the string to be returned
 * @start: first range of character to compare
 * @end: second range of character to compare
 * Return: 1 if it is a palindrome and 0 if not
 */
int is_palindrome_recursive(char *s, int start, int end);
int is_palindrome(char *s)
{
int length = strlen(s);
if (length <= 1)
{
return (1);
}
return (is_palindrome_recursive(s, 0, length - 1));
}
/**
 * is_palindrome_recursive - checks if the given string is a palindrome
 * @s: the string to be returned
 * @start: first range of charcter to compare
 * @end: second range of charcter to compare
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome_recursive(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}
if (s[start] != s[end])
{
return (0);
}
return (is_palindrome_recursive(s, start + 1, end - 1));
}
