#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of
 * integers using the Interpolation search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t a, l, x;
	double f;

	if (array == NULL)
		return (-1);

	l = 0;
	x = size - 1;

	while (size)
	{
		f = (double)(x - l) / (array[x] - array[l]) * (value - array[l]);
		a = (size_t)(l + f);
		printf("Value checked array[%d]", (int)a);

		if (a >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[a]);
		}

		if (array[a] == value)
			return ((int)a);

		if (array[a] < value)
			l = a + 1;
		else
			x = a - 1;

		if (l == x)
			break;
	}

	return (-1);
}
