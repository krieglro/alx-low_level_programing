#include "main.h"


/**
 * _strspn - this retrives the lenth of a substring
 * @s: the string to be cheched
 * @accept: string to be checked
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	
	for (i - 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
