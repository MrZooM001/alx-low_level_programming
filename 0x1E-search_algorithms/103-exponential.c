#include <stdio.h>
#include "search_algos.h"

int _binary_search(int *array, size_t left, size_t right, int value);


/**
 * exponential_search - searches for a value in a sorted array
 * of integers using the Exponential search algorithm.
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: return -1 if value not in array or array is NULL,
 * else print the value searched for.
 */
int exponential_search(int *array, size_t size, int value)
{
size_t i, right;

if (array == NULL)
return (-1);

i = 0;
if (array[0] != value)
{
for (i = 1; i < size && array[i] <= value; i = i * 2)
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
}

right = i < size ? i : size - 1;
printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
return (_binary_search(array, i / 2, right, value));
}


/**
 * _binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm.
 *
 * @array: A pointer to the first element of the array to search in.
 * @right: Last Number of elements in sub-array.
 * @left: First Number of elements in sub-array.
 * @value: Value to search for.
 *
 * Return: return -1 if value not in array or array is NULL,
 * else print the value searched for.
 */
int _binary_search(int *array, size_t right, size_t left, int value)
{
size_t i;

if (array == NULL)
return (-1);

while (right >= left)
{
printf("Searching in array: ");
for (i = left; i < right; i++)
{
printf("%d, ", array[i]);
}
printf("%d\n", array[i]);

i = left + (right - left) / 2;
if (array[i] == value)
return (i);

if (array[i] > value)
right = i - 1;
else
left = i + 1;
}

return (-1);
}
