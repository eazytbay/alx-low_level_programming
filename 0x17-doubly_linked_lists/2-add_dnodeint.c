#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - A function that Adds a new node at the beginning
 * of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer which the new node is supposed to accomodate
 * Return: On the occassion that the function fails, return NULL.
 * Otherwise, Return the address of the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *fresh;
fresh = malloc(sizeof(dlistint_t));
if (fresh == NULL)
return (NULL);
fresh->n = n;
fresh->prev = NULL;
fresh->next = NULL;
if (*head != NULL)
{
(*head)->prev = fresh;
fresh->next = *head;
}
*head = fresh;
return (fresh);
}

