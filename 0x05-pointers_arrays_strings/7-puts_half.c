#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: Pointer to a string.
 * Description: A function that prints half of a string,
 * followed by a new line, and should print the second half of the string,
 * Also if the number of characters is odd,
 * the function should print the last n characters of the string.
 *
 * Return: void.
 */
void puts_half(char *str)
{
int i;
int start = 0;
int length = 0;

for (i = 0; str[i] != '\0'; i++)
{
length++;
}
start = (length / 2);
if ((length % 2) == 1)
{
start = ((length + 1) / 2);
}
for (i = start; str[i] != '\0' ; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
