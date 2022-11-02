#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: the number
 *
 * Return: num
 */

nt factorial(int n)
{
	int num;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		num = n * factorial(n - 1);
	}
	return (num);
}
