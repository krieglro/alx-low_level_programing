#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 *main prints a random number to check if it is negative or positive
 */

int main(void)
{
	int n;

	srand (time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero", n);
	else if (n > 0)
		printf("%d is positive", n);
	else
		printf("%d is negative", n); 
	return(0);
}
