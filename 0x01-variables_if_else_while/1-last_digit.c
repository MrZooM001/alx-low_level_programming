#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Start point of the program
* Description: Print the last digit of a given number
* Return: 1 if success
*/
int main(void)
{
int n;
int lst_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
lst_digit = n % 10;
if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lst_digit);
}
else if (n == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lst_digit);
}
else if (n < 6 && n != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0 \n", n, lst_digit);
}

return (0);
}
