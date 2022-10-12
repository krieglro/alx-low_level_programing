#include "main.h"
#include <stdlib>

/**
 * array_range - function that creates an array of integers from min to max
 * @min: first value
 * @max: last value
 *
 * Return: null if failed pointer to array if successful
 */

int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
