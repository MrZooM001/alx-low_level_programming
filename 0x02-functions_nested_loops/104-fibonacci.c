#include <stdio.h>

/**
 * main - Start point of the program
 * Description: Prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: 0 if success
 */
int main(void)
{
unsigned long int a, b, r;
int i;

a = 0;
b = 1;
for (i = 1; i <= 98; i++)
{
r = a + b;
if (i < 98)
{
printf("%lu, ", r);
}
else
{
printf("%lu\n", r);
}
a = b;
b = r;
}

return (0);
}
