#include <stdio.h>

/**
 * main - Start point of the program
 * Description: Finds and prints the sum of the even-valued
 * based on the terms in the Fibonacci sequence
 * whose values do not exceed 4,000,000.
 *
 * Return: 0 if success
 */
int main(void)
{
long int a, b, r, s;
int i;

a = 0;
b = 1;
r = 0;
while (r <= 4000000)
{
r = a + b;
if (r % 2 == 0)
{
s += r;
}
a = b;
b = r;
}
printf("%li\n", s);

return (0);
}
