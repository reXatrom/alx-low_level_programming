#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard.
 * @a: pointer to the pieces to be printed
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int A, B;

	for (A = 0; A < 8, A++)
	{
		for (B = 0; B < 8, B++)
		{
			_putchar(a[A][B]);
		}
		_putchar('\n');
	}

}
