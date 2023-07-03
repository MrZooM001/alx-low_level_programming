#include "main.h"

/**
 * _memcpy - Copy memory area.
 * @dest: A pointer to character.
 * @src: A pointer to character.
 * @n: An integer as characters count will be copied.
 *
 * Return: A pointer to destination character.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}
