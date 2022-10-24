#include "main.h"
#include <stdio.h>

/**
 * _strlen - a function that returns the length of a string.
 * @s: char to be checked
 * Return: Always 0 (success)
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
