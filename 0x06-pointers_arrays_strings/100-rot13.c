#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: A pointer to a character.
 *
 * Return: Character.
 */
char *rot13(char *str)
{
char *ptr = str;

while (*ptr != '\0')
{
if ((*ptr >= 'a' && *ptr <= 'm') || (*ptr >= 'A' && *ptr <= 'M'))
{
*ptr += 13;
}
else if ((*ptr >= 'n' && *ptr <= 'z') || (*ptr >= 'N' && *ptr <= 'Z'))
{
*ptr -= 13;
}
ptr++;
}

return (str);
}
