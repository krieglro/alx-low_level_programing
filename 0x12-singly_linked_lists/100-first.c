#include <stdio.h>

/**
 * bmain - excecuts before main
 * Return: nothing
 */

void __attribute__ ((constructor)) bmain()
{
	printf("Your're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
