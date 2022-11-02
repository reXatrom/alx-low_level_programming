#include "main.h"

/**
 * _puts_recursion - a function that prints a string,
 * followed by a new line.
 * @s: the string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		__puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
