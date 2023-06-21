#include "main.h"

/**
 * print_times_table - prints the times table of n times, starting with 0
 * @n: An integer to be computed
 *
 * Return: void
 */
void print_times_table(int n)
{
int i, j, x;

if (n <= 15 && n >= 0)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
x = i * j;
if (j == 0)
putchar('0');
else if (x < 10)
{
putchar(',');
putchar(' ');
putchar(' ');
putchar(' ');
putchar('0' + x % 10);
}
else if (x >= 10 && x < 100)
{
putchar(',');
putchar(' ');
putchar(' ');
putchar('0' + (x / 10) % 10);
putchar('0' + x % 10);
}
else if (x > 99 && x < 1000)
{
putchar(',');
putchar(' ');
putchar('0' + x / 100);
putchar('0' + (x / 10) % 10);
putchar('0' + x % 10);
}
}
j = 0;
putchar('\n');
}
}
}
