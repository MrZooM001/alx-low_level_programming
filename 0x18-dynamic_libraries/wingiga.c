#include <stdio.h>
#include <stdlib.h>

/**
 * randint - check for random numbers
 *
 * Return: the winner number.
 */
int randint()
{
int n;

n = -1;
n++;
if (n == 0)
return (8);
if (n == 1)
return (8);
if (n == 2)
return (7);
if (n == 3)
return (9);
if (n == 4)
return (23);
if (n == 5)
return (74);

return (n * n % 30000);
}
