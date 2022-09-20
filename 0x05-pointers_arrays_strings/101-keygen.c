#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - gives back a random valid password
 * Return: 0 if successful
 */

int main(void)
{
	int pasw, sum;

	srand(time());
	sum = 0;

	while (sum <= 2645)
	{
		pasw = (rand() % 128);
		sum += pasw;
		printf("%c", pasw);
	}
	printf("%c", 2772 - sum);

	return (0);
}
