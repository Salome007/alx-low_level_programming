#include "main.h"
#include <stdio.h>

/**
 * helper -  recursion function
 * @n: input integer
 * @i: number of iteration
 * Return: Always 0.
 */

int helper(int n, int i)
{
	if (i < n)
	{
		if (n % i == 0)
			return (0);
		return (helper(n, i + 1));
	}

	return (1);
}


/**
 * is_prime_number - 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: input integer
 * Return: Always 0.
 */


int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (helper(n, 2));
}
