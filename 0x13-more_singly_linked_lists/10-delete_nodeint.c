#include "lists.h"
/**
 * delete_nodeint_at_index -A function that deletes a node
 * at a specific index in a linked list
 * @head: The pointer pointing to the first element in the list
 * @index: index of the node to be deleted
 * Return: 1 on  Success, or -1 Failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *ephem = *head;
listint_t *current_node = NULL;
unsigned int x = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(ephem);
return (1);
}
for (x = 0; x < index - 1; x++)
{
if (!ephem || !(ephem->next))
return (-1);
ephem = ephem->next;
}
current_node = ephem->next;
ephem->next = current_node->next;
free(current_node);
return (1);
}
