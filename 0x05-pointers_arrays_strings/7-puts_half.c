#include "main.h"
#include <stdio.h>

/**
 * puts_half - a function that prints half of a string,
 * followed by a new line.
 * @str: char to check
 * Return: Always 0 (success)
 */

void puts_half(char *str)
{
	int m = 0, n = 0, p;

	while (str[m++])
		n++;

	if ((n % 2) == 0)
		p = n / 2;

	else
		p = (n + 1) / 2;

	for (m = p; m < n; m++)
		_putchar(str[m]);

	_putchar('\n');
}
