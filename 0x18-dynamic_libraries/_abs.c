#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "main.h"

/**
 * _abs - Compute the absolute value of a given integer number
 * @n: integer number to checked
 *
 * Return: 0 if success
 */
int _abs(int n)
{

if (n < 0)
{
return (-n);
}
else
{
return (n);
}
}
