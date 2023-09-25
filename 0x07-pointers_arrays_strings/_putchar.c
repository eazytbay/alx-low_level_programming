#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character expected to be printed
 * Return: 1 on success
 * Return: -1 on error and set error appropraitely
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
