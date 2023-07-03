#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: A pointer to a string.
 *
 * Return: An integer if success, 0 if no numbers.
 */
int _atoi(char *s)
{
int i, j, x, length, num, result;

i = 0; /* Iteration to keep track of the current position in the string */
j = 0; /* the number of negative signs encountered */
x = 0; /* a flag for indicating whether a number has been found */
length = 0; /* the length of the string */
num = 0; /* the current digit */
result = 0; /* the final result */

while (s[length] != '\0')
{
length++;
}

while (i < length && x == 0)
{
if (s[i] == '-')
{
++j;
}
if (s[i] >= '0' && s[i] <= '9')
{
num = s[i] - '0';
if (j % 2)
{
num = -num;
}
result = result * 10 + num;
x = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
{
break;
}
x = 0;
}
i++;
}
if (x == 0)
{
return (0);
}

return (result);
}
