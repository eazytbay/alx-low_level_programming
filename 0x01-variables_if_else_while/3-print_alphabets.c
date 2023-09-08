#include <stdio.h>
/**
 * main - A program that prints alphabet in lowercase and then in uppercase
 * Return: 0 = success
 */
int main(void)
{
for (char alpha_bet = 'a'; alpha_bet <= 'z'; alpha_bet++)
{
putchar(alpha_bet); /* displays the present lower case*/
}
for (char alpha_bet = 'A'; alpha <= 'Z'; alpha_bet++)
{
putchar(alpha_bet); /* displays the current uppercase letter this time*/
}
putchar('\n'); /* new line character*/
return (0);
}
