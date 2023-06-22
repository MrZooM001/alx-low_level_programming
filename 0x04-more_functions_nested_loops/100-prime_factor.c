#include <stdio.h>

/**
 * main - Start point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long int n;
unsigned long int div, max;

n = 612852475143;
div = 2;
while (n != 0)
{
if (n % div != 0)
{
div++;
}
else
{
max = n;
n = n / div;
if (n == 1)
{
printf("%lu\n", max);

break;
}
}
}

return (0);
}
