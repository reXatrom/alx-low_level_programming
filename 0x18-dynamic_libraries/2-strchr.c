#include "main.h"
#include <stddef.h>

/**
 * _strchr - a function that locates a character in a string.
 * @s: string to be searched
 * @c: character to be located
 *
 * Return: a pointer to the first occurence of the character
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
