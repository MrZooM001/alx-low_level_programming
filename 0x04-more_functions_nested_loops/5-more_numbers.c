#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
int n, i;

n = 0;
i = 0;
while (i < 10)
{
while (n <= 14)
{
if (n <= 9)
{
putchar(n + '0');
}
else
{
putchar(n / 10 + '0');
putchar(n % 10 + '0');
}
n++;
}
i++;
n = 0;
putchar('\n');
}
}
