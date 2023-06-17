#include <stdio.h>
/**
* main - Start point of the program
* Description: Print combination of single-digits numbers
* Return: 1 if success
*/
int main(void)
{
int n;
for (n = 48; n < 58; n++)
{
putchar(n);
if (n < 57)
{
putchar(44);
putchar(32);
}
}
putchar('\n');

return (0);
}
