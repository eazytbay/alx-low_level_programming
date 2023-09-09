#include <stdio.h>
/**
 * main - A program that prints alphabet in reverse order
 * Return: 0 = success
 */
int main(void)
{
char alpha_bet = 'z';
while (alpha_bet >= 'a')
{
putchar(alpha_bet);
alpha_bet--;
}
putchar('\n');
return (0);
}
