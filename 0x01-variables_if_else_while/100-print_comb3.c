#include <stdio.h>
/**
 * main - A program that prints all posible
 * different combinations of two digits
 * Return: 0 = success
 */
int main(void)
{
char num1 = '0';
while (num1 <= '8')
{
char num2 = num1 + 1;
while (num2 <= '9')
{
putchar(num1);
putchar(num2);
if (num1 != '8' || num2 != '9')
{
putchar(',');
putchar(' ');
}
num2++;
}
num1++;
}
putchar('\n');
return (0);
}
