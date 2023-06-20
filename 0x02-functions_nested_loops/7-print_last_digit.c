#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: integer number to checked
 *
 * Return: 0 if success
 */
int print_last_digit(int n)
{
int ldig = n % 10;
if (ldig < 0)
{
ldig = ldig * -1;
}
_putchar(ldig);

return (ldig);
}
