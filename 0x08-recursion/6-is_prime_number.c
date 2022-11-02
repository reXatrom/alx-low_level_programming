#include "main.h"

/**
 * checking - checking to see if my numbers are prime numbers
 * @a: int
 * @l: int
 *
 * Return: int
 */

int checking(int a, int l)
{
	if (l < 2 || l % a == 0)
		return (0);
	else if (a > l / 2)
		return (1);
	else
		return (checking(a + 1, l));
}

/**
 * is_prime_number - a function that returns 1 if the
 * input integer is a prime number, otherwise return 0.
 * @n: int
 *
 * Return: int
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (checking(2, n));
}
