#include "main.h"

/**
 * is_prime_number - Check for an integer is a prime number.
 * @n: An integer as the given number.
 *
 * Return: An integer.
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}

return (_prime_number_helper(n, 2));
}

/**
 * _prime_number_helper - Helper function to check for prime number.
 * @n: An integer as the given number.
 * @d: An integer as the devisor.
 *
 * Return: An integer.
 */
int _prime_number_helper(int n, int d)
{
if ((d * d) > n)
{
return (1);
}
if ((n % d) == 0)
{
return (0);
}

return (_prime_number_helper(n, d + 1));
}
