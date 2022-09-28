#include "main.h"

/**
 * _pow_recursion - power using recursion
 * @x: X to power y
 * @y: the power number
 *
 * Return: returns the result of the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
