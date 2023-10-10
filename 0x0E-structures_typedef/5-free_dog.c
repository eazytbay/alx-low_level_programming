#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - A function that frees dogs
 * @d: The dog to be freed
 */
void free_dog(dog_t *d)
{
if (d == NULL)
{
return;
}
free(d->name);
free(d->owner);
free(d);
}
