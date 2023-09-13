#include <stdio.h>
/**
 * main - A program that prints the first 98 fibonacci
 * starting with 1 and 2
 * Return: 0 = success
 */
int main(void)
{
int n = 98;
int i = 2;
unsigned long a = 1, b = 2;
printf("%lu, %lu", a, b);
for (int i = 2; i < n; i++)
{
unsigned long temp = a + b;
a = b;
b = temp;
printf(", %lu", b);
}
printf("\n");
return (0);
}
