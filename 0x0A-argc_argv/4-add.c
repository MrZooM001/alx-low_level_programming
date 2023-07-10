#include <stdio.h>
#include <stdlib.h>

/**
 * main - Start point of the program.
 * @argc: An integer represents the count of arguments.
 * @argv: A pointer to an array of characters which are the arguments.
 *
 * Return: 0 if success.
 */

int main(int argc, char *argv[])
{
int i, sum, digit;
char *ptr;

sum = 0;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
digit = strtol(argv[i], &ptr, 10);
if (*ptr == '\0')
{
sum += digit;
}
else
{
printf("Error\n");

return (1);
}
}
}
printf("%d\n", sum);

return (0);
}
