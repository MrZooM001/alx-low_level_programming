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

for (f = 48; f <= 57; f++)
{
for (s = f + 1; s < 58; s++)
{
putchar(f);
putchar(s);
if (!(f == 56 && s == 57))
{
putchar(44);
putchar(32);
}
}
}
putchar('\n');

return (0);
}
