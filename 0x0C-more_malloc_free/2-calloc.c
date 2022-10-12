#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: the number of ellements
 * @size: the bytes size of each ellement
 *
 * Return: return 0 if nmemb is 0 or NULL if function fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (mem);
}
