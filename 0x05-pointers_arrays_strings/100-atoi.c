#include "main.h"
#include <stdio.h>

/**
 * _atoi - a function that convert a string to an integer.
 * @s: the pointer to be converted
 * Return: A integer
 */

int _atoi(char *s)
{
	int c = 0;

	unsigned int num = 0;

	int min = 1;

	int max = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			max = 1;
			num = (num * 10) + (s[c] - '0');
			c++;
		}

		if (max == 1)
		{
			break;
		}
		c++;
	}

	num *= min;
	return (num);
}
