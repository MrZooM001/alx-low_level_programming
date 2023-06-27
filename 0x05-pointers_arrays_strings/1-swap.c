#include "main.h"

/**
 * swap_int - Swap values of two integers.
 * @a: Pointer to an integer number to be swapped.
 * @b: Pointer to an integer number to be swapped.
 * Description: A function that swaps the values
 * of two integers.
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;
}
