#include "main.h"
#include <stdio.h>

/**
 * _strcmp - a function that compares two strings.
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);

	_putchar('\n');
}
