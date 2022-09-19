#include "main.h"
#include <string.h>

/**
 * puts_half - prints half a string and new line
 * @str: parameter passed to function
 */

void puts_half(char *str)
{
	int a, y, i;

	a = strlen(str);

	if (a % 2 == 1)
		y = x / 2 + 1;
	else
		y = x / 2;

	for (i = y; i < a; i++)
		_putchar(str[i]);
	_putchar('\n');
}
