#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * infinite_add - A function that adds two numbers
 * @n1: the first number to be added
 * @n2: the second number to be added
 * @r: the buffer the function uses to store the result
 * @size_r: buffer size
 * Return: r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = strlen(n1);
int len2 = strlen(n2);
int carry, max_len, result_index, i;
int digit1, digit2, sum, digit, left, right;
if (len1 > size_r || len2 > size_r)
{
return (0);
}
carry = 0;
max_len = len1 > len2 ? len1 : len2;
result_index = 0;
i = 0;
while (i < max_len || carry)
{
digit1 = i < len1 ? n1[len1 - 1 - i] - '0' : 0;
digit2 = i < len2 ? n2[len2 - 1 - i] - '0' : 0;
sum = digit1 + digit2 + carry;
carry = sum / 10;
digit = sum % 10;
if (result_index >= size_r - 1)
{
return (0);
}
r[result_index++] = digit + '0';
i++;
}
r[result_index] = '\0';
left = 0;
right = result_index - 1;
while (left < right)
{
char temp = r[left];
r[left] = r[right];
r[right] = temp;
left++;
right--;
}
return (r);
}
