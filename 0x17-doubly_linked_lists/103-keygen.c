#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - produces a key based on a username for crackme5
 * @argc: argument counts
 * @argv: passed arguments
 * Return: 0 if successful and 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int x, y;
	size_t vol, total;
	char *m = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char s[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	vol = strlen(argv[1]);
	s[0] = m[(vol ^ 59) & 63];
	for (x = 0, total = 0; x < vol; x++)
		total += argv[1][x];
	s[1] = m[(total ^ 79) & 63];
	for (x = 0, y = 1; x < vol; x++)
		y *= argv[1][x];
	s[2] = m[(y ^ 85) & 63];
	for (y = argv[1][0], x = 0; x < vol; x++)
		if ((char)y <= argv[1][x])
			y = argv[1][x];
	srand(y ^ 14);
	s[3] = m[rand() & 63];
	for (y = 0, x = 0; x < vol; x++)
		y += argv[1][x] * argv[1][x];
	s[4] = m[(s ^ 239) & 63];
	for (y = 0, x = 0; (char)x < argv[1][0]; x++)
		y = rand();
	s[5] = m[(y ^ 229) & 63];
	printf("%s\n", s);
	return (0);
}
