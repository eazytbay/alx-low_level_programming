#include "hash_tables.h"

/**
 * hash_djb2 - A function that implements the djb2 algorithm
 * @str: The string that generates the hash value
 *
 * Return: The value of the hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
int x;
unsigned long int h = 5381;
for (x = *str++; x != '\0'; x = *str++)
{
h = ((h << 5) + h) +x; /* h * 33 + x */
}
return (h);
}
