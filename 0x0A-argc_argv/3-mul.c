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
int i, mul;

mul = 1;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
mul *= atoi(argv[i]);
}
}
else
{
printf("Error\n");
}
printf("%d\n", mul);

return (0);
}
