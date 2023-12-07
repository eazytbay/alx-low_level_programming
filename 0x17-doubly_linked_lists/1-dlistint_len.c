#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len -A function that gives the number of elements in a linked list
 * @h: points to the first element of the list
 * Return: the count of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t node_val = 0;
for (; h != NULL; h = h->next)
{
node_val++;
}
return (node_val);
}
