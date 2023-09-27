#include "main.h"
/**
 * helper - function that helps to calculate whether n is prime or not
 * @n: integer to test
 * @i: integer to help calculate whether n is prime
 * Return: 1 if prime, otherwise 0
 */
int helper(int n, int i)
{
	if (n >= (i * i))
	{
		/* skip its multiples and even numbers after 5 */
		if (n % i == 0 || n % (i + 2) == 0)
			return (0);
		/* check primes after 11 */
		i = i + 6;
	}
	return (1);
}
/**
 * is_prime_number - function that returns 1 if prime, otherwise 0
 * @n: integer to test
 * Return: 1 if prime, otherwise 0
 */
int is_prime_number(int n)
{
	/* if less than 1, not a prime */
	if (n <= 1)
		return (0);
	/* 2 and 3 are prime */
	else if (n <= 3)
		return (1);
	/* if factors of 2 or 3, not likely a prime */
	else if (n % 2 == 0 || n % 3 == 0)
		return (0);
	else
		return (helper(n, 5));
}

