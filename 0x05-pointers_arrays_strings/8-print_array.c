#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers.
 * @a: Pointer to an integer.
 * @n: An integer for iteration.
 * Description: A function that prints n elements of an array of integers
 *
 * Return: void.
 */
void print_array(int *a, int n)
{
int i;
if (n <= 0)
{
printf("\n");
}
else if (n > 0)
{
for (i = 0; i < n; i++)
{
if (i != n - 1)
{
printf("%d, ", a[i]);
}
else
{
printf("%d\n", a[i]);
}
}
}
}
