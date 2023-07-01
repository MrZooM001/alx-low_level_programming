#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Start point
 *
 * Return: Always 0.
 */
int main(void)
{
int pwd_length = 8;
char password[pwd_length];
int i, sum, n;

sum = 0;
srand(time(NULL));
for (i = 0; i < pwd_length; i++) {
password[i] = rand() % 78 + '0';
putchar(password[i]);
sum += (password[i] - '0');
if ((2772 - sum) - '0' < 78)
{
n = 2772 - sum - '0';
sum += n;
putchar(n + '0');
break;
}
}
putchar('\n');

return (0);
}
