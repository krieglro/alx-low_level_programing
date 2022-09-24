#include <stdio.h>
#includ "main.h"

/**
 * print_numbers - prints all numbers from 0 to 9
 *
 * Return: Returns nothing
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
}
