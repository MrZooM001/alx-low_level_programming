#include "main.h"

/**
 * times_tabl - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
int i, j, x;

i = j = 0;
while (i < 10)
{
while (j < 10)
{
x = i * j;
if (x < 10)
{
_putchar(' ');
_putchar('0' + x % 10);
}
else 
{
_putchar('0' + x / 10);
_putchar('0' + x % 10);
}
if (j != 9)
{
_putchar(',');
_putchar(' ');
}
j++;
}
i++;
j = 0;
_putchar('\n');
}
}
