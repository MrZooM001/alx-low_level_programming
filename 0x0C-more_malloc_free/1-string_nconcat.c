#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Function that concatenates two strings.
 * @s1: A pointer to character as first string.
 * @s2: A pointer to character as second string.
 * @n: An unsigned integer as extended length.
 *
 * Return: Pointer to the newly allocated space in memory
 * for the concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, s1_len;
char *ptr;
char *str_len = s1;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

s1_len = 0;
while (*str_len != '\0')
{
str_len++;
s1_len++;
}

ptr = malloc(sizeof(*s1) * ((s1_len + n) + 1));
if (ptr == NULL)
{
return (NULL);
}

j = 0;
for (i = 0; i < (s1_len + n); i++)
{
if (i < s1_len)
{
ptr[i] = s1[i];
}
else
{
ptr[i] = s2[j++];
}
}
ptr[i] = '\0';

return (ptr);
}
