#include "hash_tables.h"
/**
 * key_index - A function that gives the index of a key in a hash table
 * @key: The key that locates the index
 * @size: The size of the array of indexes
 * Return: the index at which the key/value pair
 * should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int h;
if (size == 0)
return (0);
h = hash_djb2(key);
return (h % size);
}
