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
long int a, b, r;
int i;

a = 0;
b = 1;
for (i = 1; i <= 50; i++)
{
r = a + b;
if (i < 50)
{
printf("%li, ", r);
}
else
{
printf("%li\n", r);
}
a = b;
b = r;
}

return (0);
}
