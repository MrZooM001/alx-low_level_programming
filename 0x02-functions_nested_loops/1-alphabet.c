#include <unistd.h>

/**
 * print_alphabet - writes alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
char c;
int _putchar(char c);

c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
