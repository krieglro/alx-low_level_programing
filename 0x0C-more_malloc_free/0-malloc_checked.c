#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory
 * @b: number of bytes to allocate
 *
 * Return: returns a pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *n = malloc(b);

	if (n == NULL)
		exit(98);

	return (n);
}
