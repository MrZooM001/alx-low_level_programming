#include "main.h"

/**
 * print_number -  prints an integer number
 * @n: An integer number to be printed
 *
 * Return: void
 */
void print_number(int n)
{
unsigned int x;

x = 0;
if (n < 0)
{
_putchar(45);
x = -n;
}
else
{
x = n;
}
if (x / 10)
{
print_number(x / 10);
}
_putchar((x % 10) + 48);
}
