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
	strncpy(dest, src, n);
	return (dest);
}
