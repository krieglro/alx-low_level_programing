#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: the number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: always returns 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
