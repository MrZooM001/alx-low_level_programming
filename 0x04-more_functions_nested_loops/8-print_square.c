#include "main.h"

/**
 * print_square - A function that draws a diagonal line on terminal
 * @size: An integer number
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
_putchar(35);
j++;
}
i++;
j = 0;
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
