#include "main.h"

/**
 * print_chessboard -this function prints a chessboard
 * @a: pointer to the pieces to print
 *
 * Return: returns void
 */

void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8;; y++)
		{
			_putchchar(a[x][y]);
		}
		_putchar('\n');
	}
}
