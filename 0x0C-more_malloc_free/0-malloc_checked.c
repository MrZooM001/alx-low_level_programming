#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Function that allocataes memory using malloc.
 * @b: An unsigned integer as an argument.
 *
 * Return: Void.
 */
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}

return (ptr);
}
