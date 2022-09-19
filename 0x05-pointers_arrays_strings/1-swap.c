#include "main.h"

/**
 * swap_int - swaps the values of 2 integers
 * @a: parameter 1
 * @b: parameter 2
 */

void swap_int(int *a, int *b)
{
	int ctain;

	ctain = *a;
	*a = *b;
	*b = ctain;
}
