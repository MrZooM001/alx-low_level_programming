#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "main.h"
/**
 * _strcmp - Compare two strings.
 * @s1: A pointer to character.
 * @s2: A pointer to character.
 *
 * Return: -1 if s1 < s2, 1 if s1 > s2, 0 if equals.
 */
int _strcmp(char *s1, char *s2)
{
int i;

i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}

return (0);
}
