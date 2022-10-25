#include <stdio.h>

/**
 * bmain - a function that ececuts before main
 * Return: nothing
 */

void __attribute__ ((constructor)) bmain()
{
	printf("Your're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
