#include "main.h"

/**
 * print_alphabet - writes alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
char c;
int i;

c = 'a';
i = 0;
while (i < 10)
{
while (c <= 'z')
{
putchar(c);
c++;
}
i++;
c = 'a';
putchar('\n');
}
}
