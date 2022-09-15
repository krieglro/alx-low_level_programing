#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints base 10 numbers
 * @void: shows main doesnt take any arguements
 *
 * Description: prints base 10 numbers
 * Return: Always 0
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		++n;
	}
	putchar('\n');
	return (0);
}
