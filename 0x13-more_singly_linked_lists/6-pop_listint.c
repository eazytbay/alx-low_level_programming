#include "lists.h"
/**
 * pop_listint - A function that deletes the head node of a linked list
 * @head: Represnts the pointer pointing to the first
 * element in the linked list
 * Return: the elements of the data deleted
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *ephem;
int count_node;
if (!head || !*head)
return (0);
count_node = (*head)->n;
ephem = (*head)->next;
free(*head);
*head = ephem;
return (count_node);
}
