#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: A pointer to a character.
 *
 * Return: Character.
 */
char *rot13(char *str)
{
int i, j;
char alpha1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char alpha2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (str[i] == alpha1[j])
{
str[i] = alpha2[j];
break;
}
}
}

return (str);
}
