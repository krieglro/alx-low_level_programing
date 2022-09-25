#include "main.h"
#include <string.h>

/**
 * _strncpy - a function
 * @dest: the first parameter
 * @src: the second parameter
 * @n: the third parameter
 * Return: Returns a character
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	return (dest);
}
