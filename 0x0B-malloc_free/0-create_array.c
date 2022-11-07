#include "main.h"

/**
* create_array - a function that creates an array of chars,
* and initializes it with a specific char.
*
* @size: Size of the array
* @c: Character to insert
*
* Return: NULL if size is zero or if it fails,
* pointer to array if everything is normal.
*/

char *create_array(unsigned int size, char c)
{
	char *array;

	unsigned int num;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (num = 0; num < size; num++)
		array[num] = c;

	return (array);
}
