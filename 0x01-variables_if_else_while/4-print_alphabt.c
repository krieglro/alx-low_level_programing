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
	char ower = 'n';

	while (lower <= 'z')
	{
		++lower;
		putchar(lower);
		++lower;
	}
	putchar('\n');

	return (0);
}
