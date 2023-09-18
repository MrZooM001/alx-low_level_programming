#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "main.h"
/**
 * _isupper - checks if given character is uppercase
 * @c: An integer number to checked
 *
 * Return: 1 if true, 0 otherwise
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
