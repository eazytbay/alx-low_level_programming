#include <stdlib.h>
#include "lists.h"
/**
 * free_list - A function that frees a linked list
 * @head: pointer to the list_t being freed
 * Return: freed list_t
 */
void free_list(list_t *head)
{
list_t *current_node;
list_t *temp_node;
for (current_node = head; current_node != NULL; current_node = temp_node)
{
temp_node = current_node->next;
free(current_node->str);
free(current_node);
}
}
