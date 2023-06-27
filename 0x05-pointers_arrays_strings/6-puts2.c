#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: Pointer to a string.
 * Description: A function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * Return: void.
 */
void puts2(char *str)
{
if (*str % 2 == 0)
{
while (*str != '\0')
{
if (*str % 2 == 0)
{
putchar(*str);
}
str++;
}
}
else if (*str % 2 != 0)
{
while (*str != '\0')
{
if (*str % 2 != 0)
{
putchar(*str);
}
str++;
}
}
putchar('\n');
}
