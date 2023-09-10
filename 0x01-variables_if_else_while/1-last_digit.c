#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that will assign a random number to the variable n
 * each time it is executed
 * Return: 0 = success
 */
int main(void)
{
int n;
int ls;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
ls = n % 10;
if (ls > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, ls);
}
else if (ls == 0)
{
printf("Last digit of %d is %d and is 0\n", n, ls);
}
else if (ls < 6 && ls != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ls);
}
return (0);
}
