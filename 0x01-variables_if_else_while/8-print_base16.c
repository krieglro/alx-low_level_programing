#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all base 16 numbers in lower case
 * @void: shows that main doesn't take any arguments
 *
 * Description: prints all base 16 numbers in lower case
 * Return: Always 0
 */

int main(void)
{
	int n = 48;

	while (n <= 102)
	{
		putchar(n);
		if (n == 57)
			n += 39;
		++n;
	}

	putchar('\n');
	return (0);
}
