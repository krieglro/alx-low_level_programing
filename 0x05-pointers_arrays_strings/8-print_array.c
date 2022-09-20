#include "main.h"
#include <stdio.h>

/**
 * print_array - prints a digit of array
 * @a: array parameter
 * @n: number of values parameter
 * Return: returns the inputs of a  and n
 */

void print_array(int *a, int n)
{
	int s;

	for (s = 0; s < n; s++)
	{
		printf("%d", a[s]);
		if (s != n - 1)
		{
			printf(", ");
			printf("  ");
	}

	printf("\n");
}
