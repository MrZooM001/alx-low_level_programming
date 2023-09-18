#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "main.h"
/**
 * _strchr - locate a character in a string.
 * @s: A pointer to character.
 * @c: A character to locate.
 *
 * Return: A pointer to first occurance of the character.
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
else if (*(s + 1) == c)
return (s + 1);
s++;
}

return (s + 1);
}
