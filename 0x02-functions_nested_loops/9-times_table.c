#include "main.h"

/**
 * times_tabl - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
int i;
int j;
int x;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
x = i * j;
if (j == 0)
{
_putchar('0');
}
else if (x < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + x % 10);
}
else
{
_putchar(',');
_putchar(' ');
_putchar('0' + x / 10);
_putchar('0' + x % 10);
}
}
j = 0;
_putchar('\n');
}
}
