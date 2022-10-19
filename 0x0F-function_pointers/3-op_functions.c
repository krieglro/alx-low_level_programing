#include "3-calc.h"

/**
 * op_add - funciton that adds two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: an integer result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub -  fucntion subtracts two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: returns an integer result of the subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - funciton that multiplies two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: integer result of muliplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - funciton that divides two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: integer result of the division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates the module of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: returns an integer remainder after devision
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b)
}
