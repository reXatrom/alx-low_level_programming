#include <stdio.h>
/** #include "main.h" */

/**
 * main - entry point
 *
 * Description: printing the numbers from  1 - 100 w/
 * Fizz for the multiples of 3, Buzz for the multiples of 5,
 * and FizzBuzz for multiples of both 3 and 5.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf('\n');

	return (0);
}
