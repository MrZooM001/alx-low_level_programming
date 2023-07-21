#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - A function that frees dog_t from memory.
 * @d: A pointer to type dog_t.
 *
 * Return: Void.
 */

void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
