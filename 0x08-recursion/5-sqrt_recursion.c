#include "main.h"

/**
  * helper - run recursvely
  * Return: squre of the given number
  * @n: number to check;
  * @m: n /2
  */

int helper(int n, int m)
{
	if (m * m == n)
		return (m);
	else if (m * m > n)
		return (-1);
	return (helper(n, m + 1));
}

/**
  * _sqrt_recursion - returns the natural square root of a number.
  * @n: number for checking
  * Return: the root of n
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helper(n, 0));
}
