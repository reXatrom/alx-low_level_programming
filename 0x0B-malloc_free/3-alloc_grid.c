#include "main.h"



/**
* alloc_grid - returns a pointer to a
* 2 dimensional array of integers.
*
* @width: width oàf array
* @height: height of array
*
* Return: pointer to the array
*/

int **alloc_grid(int width, int height)
{
	int **array;

	int a, l;

	if (width == 0 || height == 0)
		return (NULL);
	array = (int **) malloc(sizeof(int *) * height);
	if (array != NULL)
	{
		for (a = 0; a < height; a++)
		{
			array[a] = (int *) malloc(sizeof(int) * width);
			if (array[a] != NULL)
			{
				for (l = 0; l < width; l++)
					array[a][l] = 0;
			}
			else
			{
				while (a >= 0)
				{
					free(array[a]);
					a--;
				}
				free(array);
				return (NULL);
			}
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}
