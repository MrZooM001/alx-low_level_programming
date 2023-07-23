#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - Print a single character that passed as a parameter.
 * @args: A list of parameters passed as variadic function parameters.
 *
 * Return: Void.
 */
void print_char(va_list args)
{
printf("%c", va_arg(args, int));
}

/**
 * print_int - Print an integer that passed as parameter.
 * @args: A list of parameters passed as variadic function parameters.
 *
 * Return: Void.
 */
void print_int(va_list args)
{
printf("%d", va_arg(args, int));
}

/**
 * print_float - Print an integer that passed as parameter.
 * @args: A list of parameters passed as variadic function parameters.
 *
 * Return: Void.
 */
void print_float(va_list args)
{
printf("%f", va_arg(args, double));
}

/**
 * print_string - Print a string that passed as parameter.
 * @args: A list of parameters passed as variadic function parameters.
 *
 * Return: Void.
 */
void print_string(va_list args)
{
char *str = va_arg(args, char *);
if (str == NULL)
{
printf("(nil)");
return;
}
printf("%s", str);
}

/**
 * print_all - Print anything that passed as parameters.
 * @format: A const pointer to a const character as list of types of
 * parameters passed to the function.
 *
 * Return: Void.
 */
void print_all(const char *const format, ...)
{
char *spr;
int i, n;
va_list args;

spr = ", ";
va_start(args, format);
n = 0, i = 0;
while (format != NULL && format[i] != '\0')
{
i++;
}
while (format != NULL && format[n] != '\0')
{
if (n == (i - 1))
{
spr = "";
}
switch (format[n])
{
case 'c':
print_char(args);
printf("%s", spr);
break;
case 'i':
print_int(args);
printf("%s", spr);
break;
case 'f':
print_float(args);
printf("%s", spr);
break;
case 's':
print_string(args);
printf("%s", spr);
break;
}
n++;
}
putchar('\n');
va_end(args);
}
