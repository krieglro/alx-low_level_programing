#include "main.h"

/**
 * _puts_recursion - this is a function that prints a string recursively
 * @s: the string parameter
 */

void _puts_recursion(char *s)
{
	s = "lpa\0";

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
