#include <stdio.h>
/**
* main - Start point of the program
* Description: Print different combinations of two digits
* Return: 1 if success
*/
int main(void)
{
int f;
int s;
int t;

for (f = 48; f <= 57; f++)
{
for (s = f + 1; s < 58; s++)
{
for (t = s + 1; t < 58; t++)
{
putchar(f);
putchar(s);
putchar(t);
if (!(f == 55 && s == 56 && t == 57))
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
