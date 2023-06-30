#include "main.h"

/**
 * _strncat - Concatenates two strings with specific number of characters.
 * @dest: A pointer to character.
 * @src: A pointer to character.
 * @n: An integer represents max characters will be concatenated.
 *
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
char *p_dest = dest;

while (*p_dest != '\0')
{
p_dest++;
}
while (*src != '\0' && n > 0)
{
*p_dest = *src;
p_dest++;
src++;
n--;
}
*p_dest = '\0';

return (dest);
}
