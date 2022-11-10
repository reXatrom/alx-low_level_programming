#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: first char
 * @s2: secound char
 * @n: unsigned int
 *
 * Return: If the function fails, it should return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, l, x;

	char *s;

	if (s1 == NULL)
	{
		a = 0;
	}
	else
	{
		for (a = 0; s1[a]; ++a)
		;
	}
	if (s2 == NULL)
	{
		l = 0;
	}
	else
	{
		for (l = 0; s2[l]; ++l)
		;
	}
	if (l > n)
		l = n;
	s = malloc(sizeof(char) * (a + l + 1));
	if (s == NULL)
		return (NULL);
	for (x = 0; x < a; x++)
		s[x] = s1[x];
	for (x = 0; x < l; x++)
		s[x + a] = s2[x];
	s[a + l] = '\0';
	return (s);
}
