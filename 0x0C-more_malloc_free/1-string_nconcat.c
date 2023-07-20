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
unsigned int i, j, s1_len, size;
char *ptr;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

s1_len = 0;
while (s1[s1_len] != '\0')
{
s1_len++;
}
size = sizeof(*ptr) * (s1_len + n);

ptr = malloc(size + 1);
if (ptr == NULL)
{
return (NULL);
}

i = 0;
while (i < size && s1[i] != '\0')
{
ptr[i] = s1[i];
i++;
}
j = 0;
while (j < size && s2[j] != '\0')
{
ptr[i] = s1[j];
i++;
j++;
}

ptr[i] = '\0';

return (ptr);
}
