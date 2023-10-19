#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - A function that adds a new node at the very
 * end of a list_t list
 * @head: pointer
 * @str: string
 * Return: NULL on failure and new element's address on success
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *current_node;
unsigned int str_length = 0;
for (; str[str_length]; str_length++)
{
}
new_node = malloc(sizeof(list_t));
if (!new_node)
{
return (NULL);
}
new_node->str = strdup(str);
new_node->len = str_length;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
current_node = *head;
for (; current_node->next; current_node = current_node->next)
{
}
current_node->next = new_node;
return (new_node);
}
