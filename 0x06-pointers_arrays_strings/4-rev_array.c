#include "main.h"

/**
 * reverse_array - Reverse contents of an array of integers.
 * @a: A pointer to an integer.
 * @n: An integer.
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
int tmp;
int arr_start = 0;
int arr_end = n - 1;

while (arr_start < arr_end)
{
tmp = a[arr_start];
a[arr_start] = a[arr_end];
a[arr_end] = tmp;
arr_start++;
arr_end--;
}
}
