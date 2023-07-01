#include "main.h"

/**
 * cap_string - Change uppercase of a string to lowercase.
 * @str: A pointer to a character.
 *
 * Return: Character.
 */
char *cap_string(char *str)
{
char *ptr = str;

while (*ptr != '\0')
{
if (*ptr >= 'A' && *ptr <= 'Z')
{
*ptr = *ptr + ('a' - 'A');
}
ptr++;
}

return (str);
}
