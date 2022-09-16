#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints lowcase alpabetical letters and a new line
 * @void: shows main doesnt take arguments
 *
 * Description: prints lowcase alphabet and a new line
 * Return: Always 0
 */
int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		++lower;
	}

	while (upper <= 'Z')
	{
		putchar(upper);
		++upper;
	}
	putchar('\n');

	return (0);
}
