#include "main.h"

/**
 * _islower - checks if given character is lowercase
 * @c: integer number to checked as lowercase character
 *
 * Return: 1 if true, 0 otherwise
 */
int _islower(int c)
{
if (c >= 97 && c <= 122 )
{
return (1);
}
else
{
return (0);
}
}
