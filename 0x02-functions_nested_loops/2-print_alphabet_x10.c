#include "main.h"

/**
 * print_alphabet_x10 - writes alphabet in lowercase 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
char c;
int i;

c = 'a';
i = 0;
while (i < 10)
{
while (c <= 'z')
{
_putchar(c);
c++;
}
i++;
c = 'a';
_putchar('\n');
}
}
