#include <stdio.h>
/**
 * main - A program that prints alpahbet in lowercase
 * with the exception of q and e
 * Return: 0 = success
 */
int main(void)
{
for (char alpha_lowercase = 'a'; alpha_lowercase <= 'z'; alpha_lowercase++)
{
	if (alpha_lowercase != 'e' && alpha_lowercase != 'q'
{
putchar(alpha_lowercase);
}
}
putchar('\n')
return (0);
}
