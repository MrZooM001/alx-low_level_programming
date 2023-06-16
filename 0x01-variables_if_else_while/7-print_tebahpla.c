#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Start point of the program
* Description: Print alphabet in lowercase
* Return: 1 if success
*/
int main(void)
{
char c;

c = 'z';
while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');

return (0);
}
