#include "main.h"

/**
 * reverse_array - function that reverse an array
 * @a: the current array
 * @n: number of items in the array
 * Return: the reversed array
 */


void reverse_array(int *a, int n)
{
	int len = n - 1;
	int i = 0;
	int tmp;

	while (i < len / 2)
	{
		tmp = a[i];
		a[i] = a[len - i];
		a[len - i] = tmp;
		i++;
	}

}
