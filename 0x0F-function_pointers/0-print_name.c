#include "function_pointers.h"

/**
 * print_name - A function that prints a name
 * @name: the name input
 * @f: the function pointer
 *
 * Return: doesn't return anything
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
