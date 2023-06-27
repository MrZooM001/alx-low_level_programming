#include "main.h"

/**
 * print_rev - Prints a string, in reverse.
 * @s: Pointer to a string.
 * Description: prints a string, in reverse,
 * followed by a new line using _putchar().
 *
 * Return: void.
 */
void print_rev(char *s)
{
int i, length;

length = 0;
while (*s != '\0')
{
length++;
s++;
}
s--;
for (i = length; i > 0; i--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
