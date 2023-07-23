#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Print numbers that passed as parameters.
 * @separator: A const pointer to character.
 * @n: An unsigned integer as number of passed parameters.
 *
 * Return: Void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i, num;
va_list args;

va_start(args, n);
for (i = 0; i < n; i++)
{
num = va_arg(args, unsigned int);
printf("%d", num);
if (separator != NULL)
{
if (i != (n - 1))
{
printf("%s", separator);
}
}
}
va_end(args);
_putchar('\n');
}
