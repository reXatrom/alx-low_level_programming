#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int j, p;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	j = atoi(argv[1]);
	p = atoi(argv[2]);
	printf("%d\n", j * p);

	return (0);
}
