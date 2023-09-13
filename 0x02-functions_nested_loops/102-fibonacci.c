#include <stdio.h>
/**
 * main - A program that prints the first 50 fibonacci
 * numbers, starting with 1 and 2
 * Return: 0 = success
 */
int main(void)
{
int n = 50;
int a = 1, b = 2;
int i = 1;
int temp;
printf("The first 50 Fibonacci numbers are: ");
while (i <= n)
{
printf("%d", a);
if (i < n)
{
printf(", ");
}
else
{
printf("\n");
}
temp = a;
a = b;
b = temp + b;
i++;
}
return (0);
}
