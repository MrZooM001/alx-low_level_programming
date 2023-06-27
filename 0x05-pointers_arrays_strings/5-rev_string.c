#include "main.h"

/**
 * rev_string - Reverse a string.
 * @s: Pointer to a string.
 * Description: A function that takes a pointer of string
 * as parameter, then reverses it.
 *
 * Return: void.
 */
void rev_string(char *s)
{
int i, length;
char tmp;

tmp = s[0];
length = 0;

while (s[length] != '\0')
{
length++;
}

for (i = 0; i < length; i++)
{
length--;
tmp = s[i];
s[i] = s[length];
s[length] = tmp;
}
}
