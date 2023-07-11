#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenate all the arguments of the program.
 * @ac: An integer as count of arguments.
 * @av: A pointer to a pointer to a character as an array.
 *
 * Return: A pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
int i, length;
char *arr, *arg, *result;

if (ac == 0 || av == NULL)
return (NULL);

length = 0;
for (i = 0; i < ac; i++)
{
arg = av[i];
while (*arg != '\0')
{
length++;
arg++;
}
length++;
}

arr = malloc(sizeof(*arr) * (length + 1));
if (arr == NULL)
{
return (NULL);
}

result = arr;
for (i = 0; i < ac; i++)
{
arg = av[i];
while (*arg != '\0')
{
*arr = *arg;
arr++;
arg++;
}
*arr = '\n';
arr++;
}
*arr = '\0';

return (result);
}
