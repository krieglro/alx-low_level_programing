#include "main.h"
/**
 * int_abs -> returns the absolute value of a number
 * @n: the parameter recieved
 * Return: the absolute value of an integer
 */
int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
