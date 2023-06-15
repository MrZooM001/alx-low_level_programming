#include <stdio.h>
/**
* main - Entry point
* Description: Print sizes of some of data types.
* Return: 0
*/
int main(void)
{
char c;
int i;
float f;

printf("Size of a char: %c byte(s)\n", (unsigned char)sizeof(c));
printf("Size of an int is: %d byte(s)\n", (unsigned int) sizeof(i));
printf("Size of a long int is: %ld byte(s)\n", (unsigned long int)sizeof(i));
printf("Size of a long long int: %lld byte(s)\n", (unsigned long long int)sizeof(i));
printf("Size of a float is: %d byte(s)\n",(unsigned int)sizeof(f));
return (0);
}
