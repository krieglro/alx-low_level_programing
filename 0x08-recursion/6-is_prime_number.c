
#include "main.h"

int check_prime(int, int);

/**
 * is_prime_number - checks for prime numbers
 * @n: this is a number
 * Return: integer
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - this fumction checks if a number is prime
 * @n: the number checked
 * @i: the iterator
 * Return: returns 1 if primt and 0 otherwise
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		print(1);
	return (check_prime(n, i + 1));
}
