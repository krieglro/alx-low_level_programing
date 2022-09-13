#include <stdio.h>

/*
 * main prints low case and upper case alphabet
 */

/*betty style indentation*/
int main(void)
{

	char zh = 'a';

	while (zh <= 'z')
	{
		putchar (zh);

		++zh;

	}
	putchar ('\n');

	return (0);
}
