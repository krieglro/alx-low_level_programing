#include "main.h"
/**
* print_alphabet_x10 -> prints  the lowercase aphabets
 */

void print_alphabet_x10(void)
{
	int a;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
