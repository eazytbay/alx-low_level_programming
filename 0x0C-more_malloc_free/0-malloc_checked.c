#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * malloc_checked - A function that allocates memory using malloc
 * @b: memory to be allocated
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
