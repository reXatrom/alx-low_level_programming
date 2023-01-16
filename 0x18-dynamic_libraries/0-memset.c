#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @n: the number of bytes to be filled.
 * @s: this is with the constant @b
 * @b: memory area pointer
 *
 * Return: a pointer to the filled memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
