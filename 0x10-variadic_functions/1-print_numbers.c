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
unsigned int i;
char *spr;
va_list args;

if (separator == NULL)
{
spr = "";
}
else
{
spr = (char *)separator;
}

va_start(args, n);
printf("%d", va_arg(args, unsigned int));
for (i = 1; i < n; i++)
{
printf("%s%d", spr, va_arg(args, unsigned int));
}
va_end(args);
putchar('\n');
}
