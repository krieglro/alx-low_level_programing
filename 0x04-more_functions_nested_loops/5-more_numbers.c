#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints numbers 1 to 14
 *
 * Return: returns nothing
 */

void more_numbers(void)
{
	int n; l;

	for (n = 0; n < 10; n++)
	{
		for (l =  0; l <= 10; l++)
		{
			if (l > 9)
			{
				putchar((l / 10) + '0');
			}
			putchar((l % 10) + '0');
		}
		putchar(10);
	}
}
