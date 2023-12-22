#include "hash_tables.h"
/**
 * shash_table_create - A function that creates a hash table
 * @size: The size of the array of linked list in the table
 *
 * Return: shash_table_t struct
 */
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *pat;
if (size == 0)
return (NULL);
pat = calloc(1, sizeof(shash_table_t));
if (!pat)
return (NULL);
pat->size = size;
pat->array = calloc((size_t)pat->size, sizeof(shash_node_t *));
if (pat->array == NULL)
{
free(pat);
return (NULL);
}
return (pat);
}
/**
 * shash_table_set - A function that includes an element to the hash table
 * @ht: The hash table to include the element
 * @key: The key of the element that will give the index in the array
 * @value: The value of the element to store in the array
 *
 * Return: 1 on success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
unsigned long int idx;
shash_node_t *comp;
if (!ht || !key || !strcmp(key, "") || !value)
return (0);
idx = key_index((unsigned char *)key, ht->size);
if (check_key_s(ht->array[idx], key))
return (replace_value_s(&ht->array[idx], key, value));
comp = add_node_s(&ht->array[idx], key, value);
if (!comp)
return (0);
insert_sort(comp, ht);
return (1);
}
/**
 * insert_sort - A function that inserts a node in a sorted doubly
 * linked list
 * @node: The shash_node_t to insert
 * @ht: points to the hash table to insert it into
 */
void insert_sort(shash_node_t *node, shash_table_t *ht)
{
shash_node_t *head = ht->shead;
if (!head || strcmp(node->key, head->key) < 0)
{
ht->shead = node;
if (!head)
ht->stail = node;
else
{
node->snext = head;
head->sprev = node;
}
return;
}
for (; head->snext && strcmp(node->key, head->snext->key) >= 0; head =
head->snext)
;
node->sprev = head;
if (!head->snext)
ht->stail = node;
else
head->snext->sprev = node;
node->snext = head->snext;
head->snext = node;
}
/**
 * shash_table_get - A function that retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key of the value to retrieve
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
unsigned long int idx;
shash_node_t *custom_node = NULL;
if (!ht || !key || !strcmp(key, ""))
return (NULL);
idx = key_index((const unsigned char *)key, ht->size);
custom_node = (ht->array)[idx];
for (; custom_node; custom_node = custom_node->next)
{
if (!strcmp(custom_node->key, key))
return (custom_node->value);
}
return (NULL);
}
/**
 * shash_table_print - A function that prints a hash table
 * @ht: The hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *head = NULL;
if (!ht)
return;
head = ht->shead;
printf("{");
for (; head; head = head->snext)
{
printf("'%s': '%s'", head->key, head->value);
if (head->snext)
printf(", ");
}
printf("}\n");
}
/**
 * shash_table_print_rev - A function that prints a hash table but
 * in a  in reverse order
 * @ht: hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *tail = NULL;
if (!ht)
return;
tail = ht->stail;
printf("{");
for (; tail; tail = tail->sprev)
{
printf("'%s': '%s'", tail->key, tail->value);
if (tail->sprev)
printf(", ");
}
printf("}\n");
}
/**
 * shash_table_delete - A function that deletes a hash table
 * @ht: The hash table to be deleted
 */
void shash_table_delete(shash_table_t *ht)
{
if (!ht)
return;
free_list_s(ht->shead);
free(ht->array);
free(ht);
}
/**
 * replace_value_s - A function that replaces the value at a pre-existing key
 * @ht: The pointer that's double to the shash_node_t list
 * @key: The new key to be added in the node
 * @value: The value to be added in the node
 *
 * Return: 1 on success, 0 on failure
 */
int replace_value_s(shash_node_t **ht, const char *key, const char *value)
{
shash_node_t *ephem = *ht;
for (; ephem && strcmp(ephem->key, key); ephem = ephem->next)
;
free(ephem->value);
ephem->value = strdup(value);
if (!ephem->value)
return (0);
return (1);
}
/**
 * check_key_s -  A function that confirms if a key exists in a hash table
 * @ht: pointer to the shash_node_t list
 * @key: key to look for
 *
 * Return: 1 if the key is found, 0 otherwise
 */
int check_key_s(shash_node_t *ht, const char *key)
{
for (; ht; ht = ht->next)
{
if (!strcmp(ht->key, key))
return (1);
}
return (0);
}
/**
 * add_node_s - A function that adds a new node at the start of a linked list
 * @head: double pointer to the shash_node_t list
 * @key: new key to add in the node
 * @value: value to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
shash_node_t *add_node_s(shash_node_t **head, const char *key,
const char *value)
{
shash_node_t *comp;
comp = calloc(1, sizeof(shash_node_t));
if (!comp)
return (NULL);
comp->key = strdup(key);
if (!comp->key)
{
free(comp);
return (NULL);
}
comp->value = strdup(value);
if (!comp->value)
{
free(comp);
free(comp->key);
return (NULL);
}
if (*head == NULL)
(*head) = comp;
else
{
comp->next = (*head);
(*head) = comp;
}
return (*head);
}
/**
 * free_list_s - A function that frees a linked list
 * @head:  The shash_node_t list to be freed
 */
void free_list_s(shash_node_t *head)
{
shash_node_t *ephem;
for (; head; head = ephem)
{
ephem = head->snext;
free(head->key);
free(head->value);
free(head);
}
}
