#include <stdio.h>
/**
 * main - A program that prints the first 98 fibonacci
 * starting with 1 and 2
 * Return: 0 = success
 */
int main(void)
{
int n = 98;
unsigned long long a = 1, b = 2;
unsigned long long temp = a + b;
printf("%llu, %llu, ", a, b);
int count = 2;
while (count < n)
{
a = b;
b = temp;
printf("%llu, ", b);
count++;
}
printf("\n");
return (0);
}
