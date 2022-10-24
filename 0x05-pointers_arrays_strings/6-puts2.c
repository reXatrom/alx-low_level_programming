#include "main.h"
#include <stdio.h>

/**
 * puts2 - a function that prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: char to be checked
 * Return: 0 for success
 */

void puts2(char *str)
{
	int n = 0, m = 0;

	while (str[n++])
		m++;
	for (n = 0; n < m; n += 2)
		_putchar(str[n]);

	_putchar('\n');
}
