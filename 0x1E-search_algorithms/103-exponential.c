#include "search_algos.h"

/**
  * _binary_search - Searching for a value in a sorted array
  *                  of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @left: The starting index of the [sub]array to search.
  * @right: The ending index of the [sub]array to search.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t alx;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (alx = left; alx < right; alx++)
			printf("%d, ", array[alx]);
		printf("%d\n", array[alx]);

		alx = left + (right - left) / 2;
		if (array[alx] == value)
			return (alx);
		if (array[alx] > value)
			right = alx - 1;
		else
			left = alx + 1;
	}

	return (-1);
}

/**
  * exponential_search - Searching for a value in a sorted array
  *                      of integers using exponential search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t alx = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (alx = 1; alx < size && array[alx] <= value; alx = alx * 2)
			printf("Value checked array[%ld] = [%d]\n", alx,
array[alx]);
	}

	right = alx < size ? alx : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", alx / 2, right);
	return (_binary_search(array, alx / 2, right, value));
}
