#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
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
