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

c = 'a';
while (c <= 'z')
{
putchar(c);
putchar('\n');
}

return (0);
}
