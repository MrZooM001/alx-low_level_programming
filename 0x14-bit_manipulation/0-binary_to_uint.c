#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number
 * to an unsigned int.
 * @b: A const pointer to character.
 *
 * Return:  converted number, or 0 if NULL or failed.
 */
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int n;
const char *c;

if (*b == '\0')
{
return (0);
}
c = b;
n = 0;
for (i = 0; c[i] != '\0'; i++)
{
if (c[i] < '0' || c[i] > '1')
{
return (0);
}
n = (2 * n) +(c[i] - '0');
}

return (n);
}
