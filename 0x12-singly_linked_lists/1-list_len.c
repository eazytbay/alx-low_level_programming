#include "lists.h"
#include <stdlib.h>
/**
 * list_len - A function that returns the number of elements in a
 * linked list_t list
 * @h: pointer
 * Return: Elements present in h
 */
size_t list_len(const list_t *h)
{
size_t cnt = 0;
for (; h; h = h->next)
{
cnt++;
}
return (cnt);
}
