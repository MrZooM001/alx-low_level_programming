#include "main.h"

/**
 * clear_bit - flip a number of bits to get from one number to another.
 * @n: A pointer to an unsigned long integer as fist number of bits to flip from.
 * @m: A unsigned integer as second number of bits to flip to.
 *
 * Return: Number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i;
unsigned int flip_nums;

i = 0;
flip_nums = 0;
for (i = 0; i <= 63; i++)
{
if (n & 1 != m & 1)
{
flip_nums++;
}
else
{
n >>= 1;
m >>= 1;
i++;
}
}
return (flip_nums);
}
