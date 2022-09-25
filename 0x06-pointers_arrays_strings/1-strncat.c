#include "main.h"
#include <string.h>

/**
 * _strncat - this function appends a character
 * @dest: this is the first parameter
 * @src: this is the second character
 * @n: this is the third character
 * Return: a character
 */

char *_strncat(char *dest, char *src, int n)
{
	int inddex = 0, dest_len = 0;

	while (dest[idex++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
