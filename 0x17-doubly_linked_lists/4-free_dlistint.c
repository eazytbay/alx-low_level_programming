#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - A function that liberates a linked dlistint_t list.
 * @head: The head that points to the dlistint_t list element
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *ephem;
for (; head != NULL; head = ephem)
{
ephem = head->next;
free(head);
}
}
