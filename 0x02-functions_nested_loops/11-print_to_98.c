#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: An integer number to be computed
 *
 * Return: void
 */
void print_to_98(int n)
{
int i;

if (n < 98)
{
for (i = n; i <= 98; i++)
{
if (i == 98)
{
printf("%d", i);
}
else
{
printf("%d, ", i);
}
}
}
else if (n > 98)
{
for (i = n; i >= 98; i--)
{
if (i == 98)
{
printf("%d", i);
}
else
{
printf("%d, ", i);
}
}
}
else if (n == 98)
{
printf("%d", n);
}
putchar('\n');
}
