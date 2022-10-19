#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: an integer array input
 * @size: the size of the array
 * @cmp: a pointer to the function that is used
 *
 * Return: the function retruns the first element that cmp doesn't retrun 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (a = 0; a < size; a++)
			if (cmp(array[a]))
				return (a);
	}

	return (-1);
}
