#include <stdio.h>

/**
 * main - Start point of the program
 * Description: Prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: 0 if success
 */
int main(void)
{
int a, b, i, r;

a = 1;
b = 2;
for (i = 1; i <= 50; i++)
{
r = a + b;
if (i < 50)
{
printf("%d, ", r);
}
else
{
printf("%d\n", r);
}
a = b;
b = r;
}

return (0);
}
