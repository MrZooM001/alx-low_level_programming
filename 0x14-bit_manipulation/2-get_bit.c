#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: An unsigned long integer as number of bits to search for.
 * @index: A unsigned integer as the index 0 of the founded bytes.
 *
 * Return: The value of the bit at index index
 * or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
int founded_bits;

if (index > 63)
{
return (-1);
}
else
{
founded_bits = (n >> index) & 1;
return (founded_bits);
}
}
