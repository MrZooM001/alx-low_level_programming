#include "main.h"

/**
 * _puts_recursion - Print a string.
 * @s: A pointer to character.
 *
 * Return: Void.
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}