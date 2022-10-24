#include "main.h"
#include <stdio.h>

/**
 * print_rev - a function that prints a string,
 * in reverse, followed by a new line.
 * @s: char to be printed in reverse
 */

void print_rev(char *s)
{
	int breadth, length;

	length = strlen(s);
	for (breadth = length - 1; breadth >= 0; breadth--)

		_putchar(s[breadth]);

	_putchar('\n');
}
