#include "main.h"

/**
 * print_chessboard -this function prints a chessboard
 * @a: pointer to the pieces to print
 *
 * Return: returns void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;
	
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8;; j++)
		{
			_putchchar(a[i][j]);
		}
		_putchar('\n');
	}
}
