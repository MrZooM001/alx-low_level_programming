#include "main.h"

/**
 * _memcpy - Copy memory area.
 * @dest: A pointer to character.
 * @src: A pointer to character.
 * @n: An integer as characters count will be copied.
 *
 * Return: A pointer to the memory area s.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
char *tmp_src = src;
char *tmp_dest = dest;

for (i = 0; i < n; i++)
{
tmp_dest[i] = tmp_src[i];
}

return (dest);
}
