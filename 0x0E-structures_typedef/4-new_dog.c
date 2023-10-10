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
/**
 * _strlen - A function that computes the length of a string
 * @n_Dog: Variable pointer to dog_t
 * @str: The string
 * Return: The length of string
 */
size_t _strlen(const char *str)
{
size_t length = 0;
while (str[length] != '\0')
{
length++;
}
return (length);
}
n_Dog->name = malloc(_strlen(name) + 1);
if (n_Dog->name == NULL)
{
free(n_Dog);
return (NULL);
}
/**
 * _strcpy -  a function that copies a string
 * @dest: buffer sorage
 * @src: the string source 
 * Return: The copied string
 */
char *_strcpy(char *dest, const char *src)
{
    char *d = dest;
while (*src != '\0')
{
*d = *src;
d++;
src++;
}
*d = '\0';
return (dest);
}
_strcpy(n_Dog->name, name);
n_Dog->owner = malloc(_strlen(owner) + 1);
if (n_Dog->owner == NULL)
{
free(n_Dog->name);
free(n_Dog);
return (NULL);
}
_strcpy(n_Dog->owner, owner);
n_Dog->age = age;
return (n_Dog);
}
