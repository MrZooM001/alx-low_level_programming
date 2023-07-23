#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Print strings that passed as parameters.
 * @separator: A const pointer to character.
 * @n: An unsigned integer as number of passed parameters.
 *
 * Return: Void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *spr, *str;
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
if (n > 0)
{
printf("%s", va_arg(args, char *));
}
for (i = 1; i < n; i++)
{
str = va_arg(args, char *);
if (str == NULL)
{
str = "(nil)";
}
printf("%s%s", spr, str);
}
va_end(args);
putchar('\n');
}
