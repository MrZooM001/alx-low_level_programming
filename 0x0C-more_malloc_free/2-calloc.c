#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Function that allocates memory for an array, using malloc.
 * @nmemb: An unsigned integer as number of elements.
 * @size:  An unsigned integer as size of each element.
 *
 * Return: Void.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i, length;
char *ptr;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

length = nmemb * size;

ptr = malloc(length);

if (ptr == NULL)
{
return (NULL);
}

for (i = 0; i < length; i++)
{
ptr[i] = 0;
}

return (ptr);
}
