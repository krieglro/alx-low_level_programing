#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that gives sum of its peremeters
 * @n: number of parameters passed to the function
 * @...: variables number of parameters to calculate sum of
 *
 * Return: returns 0 if n==0 or sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum = 0;

	va_start(nums, n);

	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
