#include "lists.h"
/**
 * print_listint - A function that Prints all elements of a linked list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: Number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
size_t node_count = 0;
for (; h; h = h->next)
{
printf("%d\n", h->n);
node_count++;
}
return (node_count);
}
