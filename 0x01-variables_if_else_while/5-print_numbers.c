#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints base 10 digits and a single line
 *
 * Description: prints a base 10 digit and a single line after
 * Return: return 0 always
 */

int main(void)
{
	int n = 0;

	while (n <= 9) 
	{
		printf("%d", n);
		++n;
	}
	printf("\n");

	return (0);
}
