#include "main.h"

/**
 * more_numbers - prints numbers 1 to 14
 *
 * Return: returns nothing
 */

void more_numbers(void)
{
	int n, l;

	for (n = 0; n < 10; n++)
	{
		for (l = 0; l < 15; l++)
		{
			if (l >= 10)
				_putchar((l / 10) + '0');
			_putchar((l % 10) + '0');
		}
		_putchar('\n');
	}
}
