#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to a string.
 * Description: A function that returns the length of a string.
 *
 * Return: length of a string.
 */
int _strlen(char *s)
{
int length;

length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
