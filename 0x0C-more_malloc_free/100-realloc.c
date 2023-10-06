#include "main.h"
#include <stdlib.h>
/**
 * _realloc - A function that reallocates a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: size in bytes
 * @new_size: new size in bytes of the new memory block
 * Return: return ptr and NULL on error
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
unsigned int x;
if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
return (malloc(new_size));
}
if (new_size == old_size)
{
return (ptr);
}
new_ptr = malloc(new_size);
if (new_ptr != NULL)
{
if (new_size < old_size)
{
old_size = new_size;
}
for (x = 0; x < old_size; x++)
{
((char *)new_ptr)[x] = ((char *)ptr)[x];
}
free(ptr);
}
return (new_ptr);
}
