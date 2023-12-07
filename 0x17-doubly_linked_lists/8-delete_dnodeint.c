#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - A function that Deletes a node at a specified
 * index in a dlistint_t list.
 * @head: The head that Points to the first element of the list.
 * @index: Index of the node to delete.
 * Return: 1 if successful, -1 if the index is out
 * of bounds or if the deletion fails.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *ephem = NULL;
dlistint_t *ephem2 = NULL;
dlistint_t *ephem3 = NULL;
dlistint_t *ephem4 = NULL;
unsigned int x = 0, y = 0;
if (head == NULL || *head == NULL)
return (-1);
if (index == 0 && (*head)->next == NULL)
{
free(*head);
*head = NULL;
return (1); }
ephem = *head;
if (index == 0 && (*head)->next != NULL)
{
ephem2 = (*head)->next;
*head = ephem2;
ephem2->prev = NULL;
free(ephem);
return (1); }
ephem4 = *head;
for (x = 0; ephem4->next != NULL; x++)
ephem4 = ephem4->next;
if (index > x)
return (-1);
for (y = 0; y < index - 1; y++)
ephem = ephem->next;
if (index == x)
{
ephem2 = ephem->next;
ephem->next = NULL;
free(ephem2);
return (1);
}
ephem2 = ephem->next;
ephem3 = ephem->next->next;
ephem->next = ephem3;
ephem3->prev = ephem;
free(ephem2);
return (1);
}
