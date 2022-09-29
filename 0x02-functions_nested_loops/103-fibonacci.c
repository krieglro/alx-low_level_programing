#include <stdio.h>

/**
 * main - function that prints sum of even fibonacci suit elements
 *
 * Return: returns 0
 */

int main(void)
{
	unsigned long n1 = 0, n2 = 1, n3 = 0, s = 0;

	while (n3 <= 4000000)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;

		if ((n1 % 2) == 0)
			s += n1;
	}
	printf("%ld\n", s);
	return (0);
}
