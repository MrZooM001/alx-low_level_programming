#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array
 * of integers using the Interpolation search algorithm.
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: return -1 if value not in array or array is NULL,
 * else print the value searched for.
 */
int interpolation_search(int *array, size_t size, int value)
{
size_t right, left, i;

if (array == NULL)
return (-1);

for (left = 0, right = size - 1; right >= left;)
{
i = left + (((double)(right - left) / (array[right] - array[left])) * (value - array[left]));
if (i < size)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
}
else
{
printf("Value checked array[%ld] is out of range\n", i);
break;
}

if (array[i] == value)
return (i);

if (array[i] > value)
right = i - 1;
else
left = i + 1;
}

return (-1);
}
