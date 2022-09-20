#include "main.h"
#include <string.h>

/**
 * puts_half - prints half a string and new line
 * @str: parameter passed to function
 * Return: no return value
 */

oid puts_half(char *str)
{
	int index, hlf;

	index = 0;
	while (str[index] != '\0')
		index++;

	hlf = index / 2;

	if (index % 2 == 1)
		half++;

	while (hlf < index)
	{
		_putchar(str[half]);
		hlf++;
	}
	_putchar('\n');
}
