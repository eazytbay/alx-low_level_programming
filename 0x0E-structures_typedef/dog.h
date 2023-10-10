#ifndef DOG_H
#define DOG_H
/**
 * struct dog - description of a particular dog
 * @name: The Dog's name
 * @age: The Dog's age
 * @owner: The Dog's owner
 */
struct dog
{
char *name;
float age;
char *owner;
};
/**
 * dog_t - struct dog's Typedef
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

