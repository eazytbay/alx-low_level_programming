#include <stdio.h>
/**
 * main - A program that prints all possible combination of tw0 tw0 digits
 * Return: 0 = success
 */
int main(void)
{
int num1 = 0;
while (num1 <= 99)
{
int num2 = num1;
while (num2 <= 99)
{
putchar((num1 / 10) + '0');   /* Print the tens digit of num1*/
putchar((num1 % 10) + '0');   /*Print the ones digit of num1*/
putchar(' ');                 /* Print a space*/
putchar((num2 / 10) + '0');   /* Print the tens digit of num2*/
putchar((num2 % 10) + '0');   /* Print the ones digit of num2*/
if (num1 < 99 || num2 < 99)
{
putchar(',');   /* Print a comma*/
putchar(' ');   /* Print a space*/
}
num2++;
}
num1++;
}
putchar('\n'); /* Print a newline character*/
return (0);
}
