#include "main.h"

/**
 * print_number -  prints an integer number
 * @n: An integer number to be printed
 *
 * Return: void
 */
void print_number(int n)
{
int r;

r = 0;
if (n == 0)
{
_putchar('0');
}
if (n < 0)
{
_putchar('-');
n = -n;
}
while (n > 0)
{
r = r * 10 + n % 10;
n = n / 10;
}
while (r > 0)
{
_putchar((r % 10) + '0');
r = r / 10;
}
}
