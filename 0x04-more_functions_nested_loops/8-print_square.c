#include "main.h"

/**
 *print_square - print square of "#"
 *@n: number of # to print
 *Return: None
*/


void print_square(int n)
{
	int i, j;

	i = 0;
	if (n <= 0)
		_putchar('\n');
	else
	{

		while (i < n)
		{
			j = 0;
			while (j < n)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
