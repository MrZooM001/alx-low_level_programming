#include <stdlib.h>
#include "main.h"

/**
 * create_array - Create & initialize an array of chars with a specific char.
 * @size: An unsigned integer.
 * @c: A character to use in an array's initialization.
 *
 * Return: A pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr;

arr = malloc(sizeof(char) * size);
if (size > 0)
{
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
else
{
return ('\0');
}
}
