#include <stdio.h>
/**
* main - Start point of the program
* Description: Print different combinations of double two digits
* Return: 1 if success
*/
int main(void)
{
int f;
int s;

for (f = 0; f < 100; f++)
{
for (s = 0; s < 100; s++)
{
if (f < s)
{
putchar(f / 10 + 48);
putchar(f % 10 + 48);
putchar(32);
putchar(s / 10 + 48);
putchar(s % 10 + 48);
if (!(f == 98 && s == 99))
{
putchar(44);
putchar(32);
}
}
}
}
putchar('\n');

return (0);
}
