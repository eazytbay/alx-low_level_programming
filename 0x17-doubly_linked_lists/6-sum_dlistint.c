#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint -A function that calculates the sum of the
 * numbers in a dlistint_t list.
 * @head: The head that Points to the first element of the list.
 * Return: The sum of the numbers in the list.
 */
int sum_dlistint(dlistint_t *head)
{
unsigned int add_value;	
add_value = 0;
if (head == NULL)
return (0);
for (; head != NULL; head = head->next)
{
add_value += head->n;
}
return (add_value);
}
