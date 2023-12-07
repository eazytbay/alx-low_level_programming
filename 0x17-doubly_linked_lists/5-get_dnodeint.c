#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - A function that gets the node at a
 * specific index in a dlistint_t list.
 * @head: Pointer to the first element of the list.
 * @index: Number of the node to retrieve.
 * Return: If the index is out of range - NULL.
 * Otherwise - pointer to the node at the specified index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int x;
for (x = 0; head != NULL; head = head->next, x++)
{
if (x == index)
return (head);
}
return (NULL);
}
