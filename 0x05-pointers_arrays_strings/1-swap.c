#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: first int
 * @b: second int
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int constant = *a;
	*b = *a;
	*a = constant;
}
