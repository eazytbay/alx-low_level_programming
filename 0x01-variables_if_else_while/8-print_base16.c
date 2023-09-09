#include <stdio.h>
/**
 * main - A program that prints all numbers of base 16 in lowercase
 * Return: 0 = success
 */
int main(void)
{
int num = '0';
char letter;
while (num < '10')
{
putchar(num);
num++;
}
while (letter <= 'f')
{
putchar(letter)
letter++;
}
putchar('\n');
return (0);
}
