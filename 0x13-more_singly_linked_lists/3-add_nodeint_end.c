#include "lists.h"
/**
 * add_nodeint_end - A function that appends a new node to the
 * end of a linked list
 * @head: The pointer that points to the first element of the linked list
 * @n: The data inserted in the new element
 * Return: pointer to the new node, or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node;
listint_t *ephem;
new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
ephem = *head;
for (; ephem->next; ephem = ephem->next)
{
}
ephem->next = new_node;
return (new_node);
}

