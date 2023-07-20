#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function pointer on each element of an array.
 * @array: Pointer to an array of integers.
 * @size: Size of the given array.
 * @action: Function pointer.
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array == NULL || action == NULL)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
