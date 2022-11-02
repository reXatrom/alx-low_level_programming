#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x
 * raised to thepower of y
 * @x: the number
 * @y: the second number
 *
 * Return: pow recursion
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));

	else
		return (1);
}
