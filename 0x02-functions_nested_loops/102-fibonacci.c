#include <stdio.h>

/**
 * main - prints out first 50 fibonacci suit numbers
 * Return: returns 0
 */

int main(void)
{
	int d;
	unsigned long n1 = 0, n2 = 1, n3;

	for (d = 0; d < 50; d++)
	{
		n3 = n1 + n2;

		printf("%lu", n3);
		n1 = n2;
		n2 = n3;

		if (d == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
