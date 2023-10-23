#include "lists.h"
/**
 * free_listint - A function that frees a linked list
 * @head: The pointer pointing to the listint_t list to be freed
 */
void free_listint(listint_t *head)
{
listint_t *ephem;
for (; head; head = ephem)
{
ephem = head->next;
free(head);
}
}
