#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Start point of the program
* Description: Print alphabet in lowercase then uppercase
* Return: 1 if success
*/
int main(void)
{
char c;
char u;

c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
u = 'A';
while (u <= 'Z')
{
putchar(u);
u++;
}
putchar('\n');

return (0);
}
