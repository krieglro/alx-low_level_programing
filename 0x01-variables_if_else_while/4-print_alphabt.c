#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet
 * @void: shows that main does not take arguments
 *
 * Description: main prints the alphabet in lower case
 * Return: Always 0
 */

int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		if (lower == 'e' || lower == 'q')
		{
			++lower;
		}
		putchar(lower);
		++lower;
	}
	putchar('\n');

	return (0);
}
