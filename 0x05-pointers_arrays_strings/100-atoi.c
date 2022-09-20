#include "main.h"

/**
 * _atoi - converst a string into an integer
 * @s: the pointer to a charter
 *
 * Return: an int
 */

int _atoi(char *s)
{
	int a;
	undefigned int num;
	char *ctain;

	ctain = s;
	num = 0;
	a = 1;

	while (*ctain != '\0' && (*ctain < '0' || *ctain > '9'))
	{
		if (*ctain == '-')
			a *= -1;
		ctain++;
	}
	if (*ctain != '\0')
	{
		do {
			num = num * 10 + (*ctain - '0');
			ctain++;
		} while (*ctain >= '0' && *ctain <= '9');
	}
	return (num * a);
}
