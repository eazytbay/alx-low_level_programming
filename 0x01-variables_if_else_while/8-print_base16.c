#include <stdio.h>
/**
 * main - A program that prints all numbers of base 16 in lowercase
 * Return: 0 = success
 */
int main(void)
{
char hex_digits[] = "0123456789abcdef";
int a = 0;
while (a < 16)
{
putchar(hex_digits[a]);
a++;
}
putchar('\n');
return (0);
}
