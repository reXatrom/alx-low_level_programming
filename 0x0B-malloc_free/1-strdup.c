#include "main.h"

/**
* _strdup - a function that returns a pointer to a newly allocated space
* in memory, which contains a copy of the string given as a parameter.
*
* @str:String to be copied
*
* Return: NULL in case of error, pointer to allocated
* space
*/

char *_strdup(char *str)
{
	char *cpy;

	int num, len;

	if (str == NULL)
		return (NULL);

	for (num = 0; str[num]; num++)
		len++;
	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
		return (NULL);

	for (num = 0; str[num]; num++)
	{
		cpy[num] = str[num];
	}

	cpy[len] = '\0';

	return (cpy);

}
