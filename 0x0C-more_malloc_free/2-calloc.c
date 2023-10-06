#include "main.h"
#include <stdlib.h>
/**
 * _calloc - A function that allocates memory for an array
 * @nmemb: number of array of elements
 * @size: size of the bytes of array
 * Return: pointer to the allocated memory, NULL on error
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int x;
void *ptr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr != NULL)
{
unsigned char *byte_ptr = (unsigned char *)ptr;
for (x = 0; x < (nmemb * size); x++)
{
byte_ptr[x] = 0;
}
}
return (ptr);
}
