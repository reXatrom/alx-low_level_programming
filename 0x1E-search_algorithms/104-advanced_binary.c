#include "search_algos.h"

/**
  * advanced_binary_recursive - searches for a value in an array of
  *				integers using the Binary search algorithm.
  *
  * @array: Input of the [sub]array to search for.
  * @left: The starting index of the [sub]array to search.
  * @right: The ending index of the [sub]array to search.
  * @value: The value to search for.
  *
  * Return: If the value is not present, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t alx;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (alx = left; alx < right; alx++)
		printf("%d, ", array[alx]);
	printf("%d\n", array[alx]);

	alx = left + (right - left) / 2;
	if (array[alx] == value && (alx == left || array[alx - 1] != value))
		return (alx);
	if (array[alx] >= value)
		return (advanced_binary_recursive(array, left, alx, value));
	return (advanced_binary_recursive(array, alx + 1, right, value));
}

/**
  * advanced_binary - Searches for a value in a sorted array
  *                   of integers using advanced binary search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
