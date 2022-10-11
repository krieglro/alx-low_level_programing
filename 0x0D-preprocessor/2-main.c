#include <stdio.h>

/**
 * main - main prints the name of a file that the proggramme
 * was compiled in
 * Return: returns 0 always
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
