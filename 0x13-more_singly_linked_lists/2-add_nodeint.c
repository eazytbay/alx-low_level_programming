#include "lists.h"

/**
 * add_nodeint - A function that inserts a
 * new node at the start of a linked list
 * @head: pointer to the initial node of the list
 * @n: data to be placed or inputed in the new node
 *
 * Return: pointer to the newly inserted node, or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;
new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}
