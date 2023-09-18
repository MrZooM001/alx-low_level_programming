#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "main.h"
/**
 * _strstr - Locates a substring.
 * @haystack: A pointer to character.
 * @needle: A pointer to character.
 *
 * Return: A pointer to beginning of located string.
 */
char *_strstr(char *haystack, char *needle)
{
int i, j, count;

i = 0, count = 0;
while (haystack[i] != '\0')
{
j = 0;
while (haystack[i + count] != '\0' && needle[j + count] != '\0'
&& haystack[i + count] == needle[j + count])
{
if (haystack[i + count] != needle[j + count])
{
break;
}
count++;
}
if (needle[j + count] == '\0')
{
return (&haystack[i]);
}
j++;
i++;
}

return (0);
}
