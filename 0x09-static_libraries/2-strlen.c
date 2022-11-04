#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: returns lenght;
 */

int _strlen(char *s)
{
	int count, alx;

	alx = 0;

	for (count = 0; s[count] != '\0'; count++)
		alx++;
	return (alx);
}
