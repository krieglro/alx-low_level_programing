#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - square root using recursion function
 * @n: this is the parameter to be squared
 *
 * Return: returns the square root of a number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - function for square root
 * @n: a number
 * @i: the iterator
 *
 * Return: returns a number
 */

int _sqrt(int n, int i)
{
	int sq = i * i;

	if (sq > n)
		return (-1);
	if (sq == n)
		return (i);
	return (_sqrt(n, i + 1));
}
