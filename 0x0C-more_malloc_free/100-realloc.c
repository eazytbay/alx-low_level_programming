#include "main.h"
#include <stdlib.h>
/**
 * _realloc - A function that reallocates a memory block
 * @ptr: pointer to the memory that was previously allocated
 * @old_size: previous size in bytes
 * @new_size: new size in bytes of the new memory block
 * Return: return ptr and NULL on error
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *prev_ptr;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	prev_ptr = ptr;

	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			ptr1[x] = prev_ptr[x];
	}

	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			ptr1[x] = prev_ptr[x];
	}

	free(ptr);
	return (ptr1);
}




