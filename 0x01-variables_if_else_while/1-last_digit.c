#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - Determine if its greater than 5, equal 0 or less than 6
*
*Return: Always 0 (Success)
*/

int main(void)
{
	int n, j;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	j = n % 10;

	if (j > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n",
				n, j);
	}
	else if (j < 6 && (j) != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n",
			n, j);
	}
	else
	{
		printf("last digit of %d is %d and is 0\n", n, j);
	}
	return (0);
}

