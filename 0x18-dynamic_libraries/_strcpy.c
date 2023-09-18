#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "main.h"
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
