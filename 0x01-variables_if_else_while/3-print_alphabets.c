#include <stdio.h>
#include <stdlib.h>

/*
 * main prints lowcase alpabetical letters and a new line"
 */

int main()
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

	return(0);
}
