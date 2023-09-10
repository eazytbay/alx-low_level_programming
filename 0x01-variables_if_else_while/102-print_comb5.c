#include <stdio.h>
/**
 * main - A program that prints all possible combination of tw0 tw0 digits
 * Return: 0 = success
 */
int main(void)
{
int tens1 = 0;
int ones1;
int tens2;
int ones2;
while (tens1 <= 9)
{
ones1 = 0;
while (ones1 <= 9)
{
tens2 = tens1;
while (tens2 <= 9)
{
ones2 = ones1 + 1;
while (ones2 <= 9)
{
putchar('0' + tens1);
putchar('0' + ones1);
ptutchar(' ');
putchar('0' + tens2);
putchar('0' + ones2);
if (!(tens1 == 9 && ones1 == 8 && tens2 == 9 && ones2 == 9))
{
putchar(',');
putchar(' ');
}
ones2++;
}
tens2++;
}
ones1++;
}
tens1++;
}
putchar('\n');

return (0);
}
