#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Start point of the program
* Description: Print whether the given number is negative or positive.
* Return: 1 if success
*/
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n > 0)
        {
                printf("%d is positive\n", n);
        }
        else if (n == 0)
        {
                printf("%d is zero\n", n);
        }
        else
        {
                printf("%d is negative\n", n);
        }

        return (0);
}
