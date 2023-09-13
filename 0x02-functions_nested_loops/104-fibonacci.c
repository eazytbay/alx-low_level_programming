#include <stdio.h>
/**
 * main - A program that prints the first 98 fibonacci
 * starting with 1 and 2
 * Return: 0 = success
 */
int main(void)
{
int n = 98;
unsigned long a = 1, b = 2;
unsigned long temp = a + b;
int count = 2;
printf("%lu, %lu, ", a, b);
while (count < 98)
{
a = b;
b = temp;
printf("%lu, ", b);
count++;
}
printf("\n");
return (0);
}
