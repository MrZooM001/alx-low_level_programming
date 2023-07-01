#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: A pointer to a character.
 *
 * Return: Character.
 */
char *leet(char *str)
{
char *ptr = str;
char c;

while (*ptr != '\0')
{
c = *ptr;

if ((c == 'a') || (c == 'A'))
{
*ptr = '4';
}
else if ((c == 'e') || (c == 'E'))
{
*ptr = '3';
}
else if ((c == 'o') || (c == 'O'))
{
*ptr = '0';
}
else if ((c == 't') || (c == 'T'))
{
*ptr = '7';
}
else if ((c == 'l') || (c == 'L'))
{
*ptr = '1';
}
ptr++;
}

return (str);
}
