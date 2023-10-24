#include "lists.h"
/**
 * sum_listint - A function that Evaluates and returns the sum of all data in a
 * listint_t linked list
 * @head: pointer to the first node in the linked list
 * Return: the evaluated sum and 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
int rslt = 0;
listint_t *ephem = head;
for (; ephem; ephem = ephem->next)
{
rslt += ephem->n;
}
return (rslt);
}
