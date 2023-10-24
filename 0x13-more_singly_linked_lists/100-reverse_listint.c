#include "lists.h"
/**
 * reverse_listint - A function that reverses a listint_t linked list
 * @head: the pointer that points to the first node in the list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *previous_node = NULL;
listint_t *next_node = NULL;
for (; *head; *head = next_node)
{
next_node = (*head)->next;
(*head)->next = previous_node;
previous_node = *head;
}
*head = previous_node;
return (*head);
}
