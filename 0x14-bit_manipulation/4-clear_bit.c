#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to an unsigned long integer as number of bits to set to 0.
 * @index: A unsigned integer as the index 0 of the bits to set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int bit_calc;
unsigned int bit_size = sizeof(*n) * 8;

if (index >= bit_size)
{
return (-1);
}
else
{
bit_calc = 1;
bit_calc = bit_calc << index;
*n = *n & ~bit_calc;
return (1);
}
}
