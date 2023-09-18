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
int i, j;
char *a;

i = 0;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
a = &s[i];
return (a);
}
j++;
}
i++;
}

return (0);
}
