#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @needle: the first occurrence of the substring
 *
 * @haystack: the longer string to search
 *
 * Return: @NULL
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b] && (haystack[a] == needle[0]))
		{
			if (haystack[a + b] == needle[b])
				b++;
			else
				break;
		}
		if (needle[b])
		{
			a++;
			b = 0;
		}
		else
			return (haystack + a);
	}
	return (0);
}
