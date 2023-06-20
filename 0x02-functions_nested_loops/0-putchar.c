#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to be printed
 *
 * Return: 1 if success
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{

#include <unistd.h>

write(1, &c, 1);

return ((unsigned char)c);
}
