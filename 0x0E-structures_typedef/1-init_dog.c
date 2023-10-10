#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - A function that initializes a variable of type struct dog
 * @d: the particular dog to be intialized
 * @name: The dog's name
 * @age: the dog'a age
 * @owner: the dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
