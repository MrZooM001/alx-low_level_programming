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

i = 0;
while (s[i] != '\0')
{
char *a = accept;
j = 0;
while (a[j] != '\0')
{
if (s[i] == a[j])
{
return (&s[i]);
}
j++;
}
i++;
}

return (s);
}
