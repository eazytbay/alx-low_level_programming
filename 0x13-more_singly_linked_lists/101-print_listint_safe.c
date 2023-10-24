#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - Enumerates the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 * Return: 0 on the occassion that the list is not looped
 * Otherwise return the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
const listint_t *runner1, *runner2;
size_t uniqueNodes = 1;
if (head == NULL || head->next == NULL)
return (0);
runner1 = head->next;
runner2 = (head->next)->next;
for (; runner2; runner1 = runner1->next, runner2 = (runner2->next)->next)
{
if (runner1 == runner2)
{
runner1 = head;
for (; runner1 != runner2; uniqueNodes++, runner1 = runner1->next,
runner2 = runner2->next)
{
}
runner1 = runner1->next;
for (; runner1 != runner2; uniqueNodes++, runner1 = runner1->next)
{
}
return (uniqueNodes);
}
}
return (0);
}
/**
 * print_listint_safe - A function that Prints a listint_t list safely.
 * @head: The pointer pointing to the head of the listint_t linked list.
 * Return: The nodes in the linked list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t uniqueNodes, current_index = 0;
uniqueNodes = looped_listint_len(head);
if (uniqueNodes == 0)
{
for (; head != NULL; uniqueNodes++, head = head->next)
{
printf("[%p] %d\n", (void *)head, head->n);
}
}
else
{
for (current_index = 0; current_index < uniqueNodes;
current_index++, head = head->next)
{
printf("[%p] %d\n", (void *)head, head->n);
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (uniqueNodes);
}
