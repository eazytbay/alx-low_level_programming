#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * find_largest_char -A function that locates the largest
 * character in the username.
 * @username: The username string.
 * @length: The length of the username.
 * Return: The largest character.
 */
int find_largest_char(char *username, int length)
{
int current_char = *username;
int iterator = 0;
for (iterator = 0; iterator < length; iterator++)
{
if (current_char < username[iterator])
{
current_char = username[iterator];
}
}
srand(current_char ^ 14);
return (rand() & 63);
}

/**
 * multiply_chars - A function that Multiplies each character in the username.
 * @username: The username string.
 * @length: The length of the username.
 * Return: The multiplied character.
 */
int multiply_chars(char *username, int length)
{
int result = 0;
int iterator = 0;
for (iterator = 0; iterator < length; iterator++)
{
result = result + username[iterator] * username[iterator];
}
return (((unsigned int)result ^ 239) & 63);
}

/**
 * generate_random_char - A function that Generates a random character.
 * @username: The username string.
 * Return: A random character.
 */
int generate_random_char(char *username)
{
int random_char = 0;
int iterator = 0;
for (iterator = 0; iterator < *username; iterator++)
{
random_char = rand();
}
return (((unsigned int)random_char ^ 229) & 63);
}
/**
 * main - Entry point.
 *
 * @argc: Arguments count.
 * @argv: Arguments vector.
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
char keygen[7];
int length, current_char, iterator;
long alph[] = {
0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
0x723161513346655a, 0x6b756f494b646850};
(void)argc;
for (length = 0; argv[1][length]; length++)
;
keygen[0] = ((char *)alph)[(length ^ 59) & 63];
current_char = iterator = 0;
while (iterator < length)
{
current_char = current_char + argv[1][iterator];
iterator++;
}
keygen[1] = ((char *)alph)[(current_char ^ 79) & 63];
current_char = 1;
iterator = 0;
while (iterator < length)
{
current_char = argv[1][iterator] * current_char;
iterator++;
}
keygen[2] = ((char *)alph)[(current_char ^ 85) & 63];
keygen[3] = ((char *)alph)[find_largest_char(argv[1], length)];
keygen[4] = ((char *)alph)[multiply_chars(argv[1], length)];
keygen[5] = ((char *)alph)[generate_random_char(argv[1])];
keygen[6] = '\0';
for (current_char = 0; keygen[current_char]; current_char++)
{
printf("%c", keygen[current_char]);
}
return (0);
}
