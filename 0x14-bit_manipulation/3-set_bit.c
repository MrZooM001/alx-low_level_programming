#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to an unsigned long integer as number of bits to set to 1.
 * @index: A unsigned integer as the index 0 of the bits to set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int *bit_value;

if (index > 63)
{
return (-1);
}
else
{
*bit_value = *n | 1 << index;
return (1);
}
}
