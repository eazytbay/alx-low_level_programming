#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - A function that checks for a string
 * that contains a non-digit char
 * @s: the string being checked
 *
 * Return: 0 for a non-digit and if 1 otherwise
 */
int is_digit(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] < '0' || s[x] > '9')
			return (0);
		x++;
	}
	return (1);
}

/**
 * _strlen -  A function that returns the length of a string
 * @s: the string whose length is being checked
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * errors - error handler for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - A progrsm that multiplies two positive numbers
 * @argc: amount of arguments
 * @argv: argument array
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int l1, l2, l, x, c, d1, d2, *rslt, y = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	l = l1 + l2 + 1;
	rslt = malloc(sizeof(int) * l);
	if (!rslt)
		return (1);
	for (x = 0; x <= l1 + l2; x++)
		rslt[x] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		d1 = s1[l1] - '0';
		c = 0;
		for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
		{
			d2 = s2[l2] - '0';
			c += rslt[l1 + l2 + 1] + (d1 * d2);
			rslt[l1 + l2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			rslt[l1 + l2 + 1] += c;
	}
	for (x = 0; x < l - 1; x++)
	{
		if (rslt[x])
			y = 1;
		if (y)
			_putchar(rslt[x] + '0');
	}
	if (!y)
		_putchar('0');
	_putchar('\n');
	free(rslt);
	return (0);
}








