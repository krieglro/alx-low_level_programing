#include "main.h"

/**
 * _puts - function puts
 * @str: the parameter
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
