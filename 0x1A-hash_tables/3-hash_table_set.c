#include "hash_tables.h"
/**
 * custom_fix_pair - A function that mallocs a key/value pair
 * to the hash table.
 * @key: The key, a string that's not empty.
 * @value: The value associated with the key, can be an empty string.
 * Return: pointer to the new node.
 */
hash_node_t *custom_fix_pair(const char *key, const char *value)
{
hash_node_t *custom_node = malloc(sizeof(hash_node_t));
if (custom_node == NULL)
return (NULL);
custom_node->key = malloc(strlen(key) + 1);
if (custom_node->key == NULL)
return (NULL);
custom_node->value = malloc(strlen(value) + 1);
if (custom_node->value == NULL)
return (NULL);
strcpy(custom_node->key, key);
strcpy(custom_node->value, value);
return (custom_node);
}
/**
 * custom_fix_pair_only - A function that sets key:value pair
 * to first array element
 * @ht: pointer to the hash table.
 * @key: the key, a string that's not empty.
 * @value: the value related with the key, can be an empty string.
 * @index: index of the key.
 *
 * Return: the node, or NULL if failed.
 */
int custom_fix_pair_only(hash_table_t *ht, const char *key,
const char *value, unsigned long int index)
{
hash_node_t *custom_node = custom_fix_pair(key, value);
if (custom_node == NULL)
return (0);
custom_node->next = NULL;
ht->array[index] = custom_node;
return (1);
}
/**
 * custom_hash_table_fix -A function that includes an
 * element to the hash table.
 * @ht: a pointer to the hash table array.
 * @key: the key, a string that cannot be empty.
 * @value: the value associated with the key, can be an empty string.
 *
 * Return: 1 on success, 0 on error.
 */
int custom_hash_table_fix(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int idx = key_index((unsigned char *)key, ht->size);
hash_node_t *custom_node = ht->array[idx];
if (key == NULL || ht == NULL)
return (0);
if (custom_node == NULL)
return (custom_fix_pair_only(ht, key, value, idx));
for (; custom_node != NULL; custom_node = custom_node->next)
{
if (strcmp(custom_node->key, key) == 0)
{
if (strcmp(custom_node->value, value) == 0)
return (1);
free(custom_node->value);
custom_node->value = malloc(strlen(value) + 1);
if (custom_node->value == NULL)
return (0);
strcpy(custom_node->value, value);
return (1);
}
}
if (custom_node == NULL)
{
custom_node = custom_fix_pair(key, value);
if (custom_node == NULL)
return (0);
custom_node->next = ht->array[idx];
ht->array[idx] = custom_node;
return (1);
}
return (0);
}
