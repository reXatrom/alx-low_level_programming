#include "main.h"
#include <stdio.h>

/**
 * print_number - a function that prints an integer.
 * @num: integer to be printed
 *
 * Return: void
 */

void print_number(int num)
{
	unsigned int number = num;

	if (num < 0)
	{
		_putchar();
		number = -number;
	}

	if ((number / 10) > 0)
		print_number(number / 10);

	_putchar((number % 10) + '0');
}
