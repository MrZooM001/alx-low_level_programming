#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: A pointer to a character.
 * @s2: A pointer to a character.
 *
 * Return: A pointer that point to a newly allocated space
 * in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated.
 */
char *str_concat(char *s1, char *s2)
{
int i, j, s1_len, s2_len;
char *arr;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

s1_len = 0, s2_len = 0;
while (*(s1 + s1_len) != '\0')
{
s1_len++;
}
while (*(s2 + s2_len) != '\0')
{
s2_len++;
}
arr = malloc(((s1_len + s2_len)*(sizeof(*arr))) + 1);

if (arr == NULL)
return (NULL);

for (i = 0; i < s1_len; i++)
{
arr[i] = s1[i];
}
for (j = 0; j < s2_len; j++)
{
arr[i] = s2[j];
i++;
}
arr[i] = '\0';

return (arr);
}
