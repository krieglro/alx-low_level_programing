#include <stdio.h>
#include <stdlib.h>

/**
 * main - combinations of a number
 * @void: shows main doesn't take any arguement
 *
 * Description: the function prints a combination of a number
 * Return: Always 0
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + 48);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		++n;
	}
	putchar('\n');

	return (0);
}
