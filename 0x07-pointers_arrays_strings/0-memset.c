#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: A pointer to character.
 * @b: A character with constant byte.
 * @n: An integer as characters count will be filled.
 *
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;

for (i = 0; i < n; i++)
{
s[i] = b;
n--;
}

return (s);
}
