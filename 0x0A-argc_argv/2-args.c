#include <stdio.h>

/**
 * main - function that prints all arguments it recieves
 * @argc: the number of arguments passed to the function
 * @argv: the argument vector of pointers to strings
 * Return: returns 0 if succesfull
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
