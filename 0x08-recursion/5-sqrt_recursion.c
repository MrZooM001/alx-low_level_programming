#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: An integer as the given number.
 *
 * Return: An integer.
 */
int _sqrt_recursion(int n)
{
return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - Helper function to calculate square root of a number
 * @n: An integer as the given number.
 * @x: An integer as the value of square to compare with.
 *
 * Return: An integer.
 */
int _sqrt_helper(int n, int x)
{
int square;

square = x * x;
if (square == n)
{
return (x);
}
else if (square < n)
{
return (_sqrt_helper(n, x + 1));
}
else
{
return (-1);
}
}
