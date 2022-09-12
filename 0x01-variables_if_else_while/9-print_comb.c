#include <stdio.h>
#include <stdlib.h>

/*
 * main combinations of a number 
 */

int main()
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

	retun(0);
}
