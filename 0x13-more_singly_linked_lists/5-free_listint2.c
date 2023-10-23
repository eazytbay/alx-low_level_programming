#include "lists.h"
/**
 * free_listint2 - A function that frees a linked list using a for loop
 * @head: The pointer pointing to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
listint_t *ephem;
if (head == NULL)
return;
for (; *head; *head = ephem)
{
ephem = (*head)->next;
free(*head);
}
*head = NULL;
}
