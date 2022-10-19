#include "function_pointers.h"

/**
 * array_iterator - a function that executes another function
 * @array: integer array input
 * @size: the size of the array
 * @action: this is the pointer to the function
 *
 * Return: does not return anything
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array && action)
		for (a = 0; a < size; a++)
			action(array[a]);
}
