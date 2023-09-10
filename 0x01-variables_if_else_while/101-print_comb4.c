#include <stdio.h>
/**
 * main -A program that all possible differen combination of 3 digits
 * Return: 0 = success
 */
int main(void)
{
int num1 = 0;
int num2;
int num3;
while (num1 <= 7)
{
num2 = num1 + 1;
while (num2 <= 8)
{
num3 = num2 + 1;
while (num3 <= 9)
{
putchar('0' + num1);
putchar('0' + num2);
putchar('0' + num3);
if (num1 != 7 || num2 != 8 || num3 != 9)
{
putchar(',');
putchar(' ');
}
num3++;
}
num2++;
}
num1++;
return (0);
}
