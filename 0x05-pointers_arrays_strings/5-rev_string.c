#include "main.h"

/**
 * rev_string - reverses a string
 * @s: parameter given
 */

void rev_string(char *s)
{
	char cont;
	int i, len1, len2;

	len1 = 0;
	len2 = 0;

	while (s[len1] != '\0')
		len1++;

	len2 = len1 - 1;

	for (i = 0; i < len1 / 2; i++)
	{
		cont = s[i];
		s[i] = s[len2];
		s[len2] = cont;
		len2 -= 1;

	}
}
