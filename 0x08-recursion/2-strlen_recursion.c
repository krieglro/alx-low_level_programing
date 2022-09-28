#include "main.h"

/**
 * _strlen_recursion - function to get length of string
 * @s: the length of the string
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
