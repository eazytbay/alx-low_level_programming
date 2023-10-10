#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - A function that creates a new dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 * Return: NULL on error
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *n_Dog = malloc(sizeof(dog_t));
if (n_Dog == NULL)
{
return (NULL);
}
n_Dog->name = malloc(strlen(name) + 1);
if (n_Dog->name == NULL)
{
free(n_Dog);
return (NULL);
}
strcpy(n_Dog->name, name);
n_Dog->owner = malloc(strlen(owner) + 1);
if (n_Dog->owner == NULL)
{
free(n_Dog->name);
free(n_Dog);
return (NULL);
}
strcpy(n_Dog->owner, owner);
n_Dog->age = age;
return (n_Dog);
}
