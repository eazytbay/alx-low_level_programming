#include "hash_tables.h"
/**
 * free_list -A function that frees a linked list
 * @head: hash_node_t that's being freed
 */
void free_list(hash_node_t *head)
{
hash_node_t *ephem;
for (; head != NULL; head = ephem)
{
ephem = head->next;
free(head->key);
free(head->value);
free(head);
}
}
/**
 * hash_table_delete - A function that removes a hash table
 * @ht: The hash table to be removed
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int x;
if (!ht)
return;
x = 0;
while (x < ht->size)
{
free_list(ht->array[x]);
x++;
}
free(ht->array);
free(ht);
}

