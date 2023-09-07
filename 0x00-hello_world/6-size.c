#include <stdio.h>
/**
 * main - My c program that prints the size of various types on the computer
 * Return: 0 = success
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int g;
	float f;

printf("size of a char: %lu byte(s)\n", sizeof(c));
printf("size of an int: %lu byte(s)\n", sizeof(i));
printf("size of a long int: %lu byte(s)\n", sizeof(l));
printf("size of a long long int: %lu byte(s)\n", sizeof(g));
printf("size of a float: %lu byte(s)\n", sizeof(f));
return (0);
}
