#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition of two arguments.
 * @a: An integer as first argument.
 * @b: An integer as second argument.
 *
 * Return: Sum of arguments.
 */
int op_add(int a, int b)
{
int r;

r = a + b;
return (r);
}

/**
 * op_sub - Subtraction of two arguments.
 * @a: An integer as first argument.
 * @b: An integer as second argument.
 *
 * Return: Subtraction of arguments.
 */
int op_sub(int a, int b)
{
int r;

r = a - b;
return (r);
}

/**
 * op_mul - Multiplication of two arguments.
 * @a: An integer as first argument.
 * @b: An integer as second argument.
 *
 * Return: Result of multiplication of arguments.
 */
int op_mul(int a, int b)
{
int r;

r = a * b;
return (r);
}

/**
 * op_div - Division of of two arguments.
 * @a: An integer as first argument.
 * @b: An integer as second argument.
 *
 * Return: Result of division of argument.
 */
int op_div(int a, int b)
{
int r;

if (b == 0)
{
printf("Error\n");
exit(100);
}

r = a / b;
return (r);
}

/**
 * op_mod - Remainder of the division of two arguments.
 * @a: An integer as first argument.
 * @b: An integer as second .
 *
 * Return: Remainder of division of argument.
 */
int op_mod(int a, int b)
{
int r;

if (b == 0)
{
printf("Error\n");
exit(100);
}

r = a % b;
return (r);
}
