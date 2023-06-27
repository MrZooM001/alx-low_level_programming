#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: Pointer to a string.
 * Description: A function that prints a string,
 * followed by a new line, to standard output.
 *
 * Return: void.
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
