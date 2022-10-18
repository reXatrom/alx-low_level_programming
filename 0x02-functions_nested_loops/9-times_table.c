#include "main.h"

/**
 * times_table - printing 9 times table starting from 0
 * Return: Always 0
 */

void times_table(void)
{
	int num, multi, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar(0);

		for (multi = 1; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * multi;

			if (prod <= 9)
				_putchar(' ');
			else
				((prod / 10) + '0');
			((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
