#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Function that reallocates a memory block using malloc and free.
 * @ptr: A pointer to void type.
 * @old_size:  An unsigned integer as old size.
 * @new_size:  An unsigned integer as new size.
 *
 * Return: Void.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (ptr == NULL)
{
ptr = malloc(new_size);

return (ptr);
}

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

if (new_size == old_size)
{
return (ptr);
}

free(ptr);
ptr = malloc(new_size);

return (ptr);
}
