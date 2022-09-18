#include <stdio.h>

/**
 * main = prints either number or fizz, buzz or fizzBuzz
 *
 * Return: returns 0
 */

int main(void)
{
	int n =1;

	while (n++ < 100)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((n % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((n % 5) == 0)
		{
			if (n == 100)
			{
				printf("Buzz ");
				printf("\n");
			}
			else
			{
				printf("Buzz ");
			}
		}
	}
}
