#include "main.h"

/**
 * _strspn - Get length of a prefix substring.
 * @s: A pointer to character.
 * @accept: A pointer to character.
 *
 * Return: An integer as number of bytes in the initial segment.
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j, count;

i = 0, count = 0;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
count++;
break;
}
j++;
}
if (accept[j] == '\0')
{
break;
}
i++;
}

return (count);
}
