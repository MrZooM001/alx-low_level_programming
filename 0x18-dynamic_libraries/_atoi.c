#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "main.h"
/**
 * _atoi - Convert a string to an integer.
 * @s: A pointer to a string.
 *
 * Return: An integer if success, 0 if no numbers.
 */
int _atoi(char *s)
{
int i = 0; /*iteration to keep track of the current position in the string*/
int j = 0; /*number of negative signs encountered*/
int x = 0; /*a flag for indicating whether a number has been found*/
int length = 0; /*length of the string */
int num = 0; /*current digit */
int result = 0; /*final result */

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
