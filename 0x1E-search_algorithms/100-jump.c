#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm.
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: return -1 if value not in array or array is NULL,
 * else print the value searched for.
 */
int jump_search(int *array, size_t size, int value)
{
size_t jump, step, i;

if (array == NULL || size == 0)
return (-1);

step = sqrt(size);
for (i = jump = 0; jump < size && array[jump] < value;)
{
printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
i = jump;
jump += step;
}
printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

jump = jump < size - 1 ? jump : size - 1;
for (; i < jump && array[i] < value; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
}
printf("Value checked array[%ld] = [%d]\n", i, array[i]);

return (array[i] == value ? (int)i : -1);
}
