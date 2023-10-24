#include "lists.h"
/**
 * find_listint_loop - A function that Locates the loop in a linked list.
 * @head: pointer to Linked list to search for.
 * Return: Address of the node where the loop starts, or NULL
 * if no loop is found
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *sW = head;
listint_t *fW = head;
if (!head)
return (NULL);
for (; sW && fW && fW->next;)
{
fW = fW->next->next;
sW = sW->next;
if (fW == sW)
{
sW = head;
while (sW != fW)
{
sW = sW->next;
fW = fW->next;
}
return (fW);
}
}
return (NULL);
}
