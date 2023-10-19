#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - A function that adds new node at the beginning of a list_t list
 * @head: pointer
 * @str: the string that's to be added
 * Return: The exact address of the element added
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int str_len = 0;
for (; str[str_len]; str_len++)
{
}
new = malloc(sizeof(list_t));
if (!new)
{
return (NULL);
}
new->str = strdup(str);
new->len = str_len;
new->next = (*head);
(*head) = new;
return (*head);
}
