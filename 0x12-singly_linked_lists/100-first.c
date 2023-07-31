#include <stdio.h>

void print_pre_main(void)__attribute__((constructor));

/**
 * print_pre_main - A function to print a string before main().
 *
 * Return: Void.
 */
void print_pre_main(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
