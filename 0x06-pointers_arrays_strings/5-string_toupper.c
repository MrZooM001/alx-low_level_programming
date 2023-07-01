#include "main.h"

/**
 * string_toupper - Change lowercase of a string to uppercase.
 * @str: A pointer to a character.
 *
 * Return: Character.
 */
char *string_toupper(char *str)
{
char *ptr = str;

while (*ptr != '\0')
{
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr = *ptr - ('a' - 'A');
}
ptr++;
}

return (str);
}
