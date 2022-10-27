#include "main.h"
#include <stdio.h>

/**
 * print_buffer - print a buffer
 * @b: buffer to print
 * @size: size of buffer
 *
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int a;

	for (a = 0; a <= (size - 1) / 10 && size; a++)
	{
		printf("%08x: ", a * 10);
		if (a < size / 10)
		{
			print_line(b, 9, a);
		}
		else
		{
			print_line(b, size % 10 - 1, a);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
