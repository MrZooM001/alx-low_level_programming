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
int length;

while (*s != '\0')
{
length++;
s++;
}
while (length + 1 != 0)
{
_putchar(*s);
length--;
s--;
}
_putchar('\n');
}
