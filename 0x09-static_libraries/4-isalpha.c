#include "main.h"

/**
 * _isalpha - checks if given character is a letter, lowercase or uppercase
 * @c: integer number to checked as lowercase character
 *
 * Return: 1 if true, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
