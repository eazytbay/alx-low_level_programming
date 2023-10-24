#include "lists.h"
/**
 * insert_nodeint_at_index - A function that inserts a new
 * node at a given position in a linked list
 * @head: The  pointer pointing to the first node in the list
 * @idx: index describing where the new node is added
 * @n: inputed data to the new node
 * Return: Address of  the new node, or NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node;
listint_t *ephem = *head;
unsigned int x;
new_node = malloc(sizeof(listint_t));
if (!new_node || !head)
return (NULL);
new_node->n = n;
new_node->next = NULL;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
x = 0;
while (ephem && x < idx)
{
if (x == idx - 1)
{
new_node->next = ephem->next;
ephem->next = new_node;
return (new_node);
}
else
{
ephem = ephem->next;
x++;
}
}
return (NULL);
}
