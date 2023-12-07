#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - A function that includes a new node at the
 * end of a dlistint_t list.
 * @head: The pointer pointing to the head of the list
 * @n: The value of the integer of the new node
 * Return: the exact address of the new element, or NULL on the
 * occassion that it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *custom_node, *ephem;
custom_node = malloc(sizeof(dlistint_t));
if (custom_node == NULL)
return (NULL);
custom_node->n = n;
custom_node->next = NULL;
if (*head == NULL)
{
custom_node->prev = NULL;
*head = custom_node;
return (custom_node);
}
ephem = *head;
while (ephem->next != NULL)
ephem = ephem->next;
ephem->next = custom_node;
custom_node->prev = ephem;
return (custom_node);
}
