#include "main.h"
/**
 * leet - A function that encodes a string into 1337
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @p: pointer to string
 * Return: pointer to p.
 */
char *leet(char *p)
{
int length_string;
char leetlet[] = "aAeEoOtTlL";
char leet_nums[] = "4433007711";
char *p = leet;
length_string = 0;
while (p[length_string] != '\0')
{
int countleet = 0;
while (countleet < 10)
{
if (leetlet[countleet] == p[length_string])
{
p[length_string] = leet_nums[countleet];
}
countleet++;
}
length_string++;
}
return (p);
}

