#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index -  A function that Adds a node at a specified
 * index in a dlistint_t list.
 * @h: Pointer to the first element of the list.
 * @idx: Index at which to insert the new node.
 * @n: Integer value for the new node.
 * Return: The pointer to the new node if successful, otherwise NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *ephem = NULL;
dlistint_t *ephem2 = NULL;
dlistint_t *ephem3 = NULL;
dlistint_t *custom_node = NULL;
unsigned int x, y;
if (h == NULL)
return (NULL);
custom_node = malloc(sizeof(dlistint_t));
if (custom_node == NULL)
return (NULL);
custom_node->n = n;
if (*h == NULL || idx == 0)
{
custom_node = add_dnodeint(h, n);
return (custom_node);
}
ephem3 = *h;
for (x = 0; ephem3->next != NULL; x++)
ephem3 = ephem3->next;
if (x == idx - 1)
{
custom_node = add_dnodeint_end(h, n);
return (custom_node);
}
if (idx >= x + 2)
return (NULL);
ephem = *h;
for (y = 0; y < idx - 1; y++)
ephem = ephem->next;
ephem2 = ephem->next;
ephem->next = custom_node;
custom_node->next = ephem2;
custom_node->prev = ephem;
ephem2->prev = custom_node;
return (custom_node);
}
