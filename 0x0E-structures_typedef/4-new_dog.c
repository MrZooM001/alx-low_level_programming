#include <stdlib.h>
#include "dog.h"

/**
 * _strcpy - A function that copy a string.
 * @dest: A pointer to character as destination string.
 * @src: A pointer to character as source string.
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i;

i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return (dest);
}

/**
 * new_dog - A function that creates a new dog.
 * @name: A pointer to character.
 * @age: A float.
 * @owner: A pointer to character.
 *
 * Return: A pointer to a new dog_t.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
int length;
char *n, *o;

d = malloc(sizeof(dog_t));
if (d == NULL)
{
return (NULL);
}

length = 0;
while (name[length] != '\0')
{
length++;
}
length++;
n = malloc(sizeof(*owner) * length);
if (n == NULL)
{
free(d);
return (NULL);
}

length = 0;
while (name[length] != '\0')
{   
length++;
}
length++;
o = malloc(sizeof(*name) * length);
if (o == NULL)
{
free(n);
free(d);
return (NULL);
}

_strcpy(n, name);
_strcpy(o, owner);
d->name = n;
d->age = age;
d->owner = o;

return (d);
}
