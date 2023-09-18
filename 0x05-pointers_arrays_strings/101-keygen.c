#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int passwd[100];
int x, add, n;
add = 0;
srand(time(NULL));
for (x = 0; x < 100; x++)
{
passwd[x] = rand() % 78;
add += (passwd[x] + '0');
putchar(passwd[x] + '0');
if ((2772 - add)- '0' < 78)
{
n = 2772 - add - '0';
add += n;
putchar(n + '0');
break;
}
}
return (0);
}


