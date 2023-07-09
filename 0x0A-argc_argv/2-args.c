#include <stdio.h>

/**
 * main - Start point of the program.
 * @argc: An integer represents the count of arguments.
 * @argv: A pointer to an array of characters which are the arguments.
 *
 * Return: 0 if success.
 */

int main(int argc, char *argv[])
{
int i;

for (i = 1; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}
