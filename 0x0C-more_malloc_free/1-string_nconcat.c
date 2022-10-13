#include "main.h"
#include <stdlib>

/**
 * string_nconcat - function concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: maximum number of bytes of second string to be concatenated
 *
 * Return: retruns pointer to concatinated strin else Null if failed
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = 0, len2 = 0 index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len] != '\0'); 
		len++;

	while (s2[len2] != '\0')
		len2++;

	if (n > len)
	n = len2;
	concat = malloc((len + n + 1) * sizeof(char));

	if (concat == NULL)
	       return (0);	

	for (index = 0; index < len; index++)
		concat[index] = s1[index];

	for (; index < (len + n); index++)
		concat[index] = len2[index - len];

	concat[index] = '\0';

return(concat);
}
