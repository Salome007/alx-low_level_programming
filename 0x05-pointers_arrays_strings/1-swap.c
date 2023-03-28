#include "main.h"

/**
 *swap_int - a function that swaps the values of two integers.
 *@a: the first value
 *@b: the second value
 *Return: None
 */

void swap_int(int *a, int *b)
{
	int helper = *a;

	*a = *b;
	*b = helper;

}
