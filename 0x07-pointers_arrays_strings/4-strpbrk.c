#include "main.h"

/**
 * _strpbrk - searches a string for any set bytes
 * @s: the string that is checked
 * @accept: stirng to check
 *
 * Return: pointer to bytes
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
