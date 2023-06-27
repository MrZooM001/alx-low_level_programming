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
int first_index;
int length = 0;
int i = 0;

while (str[i] != '\0')
{
length++;
i++;
}
if (length % 2 == 0)
{
first_index = length / 2;
}
else
{
first_index = (length - 1) / 2;
}
for (i = first_index; i < length; i++)
{
putchar(str[i]);
}
putchar('\n');
}
