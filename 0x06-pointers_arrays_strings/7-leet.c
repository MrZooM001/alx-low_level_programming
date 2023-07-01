#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: A pointer to a character.
 *
 * Return: Character.
 */
char *leet(char *str)
{
int i, j;
char ltrs[] = "aAeEoOtTlL";
char nums[] = "4433007711";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (str[i] == ltrs[j])
{
str[i] = nums[j];
}
}
}

return (str);
}
