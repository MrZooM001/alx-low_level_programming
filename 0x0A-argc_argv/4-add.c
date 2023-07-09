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
int i, sum;

sum = 0;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
if (*argv[i] >= '0' && *argv[i] <= '9')
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");

return (1);
}
}
printf("%d\n", sum);

return (0);
}
else
{
printf("0\n");
return (1);
}
}
