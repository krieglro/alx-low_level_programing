#include <stdio.h>

/**
 * main - function that prints its name
 * @argc: number of arguments passed to the function
 * @argv: an array of command listed
 *
 * Return: 0 for success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
