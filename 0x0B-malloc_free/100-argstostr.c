#include "main.h"

/**
* argstostr - a function that concatenates all the arguments of your program.
*
* @ac: count of args passed to the function
* @av: array of arguments
*
* Return: pointer to the new string
*/

char *argstostr(int ac, char **av)
{
		char *new_string = NULL;

		int h = 0, l = ac, x, sum = 0, temp = 0;

		if (ac == 0 || av == NULL)
			return (NULL);

		while (ac--)
			sum += (len(av[ac]) + 1);
		new_string = (char *) malloc(sum + 1);

		if (new_string != NULL)
		{
			while (h < l)
			{
				for (x = 0; av[h][x] != '\0'; x++)
					new_string[x + temp] = av[h][x];
				new_string[temp + x] = '\n';
				temp += (x + 1);
				h++;
			}
			new_string[temp] = '\0';
		}
		else
		{
			return (NULL);
		}
		return (new_string);
}

/**
* len - returns length of str
* @str: string counted
*
* Return: returns the length
*/

int len(char *str)
{
		int len = 0;

		if (str != NULL)
		{
			while (str[len])
				len++;
		}
	return (len);
}
