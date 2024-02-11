#include <stdio.h>
#include "search_algos.h"

int advance_binary_recurs(int *array, size_t left, size_t right, int value);

/**
 * advance_binary_recurs - searches for a value in a sorted array
 * of integers using the Binary search algorithm.
 *
 * @array: A pointer to the first element of the array to search in.
 * @left: First Number of elements in sub-array.
 * @right: Last Number of elements in sub-array.
 * @value: Value to search for.
 *
 * Return: return -1 if value not in array or array is NULL,
 * else print the value searched for.
 */
int advance_binary_recurs(int *array, size_t left, size_t right, int value)
{
size_t i;

if (right < left)
{
return (-1);
}

printf("Searching in array: ");
for (i = left; i < right; i++)
{
printf("%d, ", array[i]);
}
printf("%d\n", array[i]);

i = left + (right - left) / 2;
if (array[i] == value && (i == left || array[i - 1] != value))
{
return (i);
}

if (array[i] >= value)
{
return (advance_binary_recurs(array, left, i, value));
}
return (advance_binary_recurs(array, i + 1, right, value));
}


/**
 * advanced_binary - searches for a value in a sorted array of integers
 * and fixes non-returned index of first value in the array using recursion.
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: return -1 if value not in array or array is NULL,
 * else print the value searched for.
 */
int advanced_binary(int *array, size_t size, int value)
{
if (array == NULL || size == 0)
{
return (-1);
}

return (advance_binary_recurs(array, 0, size - 1, value));
}
