#include "main.h"


/**
 * _strlen_recursion - function that gets the length of a string
 * @s: the string parameter
 *
 * Return: returns the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (l + _strlen_recursion(s));
}
