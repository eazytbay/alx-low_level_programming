#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - A function that prints a struct dog
 * @d: contains the element of the struct dog to be printed
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
