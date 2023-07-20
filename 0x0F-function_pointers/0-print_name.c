#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: Pointer to character.
 * @f: Function pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
(*f)(name);
}
