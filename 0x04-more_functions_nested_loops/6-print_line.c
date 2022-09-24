#include "main.h"

/**
 * print_line - prints a straight line
 * @n: the parameter
 * Return: nothing is returned
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	for (x = 0; x <= n; x++)
		_putchar('_');
	_putchar('\n');
}
