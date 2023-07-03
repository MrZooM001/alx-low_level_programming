#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: A pointer to character.
 * @accept: A pointer to character.
 *
 * Return: A pointer to first occurance in the string.
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *a = accept;
while (*a != '\0')
{
if (*s == *a)
{
return s;
}
a++;
}
s++;
}

return (s);
}
