#include <stdio.h>
/**
 * main - A program that prints all numbers of base 16 in lowercase
 * Return: 0 = success
 */
int main(void)
{
char num = '0';
while (num <= 'f')
{
putchar(num);
num++;
}
putchar('\n');
return (0);
}
