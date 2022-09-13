#include <stdio.h>

/*
 * main prints low case and upper case alphabet
 * Description: this function prints out the alphabet
 */

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
