#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
char *c, *r;
int d;

c = (char *) &d;
r = *c + '0';
return (r);
}
