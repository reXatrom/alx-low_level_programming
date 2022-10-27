#include "main.h"
#include <stdio.h>

/**
 * rot13 - a function that encodes a string using rot13.
 * @str: the string to be encoded.
 *
 * Return: a pointer to the encoded string.
 */

char *rot13(char *str)
{
	int index1, index2;

	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (index1 = 0; *(str + index1); index1++)
	{
		for (index2 = 0; index2 < 52; index2++)
		{
			if (a[index2] == *(str + index1))
			{
				*(str + index1) = b[index2];
				break;
			}
		}
	}
	return (str);
}
