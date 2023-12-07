#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint - A function that displays elements
 * of a dlistint_t list
 * @h: points to the first element of the list
 * Return: the number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t node_value = 0;
for (; h != NULL; h = h->next)
{
printf("%d", h->n);
node_value++;
printf("\n");
}
return (node_value);
}
