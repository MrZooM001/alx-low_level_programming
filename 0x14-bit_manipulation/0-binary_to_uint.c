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

if (!b)
{
return (0);
}
n = 0;
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] == '1' || b[i] == '0')
{
n = n * 2 + (b[i] - '0');
}
else
{
return (0);
}
}

return (n);
}
