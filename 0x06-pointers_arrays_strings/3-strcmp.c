#include "main.h"

/**
 * _strcmp = compares pointers to two strings
 * @s1: Apointer to the first string to be compared
 * @s2: A pointer to the second string to be compares
 *
 * Retrun: If str 1 < str2, the negative difference of the first unmatched char
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
