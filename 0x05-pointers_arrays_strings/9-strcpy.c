#include "main.h"

/**
 * _strcpy - copies the string pointed to in source, to the buffer in destination.
 * @dest: Pointer to a string.
 * @src: Pointer to a string.
 * Description: A function that copies the string pointed to by src, 
 * to the buffer pointed to by dest, including the terminating null byte (\0),
 * and returns the pointer of destination.
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
