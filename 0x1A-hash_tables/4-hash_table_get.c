#include "hash_tables.h"

/**
 * hash_table_get - A function that retrieves a value from a
 * hash table using the key associated
 *
 * @ht: hash table to investigate
 * @key: key of the value to retrieve
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int x;
hash_node_t *custom_node = NULL;
if (!ht || !key || !strcmp(key, ""))
return (NULL);
x = key_index((const unsigned char *)key, ht->size);
custom_node = ht->array[x];
for (; custom_node != NULL; custom_node = custom_node->next)
{
if (!strcmp(custom_node->key, (char *)key))
return (custom_node->value);
}
return (NULL);
}
