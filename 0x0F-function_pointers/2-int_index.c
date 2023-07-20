#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @array: Pointer to an array of integers.
 * @size: Size of the given array.
 * @cmp: Function pointer.
 *
 * Return: An integer as index if success, else return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size < 1 || array == NULL || cmp == NULL)
{
return (-1);
}

for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}

return (-1);
}
