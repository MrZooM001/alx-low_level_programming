#include <stdio.h>
/**
* main - Start point of the program
* Description: Print hexa numbers
* Return: 1 if success
*/
int main(void)
{
int n;
for (n = 48; n <= 102; n++)
{
if (n >= 48 && n <= 57)
{
putchar(n);
}
else if (n >= 97 && n <= 102)
{
putchar(n);
}
else
{
}
}
putchar('\n');

return (0);
}
