#include <stdio.h>
#include <stdlib.h>

/*
 * main prints lower case alphabet in reverse
 */

int main(void)
{
	char lower = 'z';
	while (lower >= 'a')
	{
		putchar(lower);
		--lower;
	}
	putchar('\n');
	return(0);
}
