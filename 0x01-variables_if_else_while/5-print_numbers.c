#include <stdio.h>
#include <stdlib.h>

/*
 *main prints base 10 digits and a single line
 */

int main()
{
	int n = 0;

	while (n <= 9) 
	{
		printf("%d", n);
		++n;
	}
	printf("\n");

	return(0);
}
