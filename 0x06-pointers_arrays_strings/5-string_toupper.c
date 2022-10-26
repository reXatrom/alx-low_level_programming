#include "main.h"
#include <stdio.h>

/**
 * string_toupper - a function that changes all lowercase
 * letters of a string to uppercase.
 * @s: the string to be changed
 *
 * Return: a pointer to the changed string.
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}

	return (s);
	_putchar('\n');
}
