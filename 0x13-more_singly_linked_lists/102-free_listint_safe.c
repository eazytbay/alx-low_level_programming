#include "lists.h"
/**
 * free_listint_safe -A function that Frees a listint_t list safely.
 * @h: The pointer that Points` to the first node in the linked list.
 * Return: the size of the listint_t list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
int sub;
listint_t *ephem;
if (!h || !*h)
return (0);
while (*h)
{
sub = *h - (*h)->next;
if (sub > 0)
{
ephem = (*h)->next;
free(*h);
*h = ephem;
count++;
}
else
{
free(*h);
*h = NULL;
count++;
break;
}
}
*h = NULL;
return (count);
}
