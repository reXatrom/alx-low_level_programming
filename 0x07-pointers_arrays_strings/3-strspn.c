#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: initial segment
 * @accept: the prefix to be measured
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int index = 0, y, bytes;

	for (y = 0; s[y] != '\0'; y++)
	{
		if (s[y] != 32)
		{
			for (bytes = 0; accept[bytes] != '\0'; bytes++)
			{
				if (s[y] == accept[bytes])
					index++;
			}
		}
		else
			return (index);
	}
	return (index);

}
