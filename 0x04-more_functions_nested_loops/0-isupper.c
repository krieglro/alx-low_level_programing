#include "main.h"

/**
*_isupper - checks if character is upper of not
*@c: character tested
*Return: 1 or 0
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
