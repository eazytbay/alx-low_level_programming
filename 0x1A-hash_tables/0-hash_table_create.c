#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table.
 * @size: the size, in number of nodes, to make the new hash table.
 *
 * Return: a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned int x = 0;
hash_table_t *h_table = malloc(sizeof(hash_table_t));
if (h_table == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
return (NULL);
}
h_table->size = size;
h_table->array = malloc(sizeof(hash_node_t *) * size);
if (h_table->array == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
return (NULL);
}
for (; x < size; x++)
h_table->array[x] = NULL;
return (h_table);
}
