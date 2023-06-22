#include "main.h"

/**
 * print_triangle -  prints a triangle
 * @size: An integer number
 *
 * Return: void
 */
void print_triangle(int size)
{
int i;
int j;
int x;

i = 0;
j = 0;
if (size > 0)
{
x = size - 2;
while (i < size)
{
while (j < size)
{
if (j <= x)
{
_putchar(32);
}
else if (j >= x)
{
_putchar(35);
}
j++;
}
x--;
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
