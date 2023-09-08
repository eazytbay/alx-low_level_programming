#include <stdio.h>
/**
 * main - A program that prints alphabet in lowercase and then in uppercase
 * Return: 0 = success
 */
int main(void)
{
char alpha_lower = 'a';
char alpha_upper = 'A';
while (alpha_lower <= 'z')
{
putchar(alpha_lower); /* displays the present lower case*/
alpha_lower++;
}
while (alpha_upper <= 'Z')
{
putchar(alpha_upper); /* displays the current uppercase letter this time*/
alpha_upper++;
}
putchar('\n'); /* new line character*/
return (0);
}
