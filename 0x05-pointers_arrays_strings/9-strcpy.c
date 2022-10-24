#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: char type string
 * @src: char type string
 * Return: 0 success
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];

	dest[a] = '\0';

	return (dest);
}
