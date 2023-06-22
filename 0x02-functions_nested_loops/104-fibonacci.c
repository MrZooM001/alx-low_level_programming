#include <stdio.h>
#define LARGEST 100000000000

/**
 * main - Start point of the program 
 * Description: Prints the first 98 Fibonacci numbers, 
 * starting with 1 and 2, followed by a new line.
 *
 * Return: 0 if success
 */
int main(void)
{
unsigned long int a, b, c1, c2;
unsigned long int h1, h2, h3;
int i;

a = 0, b = 1, c1 = 0, c2 = 0;
for (i = 2; i < 98; i++)
{
if (a + b > LARGEST || c2 > 0 || c1 > 0)
{
h1 = (a + b) / LARGEST;
h2 = (a + b) % LARGEST;
h3 = a + b + h1;
a = b, b = h3;
a = b, b = h2;
printf("%lu%010lu", c2, b);
}
else
{
h2 = a + b;
a = b, b = h2;
printf("%lu", b);
}
if (i != 97)
{
printf(", ");
}
}
printf("\n");

return (0);
}
