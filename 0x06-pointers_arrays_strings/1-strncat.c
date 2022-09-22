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
	strncat(dest, src, n);
	return (dest);
}
