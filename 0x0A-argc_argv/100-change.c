#include <stdio.h>
#include <stdlib.h>

/**
 * main - Start point of the program.
 * @ac: An integer represents the count of arguments.
 * @av: A pointer to an array of characters which are the arguments.
 *
 * Return: 0 if success.
 */
int main(int ac, char *av[])
{
int i, money, change;
int coins[] = {25, 10, 5, 2, 1};

if (ac != 2)
{
printf("Error\n");
return (1);
}
money = atoi(av[1]);

if (money < 0)
{
printf("0\n");
return (0);
}

change = 0;
for (i = 0; i < 5 && money >= 0; i++)
{
while (money >= coins[i])
{
money -= coins[i];
change++;
}
}
printf("%d\n", change);

return (0);
}
