#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that prints the minimum number of coins
 * to make change for an amount of money
 *
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int total, count, change, aux;

	int cents[] = {25, 10, 5, 2, 1};

	count = total = change = aux = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]);

	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (cents[count] != '\0')
	{
		if (total >= cents[count])
		{
			aux = (total / cents[count]);

			change += aux;
			total -= cents[count] * aux;
		}
		count++;
	}
	printf("%d\n", change);
	return (0);
}
