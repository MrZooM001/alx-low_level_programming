#include <stdio.h>

/**
 * main - Start point of the program
 *
 * Return: 0 if success
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if ( i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else if (i == 100)
{
printf("%i", i);
}
else
{
printf("%i ", i);
}
}
putchar('\n');

return (0);
}
