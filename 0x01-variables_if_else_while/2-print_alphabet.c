#include <stdio.h>

/**
 * main - prints low case and upper case alphabet
 * @void: shows main does ont return anything
 *
 * Description: this function prints out the alphabet
 * Return: Always 0
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
