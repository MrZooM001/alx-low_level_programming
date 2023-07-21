#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - A function that get length of string.
 * @str: A pointer to character.
 *
 * Return: An integer as length of given string.
 */
int _strlen(char *str)
{
int length;

length = 0;
while (*str != '\0')
{
length++;
str++;
}
return (length);
}

/**
 * _strcpy - copies the string pointed to in source.
 * @dest: Pointer to a string.
 * @src: Pointer to a string.
 *
 * Return: void.
 */
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; *(src + i) != '\0'; i++)
{
dest[i] = *(src + i);
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

length = _strlen(name) + 1;
n = malloc(sizeof(*name) * length);
if (n == NULL)
{
free(d);
return (NULL);
}

length = _strlen(owner) + 1;
o = malloc(sizeof(*owner) * length);
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
