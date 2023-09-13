#include <stdio.h>
/**
 * main - A programme that computes and prints the sum of all
 * the multiples of 3 and 5 below 1024
 * Return: 0 = success
 */
int main(void)
{
int limit = 1024;
int sum = 0;
int i = 1;
while (i < limit)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
i++;
}
printf("The sum of multiples of 3 or 5 below 1024 is: %d\n", sum);
return (0);
}

