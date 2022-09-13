#include <stdio.h>

/*
 * main prints low case and upper case alphabet
 */

int main(void)
{

	char zh = 's';
	while (zh <= 'z')
	{
		putchar(zh);
		++zh;
	}
	putchar('\n');

	return(0);
}
