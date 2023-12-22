#include "hash_tables.h"

/**
 * value_update - A function that changes the value at a key that pre-exists
 * @ht: double pointer to the hash_node_t list
 * @key: new key to add in the node
 * @value: value to add in the node
 */
void value_update(hash_node_t **ht, const char *key, const char *value)
{
hash_node_t *ephem = *ht;
for (; ephem && strcmp(ephem->key, key); ephem = ephem->next)
;
free(ephem->value);
ephem->value = strdup(value);
}
/**
 * key_checker -  A function that checks the availability of in a hash table
 * @ht: pointer to the hash_node_t list
 * @key: key to look for
 *
 * Return: 1 if the key is found, 0 otherwise
 */
int key_checker(hash_node_t *ht, const char *key)
{
for (; ht; ht = ht->next)
{
if (!strcmp(ht->key, key))
return (1);
}
return (0);
}
/**
 * new_node -  A function that includes a new node at the
 * start of a linked list
 * @head: double pointer to the hash_node_t list
 * @key: new key to add in the node
 * @value: value to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
hash_node_t *new_node(hash_node_t **head, const char *key, const char *value)
{
hash_node_t *comp;
comp = malloc(sizeof(hash_node_t));
if (!comp)
return (NULL);
comp->key = strdup(key);
comp->value = strdup(value);
if (*head == NULL)
{
(*head) = comp;
comp->next = NULL;
}
else
{
comp->next = (*head);
(*head) = comp;
}
return (*head);
}
/**
 * hash_table_set - A function that includes an element
 * to the hash table
 * @ht: hash table to add the element to
 * @key: key of the element, will give the index in the array
 * @value: value of the element to store in the array
 *
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int idx;
if (!ht || !key || !strcmp(key, "") || !value)
return (0);
idx = key_index((unsigned char *)key, ht->size);
if (key_checker(ht->array[idx], key))
{
value_update(&ht->array[idx], key, value);
return (1);
}
new_node(&ht->array[idx], key, value);
if (&ht->array[idx] == NULL)
return (0);
return (1);
}
