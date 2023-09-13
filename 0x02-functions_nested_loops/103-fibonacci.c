#include <stdio.h>
/**
 * main - A program that finds and prints the sum of even valued terms
 * Return: 0 = success
 */
int main(void)
{
int max_limit = 4000000;
int a = 1, b = 2;
int sum = 0;
int temp = a + b;
while (a <= max_limit)
{
if (a % 2 == 0)
{
sum += a;
}
a = b;
b = temp;
}
printf("%d\n", sum);
return (0);
}
