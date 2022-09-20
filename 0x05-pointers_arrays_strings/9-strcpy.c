#include "main.h"

/**
 * _strcpy - copies pointer from src to dest
 * @dest: this is the file the  pointer is copied to
 * @src: this is the file the pointer is copied from
 * Return: returns pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *st = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (st);
}
