#include "hash_tables.h"

/**
 * hash_table_print - A function that prints key/value pairs in hash
 * table array order.
 * @ht: the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int x, cnt = 0;
hash_node_t *custom_node;
if (ht == NULL)
return;
printf("{");
for (x = 0; x < ht->size; x++)
{
if (ht->array[x] != NULL)
{
for (custom_node = ht->array[x]; custom_node != NULL; custom_node =
custom_node->next)
{
if (cnt > 0)
printf(", ");
printf("'%s': '%s'", custom_node->key, custom_node->value);
cnt++;
}
}
}
printf("}\n");
}
