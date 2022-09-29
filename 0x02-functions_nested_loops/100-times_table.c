#include "main.h"

/**
 * print_times_table - function that prints times table
 *@n: the parameter
 *Return: does not return anything
 */
void print_times_table(int n)
{
	int num, m, r;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (m = 1; m <= n; m++)
			{
				_putchar(',');
				_putchar(' ');
				r = num * m;
				
				if (r <= 9)
					_putchar(' ');
				if (r >= 100)
				{
					_putchar((r / 100) + '0');
				_putchar((r / 10) % 10 + '0');
				}
				else if (r <= 99 && r >= 10)
				{
					_putchar((r / 10) + '0');
				}
				_putchar((r % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
