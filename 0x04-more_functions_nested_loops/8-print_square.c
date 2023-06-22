#include "main.h"

/**
 * print_square - prints a square
 * @n: An integer number
 *
 * Return: void
 */
void print_square(int size)
{
int i, j;

i = 0;
j = 0;
if (size > 0)
{
while (i < size)
{
while (j < size)
{
putchar(35);
j++;
}
i++;
j = 0;
putchar('\n');
}
}
}
