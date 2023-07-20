#include <stdlib.h>
#include "main.h"

/**
 * array_range - Function that creates an array of integers.
 * @min: An integer as min of array.
 * @max:  An integer as max of array.
 *
 * Return: A pointer to the newly created array.
 */
int *array_range(int min, int max)
{
int *arr, length, n, i;

if (min > max)
{
return (NULL);
}

length = max - min + 1;
arr = malloc(sizeof(*arr) * length);
if (arr == NULL)
{
return (NULL);
}

for (n = min, i = 0; n <= max && i < length; n++, i++)
{
arr[i] = n;
}

return (arr);
}
