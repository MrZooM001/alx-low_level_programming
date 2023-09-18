#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "main.h"
/**
 * _strncpy - Copy a string to another string
 * @dest: A pointer to character.
 * @src: A pointer to character.
 * @n: An integer represents max characters will be copied.
 *
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
char *p_dest = dest;

for (i = 0; *src != '\0' && i < n; i++)
{
*p_dest = *src;
p_dest++;
src++;
}
for (; i < n; i++)
{
*p_dest = '\0';
p_dest++;
}

return (dest);
}
