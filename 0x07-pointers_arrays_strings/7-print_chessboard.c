#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard.
 * @a: pointer to the pieces to be printed
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int j, k;

	for (j = 0; j < 8, j++)
	{
		for (k = 0; k < 8, k++)
		{
			_putchar(a[j][k]);
		}
		_putchar('\n');
	}
	return (void);
}
