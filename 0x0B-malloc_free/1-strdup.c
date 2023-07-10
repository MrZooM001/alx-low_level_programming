#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Return a pointer to a newly allocated space in memory.
 * @str: A pointer to a character.
 *
 * Return: eturns a pointer to a new string
 * which is a duplicate of the string str.
 */
char *_strdup(char *str)
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
