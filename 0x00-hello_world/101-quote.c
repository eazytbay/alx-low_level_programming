#include <unistd.h>
#include <stdlib.h>
/**
 * main - C programme that displays a line to the standard error
 * Return: 1 = success
 */
int main(void)
{
	if (write(2, "and that piece of art is useful\"
	- Dora Korpar, 2015-10-19\n", 59) != 59)
{
	return (1);
}
return (0);
}
