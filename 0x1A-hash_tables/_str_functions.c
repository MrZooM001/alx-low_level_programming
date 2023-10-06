/*#include "hash_tables.h"

/**
 * _strcmp - Compare two strings.
 * @s1: A pointer to character.
 * @s2: A pointer to character.
 *
 * Return: -1 if s1 < s2, 1 if s1 > s2, 0 if equals.
 */
int _strcmp(const char *s1, const char *s2)
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

/**
 * _strdup - Return a pointer to a newly allocated space in memory.
 * @str: A pointer to a character.
 *
 * Return: eturns a pointer to a new string
 * which is a duplicate of the string str.
 */
char *_strdup(const char *str)
{
int i, length;
char *arr;

if (str == NULL)
return (NULL);

length = 0;
while (*(str + length) != '\0')
{
length++;
}
arr = malloc(((length)*(sizeof(*arr))) + 1);
if (arr == NULL)
return (NULL);

for (i = 0; i < length; i++)
{
arr[i] = str[i];
}
arr[i] = '\0';

return (arr);
}

/**
 * _strcpy - copies the string pointed to in source.
 * @dest: Pointer to a string.
 * @src: Pointer to a string.
 *
 * Return: void.
 */
char *_strcpy(char *dest, const char *src)
{
int i;

for (i = 0; *(src + i) != '\0'; i++)
{
dest[i] = *(src + i);
}
dest[i] = '\0';

return (dest);
}
*/
