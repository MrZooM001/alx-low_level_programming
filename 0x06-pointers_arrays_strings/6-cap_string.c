#include "main.h"

/**
 * cap_string - Change uppercase of a string to lowercase.
 * @str: A pointer to a character.
 *
 * Return: Character.
 */
char *cap_string(char *str)
{
int i = 0;
int cap_nxt = 1;

while(str[i] != '\0')
{
if (str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' ||
str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}' ||
str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
{
cap_nxt = 1;
}
else if (cap_nxt && (str[i] >= 'a' && str[i] <= 'z'))
{
str[i] = str[i] - ('a' - 'A');
cap_nxt = 0;
}
else
{
cap_nxt = 0;
}
i++;
}

return (str);
}
