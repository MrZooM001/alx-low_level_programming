#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: A pointer to a character.
 *
 * Return: An integer.
 */
int is_palindrome(char *s)
{
int length = _str_length(s);
if (length <= 1)
{
return (1);
}

return (_palindrome_helper(s, 0, length - 1));
}

/**
 * _palindrome_helper - Helper function to if a string is a palindrome.
 * @s: A pointer to a character.
 * @x: An integer as the start value.
 * @y: An integer as the end value.
 *
 * Return: An integer.
 */
int _palindrome_helper(char *s, int x, int y)
{
if (x >= y)
{
return (1);
}
if (s[x] != s[y])
{
return (0);
}

return (_palindrome_helper(s, x + 1, y - 1));
}

/**
 * _str_length - Helper function to get string length.
 * @s: A pointer to a character.
 *
 * Return: An integer.
 */
int _str_length(char *s)
{
if (*s != '\0')
{
return (0);
}

return (1 + _str_length(s + 1));
}
