#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a s bytes of a buffer
 * @c: buffer to print
 * @s: bytes of buffer to print
 * @l: line of buffer to print
 *
 * Return: void
 */

void print_line(char *c, int s, int l)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		if (a <= s)
			printf("%02x", c[l * 10 + a]);
		else
			printf("  ");
		if (a % 2)
			putchar(' ');
	}
	for (b = 0; b <= s; b++)
	{
		if (c[l * 10 + k] > 31 && c[l * 10 + k] < 127)
}