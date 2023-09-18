#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "main.h"
/**
 * _strcat - Concatenates two strings.
 * @dest: A pointer to character.
 * @src: A pointer to character.
 *
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
char *p_dest = dest;

while (*p_dest != '\0')
{
p_dest++;
}
while (*src != '\0')
{
*p_dest = *src;
p_dest++;
src++;
}
*p_dest = '\0';

return (dest);
}
