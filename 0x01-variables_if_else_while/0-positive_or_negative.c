#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 *main prints a random number to check if it is negative or positive
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("is zero");
	else if (n > 0)
		printf("is positive");
	else
		printf("is negative");
	 
	return(0);

}
