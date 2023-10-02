#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints the minimum number of coins
 * to make change for an amount of money
 * @argv: argument array
 * @argc: argument number
 * Return: 1 on error 0 on success
 */
int main(int argc, char *argv[])
{
int cents;
int minCoins;
int a;
int coins[] = {25, 10, 5, 2, 1};
int numCoins = sizeof(coins) / sizeof(coins[0]);
if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}
minCoins = 0;
a = 0;
while (a < numCoins)
{
while (cents >= coins[a])
{
cents -= coins[a];
minCoins++;
}
a++;
}
printf("%d\n", minCoins);
return (0);
}
