#include <stddef.h>

/**
 * array_iterator - a function that executes a given function
 *                  as a parameter on each element of an array
 *
 * @array: array to iterate
 * @size: size of array
 * @action: pointer to function to call
 *
 * Return: empty if @array and @action is NULL
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int alx;

	if (array != NULL && size > 0 && action != NULL)
		for (alx = 0; alx < size; alx++)
			action(array[alx]);
}
