#include <stdlib.h>
#include "main.h"

/**
 * _strlen - Function that gets string length.
 * @str: A pointer to character as a string.
 *
 * Return: An integer as length of a string.
 */
int _strlen(char *str)
{
int length;

length = 0;

while (str[length] != '\0')
{
length++;
}
return (length);
}

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
unsigned int i, j, s1_len, s2_len, total_length;
char *ptr;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

s1_len = _strlen(s1);
s2_len = _strlen(s2);

if (n >= s2_len)
{
total_length = s1_len + s2_len + 1;
}

ptr = malloc(total_length);
if (ptr == NULL)
{
return (NULL);
}

i = 0;
while (i < s1_len)
{
ptr[i] = s1[i];
i++;
}
j = 0;
while (j < s2_len)
{
ptr[i + j] = s2[j];
j++;
}
ptr[i + j] = '\0';

return (ptr);
}
