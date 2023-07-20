#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Program's start point.
 * @argc: An integer as arguments count.
 * @argv: A pointer to character as string of arguments in array.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
int a, b;
int (*op)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}

op = get_op_func(argv[2]);
if (op == NULL)
{
printf("Error\n");
exit(99);
}

a = atoi(argv[1]);
b = atoi(argv[3]);

printf("%d\n", op(a, b));

return (0);
}
