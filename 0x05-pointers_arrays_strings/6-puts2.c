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
int i = 0;
int x = 0;
int length = 0;
char *tmp = str;

while (*tmp != '\0')
{
length++;
tmp++;
}
x = length - 1;
for (i = 0; i <= x; i++)
{
if (i % 2 == 0)
{
putchar(str[i]);
}
}
putchar('\n');
}
