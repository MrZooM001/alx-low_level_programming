#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Return a pointer to a 2D array of integers.
 * @width: An integer as columns of an array.
 * @height:  An integer as rows of an array.
 *
 * Return: An integer
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **arr;

if (width <= 0 || height <= 0)
return (NULL);

arr = malloc(sizeof(*arr) * height);

if (arr == NULL)
{
return (NULL);
}

for (i = 0; i < height; i++)
{
arr[i] = malloc(sizeof(**arr) * width);

if (arr[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(arr[j]);
}
free(arr);
return (NULL);
}

for (j = 0; j < width; j++)
{
arr[i][j] = 0;
}
}

return (arr);
}
