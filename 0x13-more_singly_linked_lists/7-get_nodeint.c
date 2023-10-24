#include "lists.h"

/**
 * get_nodeint_at_index -  A function that returns the node at a specific
 * index in a linked list
 * @head: The pointerpointing to the first node in the linked list
 * @index: index of the node to be retrieved
 * Return: pointer to the desired node, or  return NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *ephem = head;
unsigned int x;
for (x = 0; ephem && x < index; x++)
{
ephem = ephem->next;
}
return (ephem ? ephem : NULL);
}
