#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - A function that initialize a variable of type struct dog.
 * @d: A pointer to type of struct dog.
 * @name: A pointer to character.
 * @age: An integer.
 * @owner: A pointer to character.
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
