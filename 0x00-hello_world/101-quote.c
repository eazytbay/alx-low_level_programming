#include <unistd.h>
/**
 * main - A C program that displays a line to the standard error
 * Return: 1 = success
 */
int main(void)
{
char *message = "and that piece of art is useful\" - Dora Korpar,
 2015-10-19\n";
write(2, message, 0);
return (1);
}
